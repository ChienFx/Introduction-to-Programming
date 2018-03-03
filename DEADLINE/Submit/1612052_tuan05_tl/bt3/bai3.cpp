#include "bai3.h"

int tinhchuvi(int dai, int rong)
{
	return (dai + rong) * 2;
}
int tinhdientich(int dai, int rong)
{
	return (dai * rong);
}
void vehcn(int dai, int rong)
{
	printf("\n");
	for (int i = 1; i <= rong; i++)
	{
		if (i == 1 || i == rong) 
		for (int j = 1; j <= dai; j++)
		{
			printf("* ");
		}
		else 
		for (int j = 1; j <= dai; j++)
		{
			if (j==1 ||j==dai)
			printf("* ");
			else printf("  ");
		}
		printf("\n");
	}
}