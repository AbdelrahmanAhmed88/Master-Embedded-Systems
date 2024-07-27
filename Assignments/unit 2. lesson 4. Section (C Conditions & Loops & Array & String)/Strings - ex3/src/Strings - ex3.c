/*
 ============================================================================
 Name        : Strings.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include "string.h"
int main(void) {
	char str[100];
	char rev[100];
	printf("Enter a string: ");
	fflush(stdin);fflush(stdout);
	gets(str);
	int len = strlen(str);
	int i;
	rev[len]=0;
	for (i = 0; i < len; i++) {
		rev[len-i-1]=str[i];
	}

	printf("Reverse string is: %s",rev);
	return 0;
}
