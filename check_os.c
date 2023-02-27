#include <stdio.h>

// Determina el OS según las macros del compilador

int main()
{
    // Windows
    #ifdef _WIN32
        printf("Operating system is: Windows\n");
    #elif __APPLE__
        printf("Operating system is: Apple\n");
    #elif __linux__
        printf("Operating system is: Linux\n");
    #elif __unix__
        printf("Operating system is: Unix\n");
    #else
        printf("Operating system is: Unknown\n");
    #endif
    return 0;
}