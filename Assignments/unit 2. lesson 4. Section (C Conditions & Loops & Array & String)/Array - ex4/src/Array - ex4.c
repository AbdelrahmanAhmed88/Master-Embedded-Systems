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
	int arr[100],temp[100];
	int n,i;
	int element,loc;
	printf("Enter no of elements : ");
	fflush(stdin);fflush(stdout);
	scanf("%d",&n);

	printf("Enter elements : ");
	fflush(stdin);fflush(stdout);
	for (i = 0; i < n; ++i) {
		scanf("%d",&arr[i]);
	}

	for (i = 0; i < n; ++i) {
		temp[i]=arr[i];
	}

	n++;
	printf("Enter the element to be inserted : ");
	fflush(stdin);fflush(stdout);
	scanf("%d",&element);

	printf("Enter the location : ");
	fflush(stdin);fflush(stdout);
	scanf("%d",&loc);
	arr[loc-1] = element;
	for (i = loc; i < n; ++i) {
		arr[i]=temp[i-1];
	}

	for (i = 0; i < n; ++i) {
			printf("%d \t",arr[i]);
	}

	return 0;
}
