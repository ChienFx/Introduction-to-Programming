#include "bai10.h"
void main()
{
	int a[MaxDong][MaxCot];
	int N;//mang vuong
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

	//bai10
	do
	{
	printf("\nNhap dong K:");
	scanf_s("%d", &k);
	} while (k > dong || k < 0);
	SapXepDongKTangDan(a, dong, cot, k);
	XuatMang2Chieu(a, dong, cot, "Mang sau khi xep tang dong K:\n");

	_getch();
}