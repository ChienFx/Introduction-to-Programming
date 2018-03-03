#include "bai1.h"

void NhapMang2Chieu(int a[][MAX], int dong, int cot)
{
	srand(time(0));
	for (int i = 0; i < dong;i++)
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

int TinhTongDongk(int a[][MAX], int dong, int cot, int k)
{
	int tong = 0;
	for (int j = 0; j < cot; j++)
		tong += a[k][j];
	return tong;
}
int TinhTongCotk(int a[][MAX], int dong, int cot, int k)
{
	int tong = 0;
	for (int i = 0; i < dong; i++)
		tong += a[i][k];
	return tong;
}