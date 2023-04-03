#include <stdio.h>
#include <string.h>
#include <ctype.h>

int isPalindrom(char word[]){
	int i = 0;
	int j = strlen(word) - 1;
	while(j > i){
		if(word[i++] != word[j--]){
			return 0;
		}
	}
	return 1;
}

char* normalize(char word[]){
	int changes = 0;
	char newString[30];
	int j = 0;
	for(int i = 0; i < strlen(word); i++){
		if(isspace(word[i])){
			changes++;
		} else {
			newString[j] = word[i];
			j++;
		}
	}
	word = newString;

	for(int i = 0; i < strlen(word); i++){
		if(isupper(word[i])){
			word[i] = tolower(word[i]);
			changes++;
		}
	}
	printf("\nNormalized: %s", word);

	return word;
}

int main(int arc, char *argv[]){
  	// Add code here:
	printf("\nPalindrome-Test\n");
	int boolean = 0;
	char word[30];
	while(boolean == 0){
		printf("\nEnter a word to check: ");
		//scanf(" %s", &word);
		fgets(word, 30, stdin);
		word[strcspn(word, "\n")] = 0;
		strcpy(word, normalize(word));
		int answer = isPalindrom(word);
		if(answer){
			printf("\n%s is a palindrome\n", word);
		} else {
			printf("\n%s is not a palindrome\n", word);
		}
  	}
  	return 0;
}
