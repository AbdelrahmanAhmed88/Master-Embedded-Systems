/*
 ============================================================================
 Name        : Array.c
 Author      : Abdelrahman Ahmed
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {

	int matrix[10][10];
	int tran[10][10];
	int r=0,c=0,i,j;
	printf("Enter rows and column of matrix: ");
	fflush(stdin);fflush(stdout);
	scanf("%d %d",&r,&c);
	printf("Enter the elements matrix\n");
	for (i = 0; i < r; i++) {
		for (j = 0; j < c; j++) {
			printf("Enter a%d%d: ",i+1,j+1);
			fflush(stdin);fflush(stdout);
			scanf("%d",&matrix[i][j]);
		}
	}

	printf("Entered Matrix:\n");
	for (i = 0; i < r; i++) {
		for (j = 0; j < c; j++) {
			printf("%d\t",matrix[i][j]);
		}
		printf("\n");
	}

	for (i = 0; i < r; i++) {
		for (j = 0; j < c; j++) {
			tran[j][i]=matrix[i][j];
		}
	}

	printf("Transpose of Matrix:\n");
	for (i = 0; i < c; i++) {
		for (j = 0; j < r; j++) {
			printf("%d\t",tran[i][j]);
		}
		printf("\n");
	}

	return 0;
}
