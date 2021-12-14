/*
Edabit : Challenge one
Rank : Very Easy
Language : C
Challenge : Return the sum of two numbers.Create a function that takes two numbers

*/
#include <stdio.h>
#include <math.h>
#include <stdlib.h>


int addnumbers(int a,int b);

int main(int argc,char **argv){
	int a,b;
	a=5;
	b=15;

	int result=addnumbers(a,b);
	printf("The sum of the two numbers is %d\n", result );
	return 0;
}

int addnumbers(int a,int b){
	return (a + b);
}