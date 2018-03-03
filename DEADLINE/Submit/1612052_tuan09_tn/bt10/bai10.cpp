#include "bai10.h"

void NhapMang2Chieu(int a[MaxDong][MaxCot], int dong, int cot, char chuoi[255])
{
	printf("\n%s", chuoi);
	srand(time(NULL));
	for (int i = 0; i < dong; i++)
	for (int j = 0; j < cot; j++)
		/*{
		printf("a[%d][%d]: ", i, j);
		scanf_s("%d", &a[i][j]);
		}*/
		a[i][j] = rand() % 100 - 20;
}
void XuatMang2Chieu(int a[MaxDong][MaxCot], int dong, int cot, char chuoi[255])
{
	printf("\n%s", chuoi);
	for (int i = 0; i < dong; i++)
	{
		for (int j = 0; j < cot; j++)
			printf("%5d", a[i][j]);
		printf("\n\n");
	}
}
void SapXepDongKTangDan(int a[MaxDong][MaxCot], int dong, int cot, int k)
{
	for (int i = 0; i < cot - 1; i++)
	for (int j = i + 1; j < cot; j++)
	if (a[k][i]>a[k][j])
	{
		int tmp = a[k][i];
		a[k][i] = a[k][j];
		a[k][j] = tmp;
	}
}
