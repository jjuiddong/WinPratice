// CreateMutex2.cpp : 콘솔 응용 프로그램에 대한 진입점을 정의합니다.
//

#include "stdafx.h"
#include <Windows.h>


int _tmain(int argc, _TCHAR* argv[])
{
	HANDLE hMutex = CreateMutexA( NULL, TRUE, "MutexName111a" ); // 뮤텍스 생성
	printf( "hMutex = %d\n", hMutex );
	printf( "WaitForSingleObject\n" );
	WaitForSingleObject( hMutex, INFINITE );

	printf( "Process\n" );

	Sleep( 5000 );
	CloseHandle(hMutex);
	return 0;
}

