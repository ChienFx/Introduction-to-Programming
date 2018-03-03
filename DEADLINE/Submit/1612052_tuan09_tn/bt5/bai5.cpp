#include "bai5.h"

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

int TimMinIndex(int a[MaxDong][MaxCot], int dong, int cot, int &minDong, int &minCot)
{
	minDong = 0;
	minCot = 0;
	for (int i = 0; i < dong;i++)
	for (int j = 0; j < cot;j++)
	if (a[i][j] < a[minDong][minCot])
	{
		minDong = i;
		minCot = j;
	}
	return a[minDong][minCot];
}
int TimMaxIndex(int a[MaxDong][MaxCot], int dong, int cot, int &maxDong, int &maxCot)
{
	maxDong = 0;
	maxCot = 0;
	for (int i = 0; i < dong; i++)
	for (int j = 0; j < cot; j++)
	if (a[i][j] > a[maxDong][maxCot])
	{
		maxDong = i;
		maxCot = j;
	}
	return a[maxDong][maxCot];
}