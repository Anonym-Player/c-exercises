// Umrechner

#include <stdio.h>

void convert(int number){
	// Check if number is too big:
	if(number > 65536){
		printf("Error! Number out of range (> 65536)!\n");
		return;
	}
	
	int tempNumber = number;
	int digit;
	int arr[16];
	int i = 0;

	while(tempNumber != 0){
		digit = tempNumber % 10;
		arr[i] = digit;
		i++;
		tempNumber = tempNumber / 10;
	}
	
	printf("\n");
	for(int j = i - 1; j >= 0; j--){
		printf("%d ", arr[j]);
	}

	printf("\n\nConverted to 16 bit binary:\n\n");
	
	// Set all elements in array to 0
	for(int i = 0; i < 16; i++){
		arr[i] = 0;
	}

	i = 15;
	while(number != 0){
		arr[i] = number % 2;
		i--;
		number = number / 2;	
	}

        for(int j = 0; j < 16; j++){
                printf("%d", arr[j]);
        }
	printf("\n\n");
}

int main(int arc, char *argv[]){
	printf("\nDezimal to binary converter\n\n");
	printf("Please enter a number: ");
	int number = 0;
	scanf(" %d", &number);
	convert(number);
	return 0;
}
