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

	float mat1[2][2];
	float mat2[2][2];
	float sum[2][2];
	int i=0,j=0;

	printf("Enter the elements of 1st matrix\n");
	for (i = 0; i < 2; i++) {
		for (j = 0; j < 2; j++) {
			printf("Enter a%d%d: ",i+1,j+1);
			fflush(stdin);fflush(stdout);
			scanf("%f",&mat1[i][j]);
		}
	}

	printf("Enter the elements of 2nd matrix\n");
		for (i = 0; i < 2; i++) {
			for (j = 0; j < 2; j++) {
				printf("Enter b%d%d: ",i+1,j+1);
				fflush(stdin);fflush(stdout);
				scanf("%f",&mat2[i][j]);
			}
		}

	printf("Sum of Matrix:\n");
		for (i = 0; i < 2; i++) {
			for (j = 0; j < 2; j++) {
				sum[i][j]=mat1[i][j]+mat2[i][j];
				printf("%0.1f\t",sum[i][j]);
			}
			printf("\n");
		}
	return 0;
}
