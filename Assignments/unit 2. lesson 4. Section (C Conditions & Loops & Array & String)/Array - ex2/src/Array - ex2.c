/*
 ============================================================================
 Name        : Array.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	float *ptr;
	int n,i;

	printf("Enter the numbers of data: ");
	fflush(stdin);fflush(stdout);
	scanf("%d",&n);

	ptr = (float *)malloc(n* sizeof(float));
	float sum= 0.0;
	for (i = 0; i < n; i++) {
		printf("%d. Enter number: ",i+1);
		fflush(stdin);fflush(stdout);
		scanf("%f",ptr + i);
		sum = sum + ptr[i];
	}

	printf("Average = %0.2f",sum/n);

	return 0;
}
