#include "bai6.h"
int main()
{
	int a[MAX], n = 0, x;

	NhapMang1Chieu(a, n, "Nhap so phan tu mang A:");
	XuatMang1Chieu(a, n, "Mang A:");
	printf("\nSo phan tu Duong Lien Tiep dai nhat: %d", TimDoanConDuongDaiNhat(a, n));
	_getch();
	return 0;
}