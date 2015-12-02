﻿#pragma once

#include <string.h>
#include <new>
#include "types.h"
#include "memory.h"

#ifdef _WIN
#pragma warning (disable:4100)
#pragma warning (disable:4514)
#endif

//-----------------------------------------------------------------------------
// The CUtlMemory class:
// A growable memory class which doubles in size by default.
//-----------------------------------------------------------------------------
template< class T >
class CUtlMemory
{
public:
	// constructor, destructor
	CUtlMemory( int nGrowSize = 0, int nInitSize = 0 );
	CUtlMemory( T* pMemory, int numElements );
	~CUtlMemory();

	// element access
	T& operator[]( int i );
	T const& operator[]( int i ) const;
	T& Element( int i );
	T const& Element( int i ) const;

	// Can we use this index?
	bool IsIdxValid( int i ) const;

	// Gets the base address (can change when adding elements!)
	T* Base();
	T const* Base() const;

	// Attaches the buffer to external memory....
	void SetExternalBuffer( T* pMemory, int numElements );

	// Size
	int NumAllocated() const;
	int Count() const;

	// Grows the memory, so that at least allocated + num elements are allocated
	bool Grow( int num = 1 );

	// Makes sure we've got at least this much memory
	void EnsureCapacity( int num );

	// Memory deallocation
	void Purge();

	// is the memory externally allocated?
	bool IsExternallyAllocated() const;

	// Set the size by which the memory grows
	void SetGrowSize( int size );

	//设置增长模式和初始化大小   by zhao
	void SetMode(int nGrowSize, int nInitAllocationCount );  

private:
	enum
	{
		EXTERNAL_BUFFER_MARKER = -1,
	};

	T* m_pMemory;
	int m_nAllocationCount;
	int m_nGrowSize;
};


//-----------------------------------------------------------------------------
// constructor, destructor
//-----------------------------------------------------------------------------
template< class T >
CUtlMemory<T>::CUtlMemory( int nGrowSize, int nInitAllocationCount ) : m_pMemory(0), 
	m_nAllocationCount( nInitAllocationCount ), m_nGrowSize( nGrowSize )
{
	assert( (nGrowSize >= 0) && (nGrowSize != EXTERNAL_BUFFER_MARKER) );
	if (m_nAllocationCount)
	{
		m_pMemory = (T*)MemAlloc( m_nAllocationCount * sizeof(T) );
	}
}

template< class T >
void CUtlMemory<T>::SetMode(int nGrowSize, int nInitAllocationCount )
{
	if(m_pMemory)
	{
		MemFree(m_pMemory);
		m_pMemory=NULL;
	}

	if(nGrowSize<=0)
		m_nGrowSize=EXTERNAL_BUFFER_MARKER;
	else
		m_nGrowSize=nGrowSize;

	if(nInitAllocationCount>0)
	{
		m_nAllocationCount=nInitAllocationCount;
		m_pMemory = (T*)MemAlloc( m_nAllocationCount * sizeof(T) );
	}
}

template< class T >
CUtlMemory<T>::CUtlMemory( T* pMemory, int numElements ) : m_pMemory(pMemory),
	m_nAllocationCount( numElements )
{
	// Special marker indicating externally supplied memory
	m_nGrowSize = EXTERNAL_BUFFER_MARKER;
}

template< class T >
CUtlMemory<T>::~CUtlMemory()
{
	Purge();
}


//-----------------------------------------------------------------------------
// Attaches the buffer to external memory....
//-----------------------------------------------------------------------------
template< class T >
void CUtlMemory<T>::SetExternalBuffer( T* pMemory, int numElements )
{
	// Blow away any existing allocated memory
	Purge();

	m_pMemory = pMemory;
	m_nAllocationCount = numElements;

	// Indicate that we don't own the memory
	m_nGrowSize = EXTERNAL_BUFFER_MARKER;
}


//-----------------------------------------------------------------------------
// element access
//-----------------------------------------------------------------------------
template< class T >
inline T& CUtlMemory<T>::operator[]( int i )
{
	assert( IsIdxValid(i) );
	return m_pMemory[i];
}

template< class T >
inline T const& CUtlMemory<T>::operator[]( int i ) const
{
	assert( IsIdxValid(i) );
	return m_pMemory[i];
}

template< class T >
inline T& CUtlMemory<T>::Element( int i )
{
	assert( IsIdxValid(i) );
	return m_pMemory[i];
}

template< class T >
inline T const& CUtlMemory<T>::Element( int i ) const
{
	assert( IsIdxValid(i) );
	return m_pMemory[i];
}


//-----------------------------------------------------------------------------
// is the memory externally allocated?
//-----------------------------------------------------------------------------
template< class T >
bool CUtlMemory<T>::IsExternallyAllocated() const
{
	return m_nGrowSize == EXTERNAL_BUFFER_MARKER;
}


template< class T >
void CUtlMemory<T>::SetGrowSize( int nSize )
{
	assert( (nSize >= 0) && (nSize != EXTERNAL_BUFFER_MARKER) );
	m_nGrowSize = nSize;
}


//-----------------------------------------------------------------------------
// Gets the base address (can change when adding elements!)
//-----------------------------------------------------------------------------
template< class T >
inline T* CUtlMemory<T>::Base()
{
	return m_pMemory;
}

template< class T >
inline T const* CUtlMemory<T>::Base() const
{
	return m_pMemory;
}


//-----------------------------------------------------------------------------
// Size
//-----------------------------------------------------------------------------
template< class T >
inline int CUtlMemory<T>::NumAllocated() const
{
	return m_nAllocationCount;
}

template< class T >
inline int CUtlMemory<T>::Count() const
{
	return m_nAllocationCount;
}


//-----------------------------------------------------------------------------
// Is element index valid?
//-----------------------------------------------------------------------------
template< class T >
inline bool CUtlMemory<T>::IsIdxValid( int i ) const
{
	return (i >= 0) && (i < m_nAllocationCount);
}
 

//-----------------------------------------------------------------------------
// Grows the memory
//-----------------------------------------------------------------------------
template< class T >
bool CUtlMemory<T>::Grow( int num )
{
	assert( num > 0 );

	if (IsExternallyAllocated())
	{
		// Can't grow a buffer whose memory was externally allocated 
		assert(0);
		//Warning("Alloc error no buff!");
		return false;
	}

	// Make sure we have at least numallocated + num allocations.
	// Use the grow rules specified for this memory (in m_nGrowSize)
 	int nAllocationRequested = m_nAllocationCount + num;
 	while (m_nAllocationCount < nAllocationRequested)
 	{
	
		if ( m_nAllocationCount != 0 )
		{
			if (m_nGrowSize>0)
			{
				m_nAllocationCount += m_nGrowSize;
			}
			else
			{
				m_nAllocationCount += m_nAllocationCount;
			}
		}
		else
		{
			// Compute an allocation which is at least as big as a cache line...
			m_nAllocationCount = (31 + sizeof(T)) / sizeof(T);
			assert(m_nAllocationCount != 0);
		}
	}

	T* pMemoryTemp = NULL;
	if (m_pMemory)
	{
		pMemoryTemp = (T*)MemRealloc( m_pMemory, m_nAllocationCount * sizeof(T) );
	}
	else
	{
		pMemoryTemp = (T*)MemAlloc( m_nAllocationCount * sizeof(T) );
	}

	if (!pMemoryTemp)
		return false;

	m_pMemory = pMemoryTemp;

	return true;
}


//-----------------------------------------------------------------------------
// Makes sure we've got at least this much memory
//-----------------------------------------------------------------------------
template< class T >
inline void CUtlMemory<T>::EnsureCapacity( int num )
{
	if (m_nAllocationCount >= num)
		return;

	if (IsExternallyAllocated())
	{
		// Can't grow a buffer whose memory was externally allocated 
		assert(0);
		return;
	}

	m_nAllocationCount = num;
	if (m_pMemory)
	{
		m_pMemory = (T*)MemRealloc( m_pMemory, m_nAllocationCount * sizeof(T) );
	}
	else
	{
		m_pMemory = (T*)MemAlloc( m_nAllocationCount * sizeof(T) );
	}
}


//-----------------------------------------------------------------------------
// Memory deallocation
//-----------------------------------------------------------------------------
template< class T >
void CUtlMemory<T>::Purge()
{
	if (!IsExternallyAllocated())
	{
		if (m_pMemory)
		{
			MemFree( (void*)m_pMemory );
			m_pMemory = 0;
		}
		m_nAllocationCount = 0;
	}
}
