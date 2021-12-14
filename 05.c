/*
Edabit : Challenge one
Rank : Very Easy
Language : C
Challenge : Calculating the area of a triangle

*/
#include <stdio.h>
#include <math.h>
#include <stdlib.h>


int calculateArea(int base,int height){
	return (0.5 * base * height);
}

int main(int argc,char **argv){
	int base,height;
	base = 20;
	height =40;
	printf("Area of the triangle with base %d and height %d : %d\n", base,height,calculateArea(base,height) );
	return 0;
}


