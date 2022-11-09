#include<windows.h>
//BOOL CreateProcessA(
//	[in, optional]      LPCSTR                lpApplicationName,//要创建的进程名字
//	[in, out, optional] LPSTR                 lpCommandLine,//命令行参数
//	[in, optional]      LPSECURITY_ATTRIBUTES lpProcessAttributes,
//	[in, optional]      LPSECURITY_ATTRIBUTES lpThreadAttributes,
//	[in]                BOOL                  bInheritHandles,
//	[in]                DWORD                 dwCreationFlags,
//	[in, optional]      LPVOID                lpEnvironment,
//	[in, optional]      LPCSTR                lpCurrentDirectory,
//	[in]                LPSTARTUPINFOA        lpStartupInfo,//数据类型为结构体指针，又父进程赋予启动相关的信息 
//	[out]               LPPROCESS_INFORMATION lpProcessInformation//结构体进程信息
//);
int WINAPI WinMain(HINSTANCE hInstance,//程序实例句柄
				   HINSTANCE hPreHinstance,//上一个程序的实例句柄，已经被遗弃
				   LPSTR lpCmdeLine,//char*argv[]
				   int nCmdeshow)//显示方式  最大化 最小化 等等
{
	TCHAR lpApplicationName[] = TEXT("C:\\Users\\Administrator\\Desktop\\Win网络播放器N5-1214.exe");
	STARTUPINFO SI;
	PROCESS_INFORMATION pi;// 
	ZeroMemory(&SI, sizeof(SI));//清零
	ZeroMemory(&pi, sizeof(pi));//清零
	SI.cb=sizeof(SI)//结构体的第一个成员必须赋值

	CreateProcess(lpApplicationName, NULL);

	return 0;
}
