/*
 ============================================================================
 Name        : Ex6.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	float x,y,temp;
	printf("Enter value of x: ");
	fflush(stdin);fflush(stdout);
	scanf("%f",&x);
	printf("Enter value of y: ");
	fflush(stdin);fflush(stdout);
	scanf("%f",&y);
	temp = x;
	x=y;
	y=temp;
	printf("After swapping, value of x = %f\n",x);
	printf("After swapping, value of y = %f\n",y);
	return 0;
}
