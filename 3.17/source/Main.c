#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	float a,b,c,d,e,i;
	while (1)
	{
		printf("Enter account number(-1 to end):");
		scanf_s("%f", &a);
		if (a == -1) break;
		printf("Enter beginning balance:");
		scanf_s("%f", &b);
		printf("Enter total charges:");
		scanf_s("%f", &c);
		printf("Enter total credits:");
		scanf_s("%f", &d);
		printf("Enter credit limit:");
		scanf_s("%f", &e);
		i = b + c - d;

		if (a != (-1))
		{
			printf("Account:     %.2f\n", a);
			printf("Credit limit:%.2f\n", e);
			printf("Balance:     %.2f\n", i);
			if (i > e) printf("Credit Limit Exceeded.\n");
		}
		printf("\n");
	}
	system("pause");
	return 0;
}