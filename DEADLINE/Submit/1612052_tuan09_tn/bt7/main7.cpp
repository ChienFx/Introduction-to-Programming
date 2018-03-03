#include "bai7.h"
void main()
{
	int a[MaxDong][MaxCot];
	int dong, cot, k;
	do
	{
		printf("\nDong:");
		scanf_s("%d", &dong);
		printf("\nCot:");
		scanf_s("%d", &cot);
	} while (dong<1 || dong>MaxDong || cot<1 || cot>MaxCot);
	NhapMang2Chieu(a, dong, cot, "Nhap mang A.");
	XuatMang2Chieu(a, dong, cot, "Mang A:\n");

	do
	{
		printf("\nNhap dong K:");
		scanf_s("%d", &k);
	} while (k > dong || k < 0);
	printf("\n Vi tri phan tu nho nhat dong k: A[%d][%d]", k, TimMinTrenDongK(a, dong, cot, k));

	do
	{
		printf("\nNhap cot K:");
		scanf_s("%d", &k);
	} while (k > cot || k < 0);
	printf("\n Vi tri phan tu nho nhat cot k: A[%d][%d]", TimMinTrenCotK(a, dong, cot, k), k);

	_getch();
}