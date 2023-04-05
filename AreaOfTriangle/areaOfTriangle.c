// Area of triangle

#include <stdio.h>
#include <string.h>
#include <math.h>

// Structure for Point:
struct Point{
	float xCoord, yCoord, zCoord;
};

void printPoint(struct Point aPoint){
	printf("P(%f | %f | %f)\n", aPoint.xCoord, aPoint.yCoord, aPoint.zCoord);
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
	printPoint(aPoint);
	return aPoint;
}

float distance(struct Point aPoint, struct Point bPoint){
	return sqrtf(powf(aPoint.xCoord - bPoint.xCoord, 2) + powf(aPoint.yCoord - bPoint.yCoord, 2) + powf(aPoint.zCoord - bPoint.zCoord, 2));
}

float area(struct Point aPoint, struct Point bPoint, struct Point cPoint){
	float a = distance(aPoint, bPoint);
	float b = distance(aPoint, cPoint);
	float c = distance(bPoint, cPoint);
	float s = (a + b + c) / 2;
	return sqrtf(s * (s - a) * (s - b) * (s - c));
}

void run(){
	char input;
	printf("\nCalculate distance (d), area (a) or quit (q)? ");
	scanf(" %c", &input);
	switch(input){
		case 'd':
			// Code
			printf("\nDistance: %f\n", distance(readCoordinate(), readCoordinate()));
			run();
			break;
		case 'a':
			// Code
			printf("\nArea: %f\n", area(readCoordinate(), readCoordinate(), readCoordinate()));
			run();
			break;
		case 'q':
			// Code
			break;
		default:
			printf("\nError! Input not recognized\n\n");
			run();
	}
}

int main(int arc, char *argv[]){
	printf("\nArea of a triangle\n");
	run();
	return 0;
}
