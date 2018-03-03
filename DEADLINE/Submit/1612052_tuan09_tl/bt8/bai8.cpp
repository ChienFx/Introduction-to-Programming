#include "bai8.h"
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

int KiemTraMangToanDuong(int a[][MAX], int dong, int cot)
{
	for (int i = 0; i < dong; i++)
	for (int j = 0; j < cot; j++)
	if (a[i][j]<0)
		return 0;
	return 1;
}
