#include "bai5.h"

int TimChuSoThuK(int n,int k)//1234,k=2=>in ra 3
{
	if (n < 0) n = -n;
	int tmp = n;
	int kq;
	for (int i = 1; i <= k; i++)
	{
		kq = tmp % 10;
		tmp /= 10;
	}
	return kq;
}