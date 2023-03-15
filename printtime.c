#include <stdio.h>
#include <time.h>
int main()
{
    char buff[100];
    time_t now = time(0);
    strftime(buff, 100, "%Y-%m-%d %H:%M:%S", localtime (&now));
    printf("The current time is: %s\n", buff);
    return 0;
}