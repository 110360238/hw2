#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	float p, r, d, i;
	printf("Enter loan principal(-1 to end):");
	scanf_s("%f", &p);
	printf("Enter interest rate:");
	scanf_s("%f", &r);
	printf("Enter term of the loan in days :");
	scanf_s("%f", &d);
	i = (p*r*d) / 365;
	printf("The interest charge is:$%.2f", i);
	system("pause");
	return 0;
}