#include "bai4.h"
int main()
{
	int a[MAX], n = 0, x;

	NhapMang1Chieu(a, n, "Nhap so phan tu mang A:");
	XuatMang1Chieu(a, n, "Mang A:");
	printf("\nSo phan tu DAN DAU Lien Tiep dai nhat: %d", DemDanDauDaiNhat(a, n));
	_getch();
	return 0;
}