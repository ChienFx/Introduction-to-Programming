#include "bai13.h"
int main()
{
	int a[MAX], n = 0,x;

	NhapMang1Chieu(a, n, "Nhap so phan tu mang A:");
	XuatMang1Chieu(a, n, "Mang A:");
	printf("\nNhap x: "); scanf_s("%d", &x);
	printf("\nSo luong phan tu %d la: %d", x, DemTanSuat(x, a, n));
	_getch();
	return 0;
}