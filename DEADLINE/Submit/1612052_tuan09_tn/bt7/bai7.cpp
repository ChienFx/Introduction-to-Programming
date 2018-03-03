#include "bai7.h"

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

int TimMinTrenCotK(int a[MaxDong][MaxCot], int dong, int cot, int k)
{
	int Min = a[0][k];
	int MinIndex = 0;
	//	for (int i = 0; i < dong; i++)
	for (int j = 0; j < dong; j++)
	if (a[j][k]<Min)
	{
		Min = a[j][k];
		MinIndex = j;
	}
	return MinIndex;
}
int TimMinTrenDongK(int a[MaxDong][MaxCot], int dong, int cot, int k)
{
	int Min = a[k][0];
	int MinIndex = 0;
	//	for (int i = 0; i < dong; i++)
	for (int j = 0; j < cot; j++)
	if (a[k][j]<Min)
	{
		Min = a[k][j];
		MinIndex = j;
	}
	return MinIndex;
}