#include <time.h>
#include <stdlib.h>
#include <stdio.h>

int main(){
	srand(time(NULL));
	int r = rand() % 10;
	printf("%d",r);
}
