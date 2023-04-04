// String function

#include <stdio.h>
#include <string.h>
#include <ctype.h>

int checkString(char word[], char *min, char *max){
	for(int i = 0; i < strlen(word); i++){
		if(word[i] <= *min){
			*min = word[i];
		}
		if(word[i] >= *max){
			*max = word[i];
		}
	}
	return strlen(word);
}

int main(int arc, char *argv[]){
	printf("\nString function\n");
	char word[30];
	while(1){
		printf("\nPlease enter a string to check: ");
		scanf(" %s", word);
		if(word[0] == 'q' && strlen(word) <= 1){
			break;
		}
		char min = word[0];
		char max = word[0];
		printf("\nLength: %d, ", checkString(word, &min, &max));
		printf("minChar: %c, maxChar: %c\n", min, max);
	}
	return 0;
}
