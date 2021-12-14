/*
Edabit : Challenge one
Rank : Very Easy
Language : C
Challenge : Write a program to convert minutes to seconds

*/
#include <stdio.h>
#include <math.h>
#include <stdlib.h>


int convertminutes(int minutes);
int main(int argc,char **argv){
	printf("This is the first function\n");
	int result=convertminutes(atoi(argv[1]));
	printf("%s seconds == %d minutes\n",argv[1],result);
	return 0;
}



int convertminutes(int minutes){

	int seconds=minutes * 3600;
}
