#include<windows.h>
//BOOL CreateProcessA(
//	[in, optional]      LPCSTR                lpApplicationName,//Ҫ�����Ľ�������
//	[in, out, optional] LPSTR                 lpCommandLine,//�����в���
//	[in, optional]      LPSECURITY_ATTRIBUTES lpProcessAttributes,
//	[in, optional]      LPSECURITY_ATTRIBUTES lpThreadAttributes,
//	[in]                BOOL                  bInheritHandles,
//	[in]                DWORD                 dwCreationFlags,
//	[in, optional]      LPVOID                lpEnvironment,
//	[in, optional]      LPCSTR                lpCurrentDirectory,
//	[in]                LPSTARTUPINFOA        lpStartupInfo,//��������Ϊ�ṹ��ָ�룬�ָ����̸���������ص���Ϣ 
//	[out]               LPPROCESS_INFORMATION lpProcessInformation//�ṹ�������Ϣ
//);
int WINAPI WinMain(HINSTANCE hInstance,//����ʵ�����
				   HINSTANCE hPreHinstance,//��һ�������ʵ��������Ѿ�������
				   LPSTR lpCmdeLine,//char*argv[]
				   int nCmdeshow)//��ʾ��ʽ  ��� ��С�� �ȵ�
{
	TCHAR lpApplicationName[] = TEXT("C:\\Users\\Administrator\\Desktop\\Win���粥����N5-1214.exe");
	STARTUPINFO SI;
	PROCESS_INFORMATION pi;// 
	ZeroMemory(&SI, sizeof(SI));//����
	ZeroMemory(&pi, sizeof(pi));//����
	SI.cb=sizeof(SI)//�ṹ��ĵ�һ����Ա���븳ֵ

	CreateProcess(lpApplicationName, NULL);

	return 0;
}
