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
	char c;
	printf("Enter a string: ");
	fflush(stdin);fflush(stdout);
	gets(str);

	printf("Enter a Character to find frequency: ");
	fflush(stdin);fflush(stdout);
	scanf("%c",&c);

	int i,count=0;
	for (i = 0; i <= 100; i++) {
		if(str[i]==c)
			count++;
	}

	printf("Frequency of %c = %d",c,count);
	return 0;
}
