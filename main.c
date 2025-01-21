#include <Windows.h>

BOOL APIENTRY DllMain(HMODULE hModule,
	DWORD  ul_reason_for_call,
	LPVOID lpReserved
)
{
	switch (ul_reason_for_call)
	{
	case DLL_PROCESS_ATTACH:
	case DLL_THREAD_ATTACH:
	case DLL_THREAD_DETACH:
	case DLL_PROCESS_DETACH:
		break;
	}
	return TRUE;
}

__declspec(dllexport) int WINAPI xlAutoOpen(void){
//Run_your_code
	MessageBoxA(NULL, "Hello from xlAutoOpen() \\o/", "Info", MB_OK | MB_ICONASTERISK);
    return 0;
}

__declspec(dllexport) int WINAPI xlAutoClose(void)
{
    return 1; 
}
