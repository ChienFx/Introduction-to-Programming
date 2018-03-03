#include"bai6.h"
long TinhGiaiThuaChanLe(int n)
{
	int tmp,s=1;
	if (n % 2 == 0) tmp = 2;
	else tmp = 1;
	for (int i = tmp; i <= n; i += 2)
		s *= i;
	return s;
}