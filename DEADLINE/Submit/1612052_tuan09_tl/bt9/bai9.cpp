#include "bai9.h"
void NhapMang2Chieu(int a[][MAX], int dong, int cot)
{
	srand(time(0));
	for (int i = 0; i < dong; i++)
	for (int j = 0; j < cot; j++)
		a[i][j] = rand() % 10 - 5;
}

void XuatMang2Chieu(int a[][MAX], int dong, int cot)
{
	for (int i = 0; i < dong; i++)
	{
		for (int j = 0; j < cot; j++)
			printf("%5d", a[i][j]);
		printf("\n\n");
	}
}

int KiemTraTangDanTrenDong(int a[][MAX], int dong, int cot, int k)//dong k
{
	for (int j = 0; j < cot-1;j++)
	if (a[k][j] >= a[k][j + 1])
		return 0;
	return 1;
}

int KiemTraTangDanTrenCot(int a[][MAX], int dong, int cot, int k)//cot k
{
	for (int i = 0; i < dong - 1; i++)
	if (a[i][k] >= a[i + 1][k])
		return 0;
	return 1;
}