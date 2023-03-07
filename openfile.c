#include <stdio.h>
int main(){

    // File Pointer
    FILE *fptr;
    char str[50];

    // Open file
    fptr = fopen("example.txt","r");

    // Read file and store value in variable
    // Params:
    //      ptr: Pointer
    //      size: size in bytes of each element
    //      nmemb: number of elements of size bytes
    //      stream: pointer to file
    fread(&str, 2, 10, fptr);

    printf("File content: %s", str);

    // Close file
    fclose(fptr);

    return 0;
}