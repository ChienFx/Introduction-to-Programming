#include "bai2.h"

void NhapMang2Chieu(int a[][MAX], int dong, int cot)
{
	srand(time(0));
	for (int i = 0; i < dong; i++)
	for (int j = 0; j < cot; j++)
		a[i][j] = rand() % 100 + 1;
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

long TinhTichDongk(int a[][MAX], int dong, int cot, int k)
{
	long tong = 1;
	for (int j = 0; j < cot; j++)
		tong *= a[k][j];
	return tong;
}
long TinhTichCotk(int a[][MAX], int dong, int cot, int k)
{
	long tong = 1;
	for (int i = 0; i < dong; i++)
		tong *= a[i][k];
	return tong;
}