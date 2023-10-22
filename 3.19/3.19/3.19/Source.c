#include<stdio.h>
#include<stdlib.h>
int a, b, c, d, e, f,days, principal;
float interest,rate;
int x = 650;
int main()
{
	while (principal != -1)
	{

		printf("Enter loan principal (-1 to end):");
		scanf("%d", &principal);
		if (principal == -1)
			break;
			printf("Enter interest rate:");
			scanf("%f", &rate);
			printf("Enter term of the loan in days:");
			scanf("%d", &days);
			printf("Enter interest charge is $%.2f :\n", (float)principal * rate * days / 365);
		
	}

	if (principal == -1)
	{
		system("pause");
		return(0);
	}

}