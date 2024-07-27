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
	int a = 5;
	int b = 10;

	printf("Before swapping:\n");
	printf("a = %d\n", a);
	printf("b = %d\n", b);

	// Swapping without a temporary variable
	a = a + b; // a now becomes 15
	b = a - b; // b now becomes 5 (15 - 10)
	a = a - b; // a now becomes 10 (15 - 5)

	printf("After swapping:\n");
	printf("a = %d\n", a);
	printf("b = %d\n", b);

	return 0;
}
