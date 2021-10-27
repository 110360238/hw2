#include <stdio.h>
#include <math.h>

int main(void)
{
	double principal = 5000;
	double rate = 0.1;

	printf("%4s%21s\n", "Year", "Amount on deposit");
	for (rate = 0.1; rate <= 0.121; rate+=0.005)
	{
		printf("rate:%.3f\n",rate);
	
		for (unsigned int year = 1; year <= 15; ++year)
		{
			double amount = principal * pow(1 + rate, year);
			printf("%4u%21.2f\n", year, amount);
		}
	}
}