#include<stdio.h>
#include<stdlib.h>
int a;
float  b, c, d, e,f;
int main()
{
	while (a != -1)
	{
		
		printf("Enter account number(-1 to end):");
		scanf("%d", &a);
		if (a == -1)
			break;
		printf("Enter beginning balance:");
		scanf("%f", &b);
		printf("Enter total charges:");
		scanf("%f", &c);
		printf("Enter total credits:");
		scanf("%f", &d);
		printf("Enter credit limit:");
		scanf("%f", &e);
		printf("account number:%d\n", a);
		printf("Credit limit:%.2f\n", e);
		f = b + c - d;
		printf("Balance:%.2f\n", f);
		if (f > e)
			printf("Credit Limit Exceeded\n");
	}
	if (a == -1)
	{
		system("pause");
		return(0);
	}

}