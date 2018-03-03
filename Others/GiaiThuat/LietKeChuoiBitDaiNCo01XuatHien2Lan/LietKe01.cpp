#include "LietKe01.h"

void XuatKQ(int a[MAX], int n)
{
	for (int i = 0; i < n; i++)
		printf("%d", a[i]);
	printf("\n");
}
bool KiemTraKetThuc(int a[MAX], int n)
{
	for (int i = 0; i < n; i++)
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
		if (KiemTraChuoiCoDung2Lan01(a, n) == true)
		XuatKQ(a, n);
		for (int i = n - 1; i >= 0; i--)
		if (a[i] == 0)
		{
			a[i] = 1;
			for (int j = i + 1; j < n; j++)
				a[j] = 0;
			break;
		}
	} while (KiemTraKetThuc(a, n) == false);
	for (int i = 0; i < n; i++)
		a[i] = 1;
	if (KiemTraChuoiCoDung2Lan01(a, n) == true)
		XuatKQ(a, n);//xuat bo cuoi cung
}
bool KiemTraChuoiCoDung2Lan01(int a[MAX], int n)
{
	int count = 0;
	for (int i = 0; i < n - 1;i++)
	if (a[i] == 0 && a[i + 1] == 1)
		count++;
	if (count == 2)
		return true;
	return false;
}