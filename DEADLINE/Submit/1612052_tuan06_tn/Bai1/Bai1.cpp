#include "bai1.h"
void XuLiUoc(int n, int &tong,int &dem)//tra ve so uoc
{
	dem = 0;
	tong = 0;
	printf("\nCac uoc chan: ");
	for (int i = 1; i <= n;i++)
	{
		if (n%i == 0)
		{
			dem++;
			tong += i;
			if (i % 2 == 0)
				printf("%d  ", i);//in uoc chan
		}
	}
	printf("\nCac cuoc le: ");
	for (int i = 1; i <= n; i++)
	{
		if (n%i == 0 && i%2!=0)
		{
			printf("%d  ", i);//in uoc chan
		}
	}
}