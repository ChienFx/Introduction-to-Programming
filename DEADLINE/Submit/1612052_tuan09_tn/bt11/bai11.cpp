#include "bai11.h"

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
//bai 11
void SepXepCotKTangDan(int a[MaxDong][MaxCot], int dong, int cot, int k)
{
	for (int i = 0; i < dong - 1; i++)
	for (int j = i + 1; j < dong; j++)
	if (a[i][k]>a[j][k])
	{
		int tmp = a[i][k];
		a[i][k] = a[j][k];
		a[j][k] = tmp;
	}
}