// Array Manipulation

#include <stdio.h>
#include <stdint.h>

void getGreatestElement(int arr[], int arrLength){
	printf("Greatest element of array: ");
	int element = arr[0];
	for(int i=0; i < arrLength; i++){
		if(arr[i] > element){
			element = arr[i];
		}
	}
	printf(" %d", element);
}

void arithmeticMean(int arr[], int arrLength){
	printf("\nArithmetic mean: ");
	float mean = 0.0;
	int sum = 0;
	for(int i=0; i < arrLength; i++){
       		sum = sum + arr[i];
       	}
	mean = sum / arrLength;
	// Restrict output to only two decimal points
        printf(" %.2f", mean);
}

void changeNegativeValues(int arr[], int arrLength){
	printf("\nChange negative values: ");
	for(int i=0; i < arrLength; i++){
		if(arr[i] < 0){
			printf("%d ",  arr[i]* -1);
		} else {
			printf("%d ", arr[i]);
		}
	}
}

void removeNegativeValues(int arr[], int arrLength){
	printf("\nRemove negative values: ");
	int value = 0;
	int i = 0;
	// Initialize array with all elements set to zero
	int newArr[9] = {0}; 
	while(i < arrLength){
		if(arr[i] > 0){
			newArr[value] = arr[i];
		       	value++;	
		}
		i++;
	}
	for(int i=0; i < arrLength; i++){
                printf("%d ", newArr[i]);
        }
}

void seperateEvenAndUneven(int arr[], int arrLength){
	printf("\nSeperate even and odd numbers: ");
	int help;
	for(int i=0; i < arrLength; i++){
        	for(int j = arrLength; j >= 0; j--){
			if(i != j){
				if(arr[i] % 2 != 0 && arr[j] % 2 == 0){
					help = arr[i];
					arr[i] = arr[j];
					arr[j] = help;
				}	
			}
		}
	}
	for(int i=0; i < arrLength; i++){
        	printf("%d ", arr[i]);
	}
	printf("\n\n");
}

int main(int arc, char *argv[]){
	printf("\nArray manipulation\n\n");
	// Arrays
	int numbers[] = {4, -7, 9, 3, -1, 6, -2, 5, 8};
	// Calculate the length of the array
        int arrLength = sizeof(numbers) / sizeof(numbers[0]);
	
	for(int i=0; i < arrLength; i++){
                printf("%d ", numbers[i]);
        }
	printf("\n\n");

	getGreatestElement(numbers, arrLength);
	arithmeticMean(numbers, arrLength);
	changeNegativeValues(numbers, arrLength);
	removeNegativeValues(numbers, arrLength);
	seperateEvenAndUneven(numbers, arrLength);
	return 0;
}
