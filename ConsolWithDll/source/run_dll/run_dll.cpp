#include <windows.h>
#include <iostream>
#include "../lib/dll.h"
typedef int (*addex)(int, int);

int main()
{
    HINSTANCE handle = LoadLibrary("./lib.dll");
    auto f = (addex)GetProcAddress(handle, "add");
    std::cout << f(1, 32) << std::endl;
    FreeLibrary(handle);

    std::cout << add(1, 6) << std::endl;
    
    return 0;
}