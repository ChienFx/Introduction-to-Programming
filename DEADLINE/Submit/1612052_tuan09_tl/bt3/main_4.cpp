#include "bai4.h"
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
	
	printf("\nSo phan tu doi xung: %d", DemSoDuongDoiXung(a, dong, cot));
	printf("\nSo phan tu la so nguyen to: %d", DemSoSNT(a, dong, cot));
	printf("\nSo phan tu la so chinh phuong: %d", DemSoChinhPhuong(a, dong, cot));
	printf("\nSo phan tu la so hoan thien: %d", DemSoHoanThien(a, dong, cot));

	_getch();
	return 0;
}