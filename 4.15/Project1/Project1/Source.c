#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int a = 5000;
float b=1,c,d,e,R= 1.1;
double FV;
int main()
{
	printf("Investment is :$5000\n");
	printf("years:15\n");
	//FV ¡× PV¡Ñ¡]1 ¡Ï R¡^n
	for (int i = 0; i < 5; i++)
	{
		FV = 5000 * pow(R, 15);
		printf("interest rates:%lf\n",FV);
		R=R + 0.005;
	}

}