/*
 ============================================================================
 Name        : Ex4.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
int calcPower(int base,int power);
int main(void) {
	int base,power;
	printf("enter base number: ");
	fflush(stdin);fflush(stdout);
	scanf("%d",&base);
	printf("enter power number(positive integer): ");
	fflush(stdin);fflush(stdout);
	scanf("%d",&power);
	printf("%d^%d = %d",base,power,calcPower(base, power));
	return 0;
}

int calcPower(int base,int power)
{
	if(power == 0)
	{
		return 1;
	}
	else
	{
		return (base *calcPower(base, power-1));
	}
}
