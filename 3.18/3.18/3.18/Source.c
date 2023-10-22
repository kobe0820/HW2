#include<stdio.h>
#include<stdlib.h>
int a, b, c, d, e, f;
float salary;
int x = 650;
int main()
{
	while (a != -1)
	{

		printf("Enter sales in dollars (-1 to end):");
		scanf("%d", &a);
		if (a == -1)
			break;
		salary = 200 +((float) a * 0.09);
		if (salary >= 650)
			printf("Salary is:650.00\n" );
		else
			printf("Salary is:%7.2f\n", salary);
	
	}
	if (a == -1)
	{
		system("pause");
		return(0);
	}

}