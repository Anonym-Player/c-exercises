// String function

#include <stdio.h>
#include <string.h>
#include <ctype.h>

void checkString(char word[]){
	printf("\nLength: %ld ", strlen(word));
	char min = word[0];
	char max = word[0];
	for(int i = 0; i < strlen(word); i++){
		if(word[i] <= min){
			min = word[i];
		}
		if(word[i] >= max){
			max = word[i];
		}
	}
	printf("minChar: %c ", min);
	printf("maxChar: %c\n", max);
}

int main(int arc, char *argv[]){
	printf("\nString function\n");
	char word[30];
	while(1){
		printf("\nPlease enter a string to check: ");
		scanf(" %s", word);
		checkString(word);
	}
	return 0;
}
