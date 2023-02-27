#include <stdio.h>
#include <stdbool.h>
#include <string.h>

int main(){
    
    char str[25];

    printf("Please enter a word: ");
    scanf("%s",str);

    printf("Word entered: %s",str);
    printf("\n\nChecking if the entered word is a palindrome...");

    for (int i=0;i<strlen(str);i++){
        //printf("\nIndex I [%d]: %c", i, str[i]);
	//printf("\nComparing I [%d]: %c", strlen(str) - (i + 1), str[strlen(str) - (i + 1)]);
	if (str[i] != str[strlen(str) - (i + 1)]) {
	    printf("\nThe entered word is NOT a palindrome.");
	    return 1;
	}
    }
    
    printf("\nThe entered word IS a palindrome!");

    return 0;
}



