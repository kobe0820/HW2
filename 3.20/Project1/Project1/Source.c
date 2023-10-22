#include<stdio.h>
#include<stdlib.h>
int a,d,e,f;
float b,c;
int main()
{
	while ( a!= -1)
	{

		printf("Enter # of hours worked (-1 to end):");
		scanf("%d", &a);
		if ( a== -1)
			break;
		printf("Enter hourly rate of the worker($00.00):");
		scanf("%f", &b);
		if (a <= 40)
			c = a * b;
		else
			c = (40 * b) + (a - 40)*1.5*b;
		printf("salary is :$%.2f\n",c);
		printf("\n");
		
	}

	if (a == -1)
	{
		system("pause");
		return(0);
	}

}