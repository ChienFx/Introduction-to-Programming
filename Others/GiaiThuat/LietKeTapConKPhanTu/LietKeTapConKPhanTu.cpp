#include "LietKeTapConKPhanTu.h"

void XuatKetQua(int a[MAX], int k)
{
	for (int i = 0; i < k; i++)
		printf("%-d  ", a[i]);
	printf("\n");
}
int TimCanTren(int a[MAX], int n, int k, int vitri)//vitri chạy ngược
{
	int CanTren;
	CanTren = n - k + vitri + 1;
	return CanTren;
}
bool KiemTraKetThuc(int a[MAX], int n, int k)
{
	for (int i = 0; i < k; i++)
	if (a[i] != TimCanTren(a, n, k, i))
		return false;
	return true;
}
void LietKeTapConKPhanTu(int a[MAX], int n, int k)
{
	if (n != k)
	{
		for (int i = 0; i < k; i++)
			a[i] = i + 1;
		do
		{
			XuatKetQua(a, k);
			for (int i = k - 1; i >= 0; i--)
			if (a[i] != TimCanTren(a, n, k, i))
			{
				a[i]++;
				for (int j = i + 1; j < k; j++)
					a[j] = a[j - 1] + 1;
				break;
			}
		} while (KiemTraKetThuc(a, n, k) == false);
		for (int i = k - 1; i >= 0; i--)
			a[i] = TimCanTren(a, n, k, i);	
		XuatKetQua(a, k);
	}
	else
	{
		for (int i = k - 1; i >= 0; i--)
			a[i] = TimCanTren(a, n, k, i);
		XuatKetQua(a, k);
	}

}