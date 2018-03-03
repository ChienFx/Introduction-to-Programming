#include "bai6.h"
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
	do
	{
		printf("\nNhap cot k:");
		scanf_s("%d", &k);
	} while (k<0 || k>cot - 1);


	printf("\nSo phan tu doi xung cot %d: %d", k, DemSoDuongDoiXungCotK(a, dong, cot, k));
	printf("\nSo phan tu la so nguyen to cot %d: %d", k, DemSoSNTCotK(a, dong, cot, k));
	printf("\nSo phan tu la so chinh phuong cot %d: %d", k, DemSoChinhPhuongCotK(a, dong, cot, k));
	printf("\nSo phan tu la so hoan thien cot %d: %d", k, DemSoHoanThienCotK(a, dong, cot, k));

	_getch();
	return 0;
}