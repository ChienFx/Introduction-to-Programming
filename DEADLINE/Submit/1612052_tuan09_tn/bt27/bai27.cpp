#include "bai27.h"

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
int TimMinTrenDuongCheoChinh(int a[MaxDong][MaxDong], int n)
{
	int max = a[0][0];
	for (int i = 1; i < n; i++)
	if (a[i][i] < max)
		max = a[i][i];
	return max;
}
int TimMinTrenDuongCheoPhu(int a[MaxDong][MaxDong], int n)
{
	int max = a[0][n - 0 - 1];
	for (int i = 1; i < n; i++)
	if (a[i][n - i - 1] < max)
		max = a[i][n - i - 1];
	return max;
}