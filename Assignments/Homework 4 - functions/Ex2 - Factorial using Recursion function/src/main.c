/*
 ============================================================================
 Name        : Ex2.c
 Author      : Abdelrahman Ahmed
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int Factorial(int x)
{
	if(x == 0)
	{
		return 1;
	}
	else
		return  x*Factorial(x-1);
}

int main(void) {
	int n;
	printf("Enter an positive integer: ");
	fflush(stdin);fflush(stdout);
	scanf("%d",&n);
	printf("Factorial of 6 = %d",Factorial(n));
	return 0;
}
