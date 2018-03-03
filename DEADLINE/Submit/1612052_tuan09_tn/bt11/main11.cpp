#include "bai11.h"
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

	//bai11
	do
	{
		printf("\nNhap cot K:");
		scanf_s("%d", &k);
	} while (k > cot || k < 0);
	
	SepXepCotKTangDan(a, dong, cot, k);
	XuatMang2Chieu(a, dong, cot, "Mang sau khi xep tang cot K:\n");

	_getch();
}