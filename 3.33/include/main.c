#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int i, j, h,l,b;
	printf("input length and breath");
	scanf_s("%d %d", &l, &b);

		for (i = 1; i <=b; i++)
		{
			if (i == 1 || i == b)
			{
				for (j = 1; j <= l; j++) 
				{
					printf("*");
				}
			}
			else
			{
				
				for (h = 1; h <= l; h++)
				{
					if (h == 1||h ==l)
					{
						printf("*");
					}
					else
					{
						printf(" ");
					}
				}
			}
			printf("\n");
		}

	
	system("pause");
	return 0;
}