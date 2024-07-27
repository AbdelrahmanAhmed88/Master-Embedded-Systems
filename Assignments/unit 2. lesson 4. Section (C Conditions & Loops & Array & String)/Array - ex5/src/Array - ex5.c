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
#include <stdbool.h>
int main(void) {
	int arr[100];
	int n,i;
	int element;
	bool found = false;
	printf("Enter no of elements : ");
	fflush(stdin);fflush(stdout);
	scanf("%d",&n);

	printf("Enter elements : ");
	fflush(stdin);fflush(stdout);
	for (i = 0; i < n; ++i) {
		scanf("%d",&arr[i]);
	}

	n++;
	printf("Enter the element to be searched : ");
	fflush(stdin);fflush(stdout);
	scanf("%d",&element);


	for (i = 0; i < n; ++i) {
		if(arr[i]==element)
		{
			found = true;
			break;
		}
	}

	if(found == true)
	{
		printf("Number found at the location = %d",i+1);
	}
	else
	{
		printf("Number can't be found");
	}
	return 0;
}
