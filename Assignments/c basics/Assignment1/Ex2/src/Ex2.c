/*
 ============================================================================
 Name        : Ex2.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

void main(void) {
	int x = 0;
	printf("Enter a integer: ");
	fflush(stdin);fflush(stdout);
	scanf("%d",&x);
	printf("You entered: %d",x);
}
