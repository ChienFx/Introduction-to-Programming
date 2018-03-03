#include "bai10.h"
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
	} while (k<0 || k>dong - 1);

	if (KiemTraTangDanTrenCot(a, dong, cot, k) == 1)
		printf("\nTang dan tren cot %d", k);
	else
		printf("\nKhong tang dan tren cot %d", k);

	_getch();
	return 0;
}