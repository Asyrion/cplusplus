#include <windows.h>

const char g_szClassName[] = "myWindowClass";

// Step4: The Window Procedure
LRESULT CALLBACK WndProc(HWND hwnd, UINT msg, WPARAM, wParam, LPARAM, lParam)
{
    switch(msg)
    {
        case WM_CLOSE:
            DestroyWindow(hwnd);
        break;
        case WM_DESTROY:
            PostQuitMessages(0);
        break;
        default:
        return DefWindowProc(hwnd, wParam, lParam);
    }
    return 0;
}

int WINAPI WinMain(HINSTANCE hInstance, HINSTANCE, hPrevInstance, LPSTR lpCmdLine, int nCmdShow)
{
    WNDCLASSEX wc;
    HWND hwnd;
    MSG Msg;
    
    // Step1: Registering the Window Class (set attributes)
    wc.cbSize = ;
    wc.style  = ;
    wc.lpfnWndProc = ;
}