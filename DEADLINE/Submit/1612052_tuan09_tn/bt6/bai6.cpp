#include "bai6.h"

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
		printf("\n");
	}
}

int TimMaxTrenCotK(int a[MaxDong][MaxCot], int dong, int cot, int k)
{
	int max = a[0][k];
	int maxIndex = 0;
	//	for (int i = 0; i < dong; i++)
	for (int j = 0; j < dong; j++)
	if (a[j][k]>max)
	{
		max = a[j][k];
		maxIndex = j;
	}
	return maxIndex;
}


int TimMaxTrenDongK(int a[MaxDong][MaxCot], int dong, int cot, int k)
{
	int max = a[k][0];
	int maxIndex = 0;
	//	for (int i = 0; i < dong; i++)
	for (int j = 0; j < cot; j++)
	if (a[k][j]>max)
	{
		max = a[k][j];
		maxIndex = j;
	}
	return maxIndex;
}