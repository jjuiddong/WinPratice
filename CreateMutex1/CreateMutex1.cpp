// CreateMutex1.cpp : �ܼ� ���� ���α׷��� ���� �������� �����մϴ�.
//

#include "stdafx.h"
#include <Windows.h>


int _tmain(int argc, _TCHAR* argv[])
{
	HANDLE hMutex = CreateMutexA( NULL, FALSE, "MutexName111a" ); // ���ؽ� ����
	if( GetLastError() == ERROR_ALREADY_EXISTS ) // GetLastError() �Լ��� ������ Ȯ��
	{
		CloseHandle(hMutex);
		MessageBoxA( NULL, "�̹� ���α׷��� �������Դϴ�.", "�˸�", MB_OK );
		return 0;
	}

	printf( "CreateMutex\n" );

	Sleep( 10000 );

	CloseHandle(hMutex);
	return 0;
}

