#include <stdio.h>
#include <time.h>
int main(){
    freopen("fileoutput2.log", "a+", stdout);
    printf("=================\n");
    printf("| fileoutput2.c |\n");
    printf("=================\n");
    printf("This is a log file.\n");
    return 0;   
}