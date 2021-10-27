#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int i, j, h;
	printf("(A)\n");
	for (i = 1; i <= 10; i++)
	{
		for (j = 1; j <= i; j++)
		{
			printf("*");

		}
		printf("\n");
	}
	printf("(B)\n");
	for (i = 1; i <= 10; i++)
	{
		for (j = 10; j >= i; j--)
		{
			printf("*");

		}
		printf("\n");
	}
	printf("(C)\n");
	for (i = 1; i <= 10; i++)
	{
		for (j = 1; j <= i-1; j++)
		{
			printf(" ");

		}
		for (j = 10; j >= i; j--)
		{
			printf("*");

		}
		printf("\n");
	}
	printf("(D)\n");
	for (i = 1; i <= 10; i++)
	{
		for (j = 10; j >= i+1; j--)
		{
			printf(" ");

		}
		for (j = 1; j <= i; j++)
		{
			printf("*");

		}
		printf("\n");
	}
	
	system("pause");
	return 0;

}