/*
Edabit : Challenge one
Rank : Very Easy
Language : C
Challenge : Create function that returns a boolean value

*/
#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <stdbool.h>


bool returnState(){
	bool state=false;
	if (state) {printf("State is true\n");return state;}
	else
		printf("State is false\n");
	return state;
}

int main(int argc,char **argv){
	printf("This is the first function\n");
	printf("The state now is %d\n", returnState() );
	return 0;
}

