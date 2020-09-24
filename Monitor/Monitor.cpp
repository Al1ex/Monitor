#include "Windows.h"

int main() {
	MONITOR_INFO_2 monitorInfo;
	TCHAR env[12] = TEXT("Windows x64");
	TCHAR name[12] = TEXT("Monitor");
	TCHAR dll[12] = TEXT("test.dll");
	monitorInfo.pName = name;
	monitorInfo.pEnvironment = env;
	monitorInfo.pDLLName = dll;
	AddMonitor(NULL, 2, (LPBYTE)&monitorInfo);
	return 0;
}