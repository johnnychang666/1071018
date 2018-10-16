#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	float a, b, c;
	while (1)
	{
		printf("Enter # of hours worked (-1 to end):");
		scanf_s("%f", &a);
		if (a == (-1)) break;
		printf("Enter hourly rate of the worker(¢C00.00):");
		scanf_s("%f", &b);
		if (a > 40) printf("Salary is %.2f\n", ((a - 40)*b*1.5 + 40 * b));
		else printf("Salary is %.2f\n", (a*b));
		printf("\n");
	}
	system("pause");
	return 0;
}