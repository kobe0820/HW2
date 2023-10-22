#include<stdio.h>
#include<stdlib.h>


int c,C=0;
int main()
{
	for (int a = 1; a < 501; a++)
	{
		for (int b = 1; b < 501; b++)
		{
			
			for (int c = 1; c < 501; c++)
			{
				if ((c*c == a * a + b * b) && (a + b + c <= 500)&&(a<=b))
					printf("%d %d %d\n", a, b, c);
			}
		}
	}




}