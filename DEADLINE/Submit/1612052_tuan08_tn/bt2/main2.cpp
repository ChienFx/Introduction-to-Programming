#include "bai2.h"

int main()
{
	int TongBi = 0,n=0;//n la so nguoi
	int a[MAX];

	do
	{
		printf("\nNhap so bi:"); scanf_s("%d", &TongBi);
		printf("\nNhap so nguoi:"); scanf_s("%d", &n);
	} while (TongBi < 1 || n < 1);
	SetZeroArray(a, n);

	_getch();
	return 0;
}