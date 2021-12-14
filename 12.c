/*
Edabit : Challenge one
Rank : Medium
Language : C
Challenge : Toy car workshop : You work in a toy car workshop, and your job is to build toy cars from a collection of parts. Each toy car needs 4 wheels, 1 car body, and 2 figures of people to be placed inside. Given the total number of wheels, car bodies and figures available, how many complete toy cars can you make?

*/
#include <stdio.h>
#include <math.h>
#include <stdlib.h>

#define REQUIRED_WHEELS 4
#define REQUIRED_BODIES 1
#define REQUIRED_FIGURES 2

int min(int a,int b ,int c){
	int min;
	if(a < b){
		if(a<c){
			min=a;
		}else{
			min=c;
		}
	}else{
		if(b < c ){
			min=b;
		}else{
			min=c;

		}
	}
}


int calculateCars(int wheels,int carbodies,int figures){
	int cars;

	// Checking the wheels
	cars=min(wheels/REQUIRED_WHEELS,carbodies/REQUIRED_BODIES,figures/REQUIRED_FIGURES);
	return cars;
}


int main(int argc,char **argv){
	printf("This is the main function\n");
	printf("%d cars can be created \n",calculateCars(2, 48, 76));
	printf("%d cars can be created \n",calculateCars(43, 15, 87));
	printf("%d cars can be created \n",calculateCars(88, 37, 17));
	return 0;
}

