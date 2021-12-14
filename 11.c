/*
Edabit : Challenge one
Rank : Medium
Language : C
Challenge : Quadratic Equation

*/
#include <stdio.h>
#include <math.h>
#include <stdlib.h>



int findroot(int a,int b,int c){
	// Numerator
	int rootone=((-b) + sqrt((pow(b,2)-(4*a*c))))/(2*a);
	int roottwo=((-b) - sqrt((pow(b,2)-(4*a*c))))/(2*a);


	printf("Root One : %d\n", rootone);
	printf("Root Two : %d\n", roottwo);
}

int main(int argc,char **argv){
	printf("This is the main function\n");
	findroot(2,-7,3);
	return 0;
}

