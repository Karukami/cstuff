#include <stdio.h>
int main(){
    char disp[5][10];
    int i, j;
    for(i=0;i<5;i++) {
        for(j=0;j<10;j++) {
	    disp[i][j] = '+';
	}
    }
    for(i=0;i<5;i++) {
        for(j=0;j<10;j++) {
	    printf("%c",disp[i][j]);
	    if(j==9){
                printf("\n");
	    }
	}
    }
    return 0;
}
