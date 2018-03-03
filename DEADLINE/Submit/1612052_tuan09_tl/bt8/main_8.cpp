#include "bai8.h"
int main()
{
	int a[MAX][MAX];
	int dong, cot;
	int k;
	printf("\nNhap so dong:");
	scanf_s("%d", &dong);
	printf("\nNhap so cot:");
	scanf_s("%d", &cot);
	NhapMang2Chieu(a, dong, cot);
	XuatMang2Chieu(a, dong, cot);

	if (KiemTraMangToanDuong(a, dong, cot))
		printf("\nMang TOAN phan tu duong");
	else
		printf("\nMang KHONG toan phan tu duong");

	_getch();
	return 0;
}