// Einfacher Taschenrechner

#include <stdio.h>
#include <stdint.h>

float calculate(char optr, float opr1, float opr2){
	float value = 0.0;
	switch(optr){
		case '+': value = opr1 + opr2; break;
		case '-': value = opr1 - opr2; break;
		case '*': value = opr1 * opr2; break;
		case '/': 
			  if(opr2 != 0){
			  	value = opr1 / opr2; break;
			  } else {
			  	printf("Error! Division by zero "); break;
			  }	
		case 'q': break;
		default: printf("Error! Unknown operand"); break;
	}
	return value;
}


int main(int arc, char *argv[]){
	printf("Einfacher Taschenrechner\n\n");
	char optr;
	float opr1;
	float opr2;
	while(optr != 'q'){
		printf("Rechenoperation: ");
		scanf(" %c", &optr);
		if(optr == 'q'){
			break;
		}
		printf("Erste Zahl: ");
		scanf(" %f", &opr1);
		printf("Zweite Zahl: ");
		scanf(" %f", &opr2);
		printf("\nErgebnis: ");
		printf(" %f", calculate(optr, opr1, opr2));
		printf("\n\n");
	}
	return 0;
}
