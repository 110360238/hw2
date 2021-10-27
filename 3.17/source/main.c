#include <stdio.h>
#include <stdlib.h>
int main(void)
{
	int a,d,e;
	float b,f,c;
	printf("Enter account number(-1 to end)\n");
	scanf_s("%d", &a);
	printf("Enter beginning Balance\n");
	scanf_s("%f", &b);
	printf("Enter total charges\n");
	scanf_s("%f", &c);
	printf("Enter total credits\n");
	scanf_s("%d", &d);
	printf("Enter  credits limit\n");
	scanf_s("%d", &e);
	f = b + c - d;
	if (f > e)
	{
		printf("account:%d\n", a);
		printf("credits limit:%d\n", e);
		printf("Balance:%.2f\n", b);
		printf("Credut Limit Exceeded\n");
	}

}