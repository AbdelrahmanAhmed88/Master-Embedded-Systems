/*
 ============================================================================
 Name        : reverse.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>


void reverse(char c[] ,int i);

int main(void) {
	printf("Enter a sentence: ");
	fflush(stdin);fflush(stdout);
	char str[100];
	gets(str);
	int len = strlen(str);
	reverse(str, len);
	return 0;
}

void reverse(char str[] ,int i)
{
	if(i >=0)
	{
		printf("%c",str[i]);
		reverse(str, i-1);
	}

}
