#include<stdio.h>
#include<stdlib.h>

int main()
{
	printf("(A)");
	printf("\n");
	for (int i = 0; i < 10; i++)
	{
		for (int j = 0; j <i+1; j++)
			printf("%s","*");
		printf("\n");
		
	}
	printf("(B)");
	printf("\n");
	for (int i = 0; i < 10; i++)
	{
		for (int j = (10-i); j >0 ; j--)
			printf("%s", "*");
		printf("\n");

	}
	printf("(C)");
	printf("\n");
	
	for (int i = 0; i < 10; i++)
	{
		for (int j =0; j <10; j++)
			if(j>=i)
			printf("%s", "*");
			else
				printf(" ");
		printf("\n");

	}
	printf("(D)");
	printf("\n");
	
	for (int i = 0; i < 10; i++)
	{
		for (int j = 0; j < 10; j++)
			if (j >=10-i)
				printf("%s", "*");
			else
				printf(" ");
		printf("\n");

	}


}