// Area of triangle

#include <stdio.h>
#include <string.h>
#include <math.h>

// Structure for Point:
struct Point{
	float xCoord, yCoord, zCoord;
};

Point readPoint(float x, float y, float z){
	struct Point aPoint;
	aPoint.xCoord = x;
	aPoint.yCoord = y;
	aPoint.zCoord = z;
	return aPoint;
}

Point readCoordinate(){
	float x, y, z;
	printf("X Coordinate: ");
	scanf(" %f", &x);
	printf("\nY Coordinate: ");
	scanf(" %f", &y);
	printf("\nZ Coordinate: ");
	scanf(" %f", &z);
	Point aPoint = readPoint(x, y, z);
	return aPoint;
}

float distance(Point aPoint, Point bPoint){
	return sqrtf(powf(aPoint.xCoord - bPoint.xCoord) + powf(aPoint.yCoord - bPoint.yCoord) + powf(aPoint.zCoord - bPoint.zCoord));
}

float area(Point aPoint, Point bPoint, Point cPoint){
	return 0.0;
}

void run(){
	char input;
	printf("Calculate distance (d), area (a) or quit (q)? ");
	scanf(" %c", &input);
	switch(input){
		case 'd':
			// Code
			Point aPoint = readCoordinate();
			Point bPoint = readCoordinate();
			printf("Distance: %f", distance(aPoint, bPoint));
			run();
			break;
		case 'a':
			// Code
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
