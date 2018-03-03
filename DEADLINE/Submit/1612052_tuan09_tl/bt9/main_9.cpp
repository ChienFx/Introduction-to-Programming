#include "bai9.h"
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

	if (KiemTraTangDanTrenDong(a, dong, cot,k)==1)
		printf("\nTang dan tren dong %d",k);
	else
		printf("\nKhong tang dan tren dong %d", k);

	_getch();
	return 0;
}