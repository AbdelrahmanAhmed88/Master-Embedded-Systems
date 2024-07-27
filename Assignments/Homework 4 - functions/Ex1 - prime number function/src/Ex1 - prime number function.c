/*
 ============================================================================
 Name        : Ex1.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

void primeFunction(int x,int y)
{
	int i,j;
	printf("Prime numbers between %d and %d are: ",x,y);
	for(i = x+1 ; i<y ; i++)
	{
		for(j = 2;j<i;j++)
			{
				if(i%j == 0)
				{
					break;
				}
			}
		if(i == j)
		{
			printf("%d ",i);
		}
	}

}

int main(void) {
	int x,y;
	printf("Enter two numbers(intervals): ");
	fflush(stdin);fflush(stdout);
	scanf("%d %d",&x,&y);
	primeFunction(x, y);
	return 0;
}
