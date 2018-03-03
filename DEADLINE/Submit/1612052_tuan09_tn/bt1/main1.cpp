#include "bai1.h"

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
	NhapMang2Chieu(a, dong, cot, "Nhap mang A(tu dong).");
	XuatMang2Chieu(a, dong, cot, "Mang A:\n");
	XuatDongChuaSoChinhPhuong(a, dong, cot, "\nCac dong chua so nguyen to: ");
	XuatDongChuaSoNguyenTo(a, dong, cot, "\nCac dong chua so nguyen to:");
	XuatDongChuaSoHoanChinh(a, dong, cot, "\nCac dong chua so hoan thien:");
	XuatDongChuaSoDuongDoiXung(a, dong, cot, "\nCac dong chua so duong doi xung:");
	_getch();
}