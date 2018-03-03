#include "bai9.h"

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


//bai 9
int TimAmLonNhatCotK(int a[MaxDong][MaxCot], int dong, int cot, int k)
{
	int minIndex = -1;
	for (int j = 0; j < dong; j++)
	if (a[j][k]<0)
	{
		minIndex = j;
		break;
	}
	for (int i = minIndex + 1; i < dong; i++)
	if (a[i][k]<0 && a[i][k] > a[minIndex][k])
		minIndex = i;
	return minIndex;
}
int TimAmLonNhatDongK(int a[MaxDong][MaxCot], int dong, int cot, int k)
{
	int minIndex = -1;
	for (int j = 0; j < cot; j++)
	if (a[k][j]<0)
	{
		minIndex = j;
		break;
	}

	for (int i = minIndex + 1; i < cot; i++)
	if (a[k][i]<0 && a[k][i] > a[k][minIndex])
		minIndex = i;
	return minIndex;
}
