#include "bai4.h"

int TinhGiaiThua(int n)
{
	int tmp = 1;
	for (int i = 1; i <= n; i++)
		tmp *= i;
	return tmp;
}
int ToHop(int n, int k) //nCk
{
	return TinhGiaiThua(n) / (TinhGiaiThua(k)*TinhGiaiThua(n - k));
}
void vepascal(int n)
{
	printf("\n\n 1");
	for (int i = 1; i <= n; i++)
	{
		printf("\n\n 1  ");
		for (int j = 1; j <= i; j++)
			printf("%3d  ", ToHop(i, j));
	}
}
