#include "bai5.h"
void main()
{
	int a[MaxDong][MaxCot];
	int dong, cot,minDong,minCot,maxDong,maxCot;
	do
	{
		printf("\nDong:");
		scanf_s("%d", &dong);
		printf("\nCot:");
		scanf_s("%d", &cot);
	} while (dong<1 || dong>MaxDong || cot<1 || cot>MaxCot);
	NhapMang2Chieu(a, dong, cot, "Nhap mang A.");
	XuatMang2Chieu(a, dong, cot, "Mang A:\n");
	TimMinIndex(a, dong, cot, minDong, minCot);
	printf("\n Vi tri phan tu nho nhat: A[%d][%d]", minDong, minCot);

	TimMaxIndex(a, dong, cot, maxDong, maxCot);
	printf("\n Vi tri phan tu lon nhat: A[%d][%d]", maxDong, maxCot);
	_getch();
}