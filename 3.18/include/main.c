#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	float m, t;
	printf("Enter sales in dollars(-1 to end):");
	scanf_s("%f", & m);
	t = m * 0.09+200;
	printf("Salary is:$%.2f", t);
	system("pause");
	return 0;
}