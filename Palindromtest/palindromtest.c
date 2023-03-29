#include <stdio.h>
#include <string.h>

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

int main(int arc, char *argv[]){
  	// Add code here:
	printf("\nPalindrome-Test\n");
	int boolean = 0;
	char word[30];
	while(boolean == 0){
		printf("\nEnter a word to check: ");
		scanf(" %s", &word);
		int answer = isPalindrom(word);
		if(answer){
			printf("\n%s is a palindrome\n", word);
		} else {
			printf("\n%s is not a palindrome\n", word);
		}
  	}
  	return 0;
}
