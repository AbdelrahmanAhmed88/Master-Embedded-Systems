/*
 ============================================================================
 Name        : Ex.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int x,y;
		printf("Enter two integers: ");
		fflush(stdin);fflush(stdout);
		scanf("%d %d",&x,&y);
		printf("sum: %d",x+y);
		return 0;
}
