// File Manipulation

#include <stdio.h>
#include <stdint.h>
#include <string.h>

char* reverse(char line[]){
	int i=0;
	int length = strlen(line);
	char tmp;
	for(i = 0; i < length/2; i++){
		tmp = line[i];
		line[i] = line[length - i - 1];
		line[length -i - 1] = tmp;
	}
       	return line;
}

void openFiles(){
	char line[32];
	FILE *fptr;
	FILE *fptr_write;
	fptr = fopen("./input.txt", "r");
	fptr_write = fopen("./output.txt", "w");
	if(fptr == NULL){
		printf("\nError! File does not exist!\n");
		return;
	}
	if(fptr_write == NULL){
                printf("\nError! File to write could not be opened!\n");
                return;
        }
	// Print file line by line
	printf("\nFILE:\n\n");
	while(fgets(line, 32, fptr)){
		printf("%s", line);
		fprintf(fptr_write, "%s", reverse(line));
	}
	fclose(fptr);
        fclose(fptr_write);
	
	// Print reversed lines file line by line
	fptr = fopen("./output.txt", "r");
	printf("\nFILE REVERSED:\n");
	while(fgets(line, 32, fptr)){
                printf("%s", line);
        }
	printf("\n\n");
	fclose(fptr);
	
	return;
}

int main(int arc, char *argv[]){
  	// Add code here:
	openFiles();
  	return 0;
}

