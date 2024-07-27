/*
 ============================================================================
 Name        : Ex7.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int x;
	printf("Enter an integer: ");
	fflush(stdin);fflush(stdout);
	scanf("%d",&x);
	int Factorial = 1;
	if(x<0)
	{
		printf("Error!!! Factorial of negative number doesn't exist");
	}
	else if(x == 0)
	{
		printf("Factorial = %d",Factorial);
	}
	else
	{
		int i;
		for (i = 1; i <= x; i++) {
			Factorial *= i;
		}
		printf("Factorial = %d",Factorial);
	}

	return 0;
}
