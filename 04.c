/*
Edabit : Challenge one
Rank : Very Easy
Language : C
Challenge : Return the next number from the integer passed

*/
#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int addone(int a){
	return ++a;
}

int main(int argc,char **argv){
	printf("This is the main function\n");
	int a =5;
	printf("%d After incrementation is : %d\n", a,addone(a) );
	return 0;
}

