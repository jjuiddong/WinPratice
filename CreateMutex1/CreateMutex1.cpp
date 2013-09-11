// CreateMutex1.cpp : 콘솔 응용 프로그램에 대한 진입점을 정의합니다.
//

#include "stdafx.h"
#include <Windows.h>


int _tmain(int argc, _TCHAR* argv[])
{
	HANDLE hMutex = CreateMutexA( NULL, FALSE, "MutexName111a" ); // 뮤텍스 생성
	if( GetLastError() == ERROR_ALREADY_EXISTS ) // GetLastError() 함수로 에러를 확인
	{
		CloseHandle(hMutex);
		MessageBoxA( NULL, "이미 프로그램이 실행중입니다.", "알림", MB_OK );
		return 0;
	}

	printf( "CreateMutex\n" );

	Sleep( 10000 );

	CloseHandle(hMutex);
	return 0;
}

