// Area of triangle

#include <stdio.h>
#include <string.h>
#include <math.h>

// Structure for Point:
struct Point{
	float xCoord, yCoord, zCoord;
	struct Point *next;
};

void printPoint(struct Point *aPoint){
	if(aPoint == NULL){
		printf("NULL");
		return;
	}
	printf("P(%f | %f | %f)\n", aPoint->xCoord, aPoint->yCoord, aPoint->zCoord);
}

struct Point readPoint(float x, float y, float z){
	struct Point aPoint;
	aPoint.xCoord = x;
	aPoint.yCoord = y;
	aPoint.zCoord = z;
	return aPoint;
}

struct Point readCoordinate(){
	float x, y, z;
	printf("\nX Coordinate: ");
	scanf(" %f", &x);
	printf("Y Coordinate: ");
	scanf(" %f", &y);
	printf("Z Coordinate: ");
	scanf(" %f", &z);
	struct Point aPoint = readPoint(x, y, z);
	return aPoint;
}

int main(int arc, char *argv[]){
	printf("\nStack of points\n");
	char input = 'p';
	struct Point *currPoint = NULL;
	while(1){
		printf("\nEnter point (p), print points (o) or quit (q)? ");
		scanf(" %c", &input);
		if(input == 'p'){
			struct Point aPoint = readCoordinate();
			if(currPoint == NULL){
				currPoint = &aPoint;
			}else{
				currPoint->next = &aPoint;
				currPoint = &aPoint;
			}
			printPoint(aPoint.next);
		}else if(input == 'o'){
			while(currPoint->next != NULL){
				printPoint(currPoint);
				currPoint = currPoint->next;
			}
			break;
		}else{
			break;
		}
	}
	return 0;
}
