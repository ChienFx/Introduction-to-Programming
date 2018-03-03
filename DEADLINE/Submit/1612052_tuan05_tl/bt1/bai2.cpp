#include "bai2.h"
int TinhGiaiThua(int n)
{
	int tmp = 1;
	for (int i = 1; i <= n; i++)
		tmp *= i;
	return tmp;
}