#include <stdio.h>
int main(){
    freopen("example3.txt", "a+", stdout);
    printf("This text should appear inside the file.\nHello, is there some coca cola in here?");
}