#include "bai13.h"

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
void SapXepMaTranTang(int a[MaxDong][MaxCot], int dong, int cot)
{
	for (int idong = 0; idong < dong; idong++)
	for (int jcot = 0; jcot < cot; jcot++)
	{
		for (int i = idong; i < dong; i++)
		for (int j = 0; j < cot; j++)
		if (i == idong &&j <= jcot)//truong hop nay khong can xet vi da doi roi
			continue;
		else if (a[idong][jcot] > a[i][j])
		{
			int tmp = a[idong][jcot];
			a[idong][jcot] = a[i][j];
			a[i][j] = tmp;
		}
	}
}

