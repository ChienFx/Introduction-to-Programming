#include "bai3.h"
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

	printf("\nTrung binh cong cac so doi xung: %f", TinhTBCSoDuongDoiXung(a, dong, cot));
	printf("\nTrung binh cong cac so la so nguyen to: %f", TinhTBCSoSNT(a, dong, cot));
	printf("\nTrung binh cong cac so la so chinh phuong: %f", TinhTBCSoChinhPhuong(a, dong, cot));
	printf("\nTrung binh cong cac so la so hoan thien: %f", TinhTBCSoHoanThien(a, dong, cot));

	_getch();
	return 0;
}