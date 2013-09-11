// CreateMutex2.cpp : �ܼ� ���� ���α׷��� ���� �������� �����մϴ�.
//

#include "stdafx.h"
#include <Windows.h>


int _tmain(int argc, _TCHAR* argv[])
{
	HANDLE hMutex = NULL;
	while (1)
	{
		hMutex = CreateMutexA( NULL, FALSE, "MutexName111a" ); // ���ؽ� ����
		if( GetLastError() == ERROR_ALREADY_EXISTS ) // GetLastError() �Լ��� ������ Ȯ��
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

