#include "bai5.h"
int main()
{
	int a[MAX], n = 0,k;

	NhapMang1Chieu(a, n, "Nhap so phan tu mang A:");
	XuatMang1Chieu(a, n, "Mang A:");
	do{
		printf("\nNhap k:");
		scanf_s("%d", &k);
	} while (k > n || k < 0);
	printf("\nPhan tu nho thu %d la: %d",k, TimPhanTuNhoThuK(a, n, k));
	_getch();
	return 0;
}