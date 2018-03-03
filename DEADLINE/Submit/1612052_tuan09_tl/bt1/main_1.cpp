#include "bai1.h"

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
		printf("\nNhap dong k:");
		scanf_s("%d", &k);
	} while (k<0 || k>dong - 1);
	printf("\nTong cua dong %d: %d\n", k, TinhTongDongk(a, dong, cot, k));
	do
	{
		printf("\nNhap cot k:");
		scanf_s("%d", &k);
	} while (k<0 || k>dong - 1);
	printf("\nTong cua cot %d: %d", k, TinhTongCotk(a, dong, cot, k));
	_getch();
	return 0;
}