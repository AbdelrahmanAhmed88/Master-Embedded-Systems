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

int main(void) {
	char str[100];
	printf("Enter a string: ");
	fflush(stdin);fflush(stdout);
	gets(str);

	int i;
	for (i = 0; i <= 100; i++) {
		if(str[i] == 0)
			break;
	}

	printf("Length of string: %d",i);
	return 0;
}
