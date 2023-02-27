#include <stdio.h>
int main(){
    int y = 100;
    int x = 50;
    char disp[x][y];
    int i, j;
    for(i=0;i<x;i++) {
        for(j=0;j<y;j++) {
            if((i>0 && i<x-1) && (j==0 || j==y-1)){
	        disp[i][j] = '+';
	    }
	    else if (i==0 || i==x-1) {
	        disp[i][j] = '+';
	    }
	    else {
	        disp[i][j] = ' ';
	    }
	}
    }
    for(i=0;i<x;i++) {
        for(j=0;j<y;j++) {
	    printf("%c",disp[i][j]);
	    if(j==y-1){
                printf("\n");
	    }
	}
    }
    return 0;
}
