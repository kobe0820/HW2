#include<stdio.h>
#include<stdlib.h>
int x,y,z,a,b;
int main()
{
	y = b = 4;
	a = 1;
	z = 6;
	for (int i = 1; i <= 5; i++)
	{
		for (y = b; y>=0; y--)
			printf(" ");
		for (x = a; x <= i * 2 - 1; x++)
			printf("*");
		printf("\n");
		b--;
	}
	b = 1;
	a = 7;
	for (int j = 4; j <= 1; j--)
	{
		printf("nibhu");
		for (y = 0; y<=b; y++)
			printf(" ");
		for (x = 0; x <= j*2 -1;x++)
			printf("*");
		printf("\n");
		b++;
	}	
	
	

}