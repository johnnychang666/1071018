#include <stdio.h>
#include <stdlib.h>


int main(void)
{
	int a,b,i, j;
	printf("Please enter the length and breadth:");
	scanf_s("%d%d", &i, &j);
	for (a = 0; a < i; a++)
	{
		for (b = 0; b < j; b++)
		{
			if (a == 0 ||a==(i-1)) printf("*");
			else if (b == 0 || b == (j - 1)) printf("*");
			else printf(" ");
		}
		printf("\n");
	}
	system("pause");
	return 0;

}