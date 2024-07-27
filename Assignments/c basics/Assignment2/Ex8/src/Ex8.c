/*
 ============================================================================
 Name        : Ex8.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	char c;
	printf("Enter operator either + or - or * or / : ");
	fflush(stdin);fflush(stdout);
	scanf("%c",&c);
	float x,y;
	printf("Enter two operands: ");
	fflush(stdin);fflush(stdout);
	scanf("%f %f",&x,&y);
	switch(c)
	{
	case('+'):
		{
			printf("%f + %f = %f",x,y,x+y);
			break;
		}
	case('-'):
		{
			printf("%f - %f = %f",x,y,x-y);
			break;
		}
	case('*'):
		{
			printf("%f + %f = %f",x,y,x*y);
			break;
		}
	case('/'):
		{
			printf("%f + %f = %f",x,y,x/y);
			break;
		}
	default:
			printf("Error wrong input");
			break;
	}

	return 0;
}
