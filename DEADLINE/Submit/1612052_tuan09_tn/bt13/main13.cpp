#include "bai13.h"
void main()
{
	int a[MaxDong][MaxCot];
	int dong, cot;
	do
	{
		printf("\nDong:");
		scanf_s("%d", &dong);
		printf("\nCot:");
		scanf_s("%d", &cot);
	} while (dong<1 || dong>MaxDong || cot<1 || cot>MaxCot);
	NhapMang2Chieu(a, dong, cot, "Nhap mang A.");
	XuatMang2Chieu(a, dong, cot, "Mang A:\n");

	//bai13:
	SapXepMaTranTang(a, dong, cot);
	XuatMang2Chieu(a, dong, cot, "Mang sau khi xep tang: \n");

	_getch();
}