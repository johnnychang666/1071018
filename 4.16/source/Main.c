#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int a, j,i,k,c;
	printf("Please enter a integer:");
	scanf_s("%d", &a);
	for (j = 0; j < a; j++)
	{
		for ( i = 0; i<j  ; i++) printf("*");
		printf("\n");
	}
	printf("\n");
	/////////////////////////////////////
	for (j = a; j > 0; j--)
	{
		for (i = j; i>0; i--) printf("*");
		printf("\n");
	}
	printf("\n");
	////////////////////////////////////
	k = 0;
	c = a;
	for (j = a; j > 0; j--)
	{
		for (i = 0; i < k; i++) printf(" ");
		for (i = 0; i <c; i++) printf("*");
		k++;
		c--;
		printf("\n");
	}
	printf("\n");
	///////////////////////////////////
	c = 0;
	for (j = a; j > 0; j--)
	{
		for (i = j; i>0; i--) printf(" ");
		for (k = 0; k < c; k++) printf("*");
		c++;
		printf("\n");
	}
	printf("\n");
	system("pause");
	return 0;
}