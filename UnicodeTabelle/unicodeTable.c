// Unicodetabelle

#include <stdio.h>
#include <stdint.h>

void printUnicodeTable(){
	for(int i = 32; i <= 255; i++){
		for(int j = 0; j < 8; j++){
		char character = i;
		printf("%d ", i);
		printf("%c   ", character);
		}
		printf("\n");
	}
}

int main(int arc, char *argv[]){
	printf("\nUnicodetabelle/n");
	printUnicodeTable();	
	return 0;
}
