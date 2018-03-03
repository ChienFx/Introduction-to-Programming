#include "bai12.h"

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

//bai 12: sap xep cac cot de tong cot tang dan tu trai qua phai
int TinhTongCotK(int a[MaxDong][MaxCot], int dong, int cot, int k)
{
	int S = 0;
	for (int j = 0; j < dong; j++)
	{
		S += a[j][k];
	}
	return S;
}
void HoanVi2Cot(int a[MaxDong][MaxCot], int c1, int c2, int dong)
{
	int tmp;
	for (int i = 0; i < dong; i++)
	{
		tmp = a[i][c1];
		a[i][c1] = a[i][c2];
		a[i][c2] = tmp;
	}
}
void SapXepChoTongCotTangDan(int a[MaxDong][MaxCot], int dong, int cot)
{
	for (int i = 0; i<cot - 1; i++)
	for (int j = i + 1; j < cot; j++)
	if (TinhTongCotK(a, dong, cot, i) >= TinhTongCotK(a, dong, cot, j))
		HoanVi2Cot(a, i, j, dong);
}
