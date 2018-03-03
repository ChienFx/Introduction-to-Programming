#include "ham.h"

int timUocChungLonNhatCuaMotMang(int n, int a[])
{
	if (n == 1)
		return a[0];
	int uc = timUocChungLonNhatCuaHaiSo(a[0], a[1]);
	for (int i = 2; i < n; i++)
		uc = timUocChungLonNhatCuaHaiSo(uc, a[i]);
	return uc;
}
int timUocChungLonNhatCuaHaiSo(int x, int y)
{
	if (x == 0)
		return y;
	if (y == 0)
		return x;
	int t = y%x;
	while (t != 0)
	{
		t = x%y;
		x = y;
		y = t;
	}
	return x;
}