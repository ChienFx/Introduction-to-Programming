#include "HoanViNhiPhan.h"

void XuatKQ(int a[MAX], int n)
{
	for (int i = 0; i < n; i++)
		printf("%d", a[i]);
	printf("\n");
}
bool KiemTraKetThuc(int a[MAX], int n)
{
	for (int i = 0; i < n;i++)
	if (a[i] == 0)
		return false;
	return true;
}
void XuatHoanVi(int a[MAX], int n)
{
	for (int i = 0; i < n; i++)
		a[i] = 0;
	
	do
	{
		XuatKQ(a, n);
		for (int i = n - 1; i >= 0;i--)
		if (a[i] == 0)
		{
			a[i] = 1;
			for (int j = i + 1; j < n; j++)
				a[j] = 0;
			break;
		}
	} while (KiemTraKetThuc(a,n)==false);
	for (int i = 0; i < n; i++)
		a[i] = 1;
	XuatKQ(a, n);//xuat bo cuoi cung
}