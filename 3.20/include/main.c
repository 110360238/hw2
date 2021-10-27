#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int h, m, t;
	printf("Enter # of hours worked(-1 to end):");
	scanf_s("%d", &h);
	printf("Enter hourly rate of the worker($00.00):");
	scanf_s("%d", &m);
	if (h <= 40)
	{
		t = h * m;
		printf("%d", t);
	}
	if (h > 40)
	{
		t = ((h-40)*m*1.5)+40*m ;
		printf("%d", t);
	}
	system("pause");
	return 0;
}