#include "bai2.h"

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
	XuatCotChuaSoChinhPhuong(a, dong, cot, "\nCac cot chua so nguyen to: ");
	XuatCotChuaSoNguyenTo(a, dong, cot, "\nCac cot chua so nguyen to:");
	XuatCotChuaSoHoanChinh(a, dong, cot, "\nCac cot chua so hoan chinh:");
	XuatCotChuaSoDuongDoiXung(a, dong, cot, "\nCac cot chua so duong doi xung:");
	_getch();
}