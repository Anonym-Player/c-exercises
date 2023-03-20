// Multiplikationstabelle

#include <stdio.h>
#include <stdint.h>

void printTable(int columns, int rows){
	for(int i = 1; i <= rows; i++){
		for(int j = 1; j <= columns; j++){
			printf("%d ", i*j);	
		}
		printf("\n");
	}
}

void printTableWhile(int columns, int rows){
	int i = 1;
	while(i <= rows){
		int j = 1;
		while(j <= columns){
			printf("%d  ", i*j);
			j++;
		}
		printf("\n");
		i++;
	}
}

int main(int arc, char *argv[]){
    	printf("Multiplikationstabelle\n");

	int columns = 1;
	int rows = 1;
	printf("Anzahl Zeilen: ");
	scanf(" %d", &columns);
	printf("Anzahl Spalten: ");
	scanf(" %d", &rows);
	printTable(columns, rows);
	printf("\n");
	printTableWhile(columns, rows);
	return 0;
}

