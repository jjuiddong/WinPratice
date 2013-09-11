// CreateMutex2.cpp : 콘솔 응용 프로그램에 대한 진입점을 정의합니다.
//

#include "stdafx.h"
#include <Windows.h>


int _tmain(int argc, _TCHAR* argv[])
{
	HANDLE hMutex = NULL;
	while (1)
	{
		hMutex = CreateMutexA( NULL, FALSE, "MutexName111a" ); // 뮤텍스 생성
		if( GetLastError() == ERROR_ALREADY_EXISTS ) // GetLastError() 함수로 에러를 확인
		{
			printf( "ERROR_ALREADY_EXISTS\n" );
			Sleep( 300 );
			CloseHandle(hMutex);
			continue;
		}
		break;
	}

	printf( "CreateMutex\n" );

	Sleep( 5000 );
	CloseHandle(hMutex);
	return 0;
}

