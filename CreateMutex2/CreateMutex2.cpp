// CreateMutex2.cpp : �ܼ� ���� ���α׷��� ���� �������� �����մϴ�.
//

#include "stdafx.h"
#include <Windows.h>


int _tmain(int argc, _TCHAR* argv[])
{
	HANDLE hMutex = CreateMutexA( NULL, TRUE, "MutexName111a" ); // ���ؽ� ����
	printf( "hMutex = %d\n", hMutex );
	printf( "WaitForSingleObject\n" );
	WaitForSingleObject( hMutex, INFINITE );

	printf( "Process\n" );

	Sleep( 5000 );
	CloseHandle(hMutex);
	return 0;
}

