#include <stdio.h>
#include <windows.h>

__declspec(dllexport) LONG CALLBACK CPlApplet(HWND hwndCpl, UINT msg, LPARAM lParam1, LPARAM lParam2) {
    //Run_my_code();
    MessageBoxA(NULL, "Hello from CPLApplet \o/\n", "Info", MB_OK | MB_ICONQUESTION);
    return 1;
}

BOOL APIENTRY DllMain(HMODULE hModule, DWORD ul_reason_for_call, LPVOID lpReserved) {
    switch (ul_reason_for_call) {
    case DLL_PROCESS_ATTACH:
        break;
    case DLL_THREAD_ATTACH:
        break;
    case DLL_THREAD_DETACH:
        break;
    case DLL_PROCESS_DETACH:
        break;
    }

    return TRUE;
}
