#ifdef _WIN32
#define WIN32_LEAN_AND_MEAN             // �� Windows ͷ���ų�����ʹ�õ�����
#include <windows.h>
#include <tchar.h>
#endif
#include "BIServer.h"

#ifdef _WIN32
int _tmain(int argc, _TCHAR* argv[])
#else 
int main(int argc, char* argv[])
#endif
{
	BIServer.run("logger.conf", "biserver");

	return 0;
}