#include <stdio.h>

int main()
{

    // File pointer
    FILE *fptr;

    // Open file
    fptr = fopen("example2.txt", "w");

    if(fptr == NULL)
    {
        printf("Error");
        return(1);
    }

    // Write to file
    fprintf(fptr, "%d", 123);

    // Close file
    fclose(fptr);

    return 0;
}