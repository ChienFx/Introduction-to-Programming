#include "bai12.h"
int main()
{
	int a[MAX], n = 0, x;

	NhapMang1Chieu(a, n, "Nhap so phan tu mang A:");
	XuatMang1Chieu(a, n, "Mang A:");
	printf("\nCac doan duong co tong lon nhat:");
	XuatDoanConDuongTongLonNhat(a, n);
	_getch();
	return 0;
}