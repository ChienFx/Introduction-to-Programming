#include "sophuc.h"

void main()
{
	sophuc a, b;
	NhapSoPhuc(a,"Nhap so phuc a:\n");
	NhapSoPhuc(b, "Nhap so phuc b:\n");
	XuatSoPhuc(a, "\nSo phuc a:");
	XuatSoPhuc(b, "\nSo phuc b:");
	printf("\nModun cua so phuc a: %f", TinhModun(a));
	printf("\nModun cua so phuc b: %f", TinhModun(b));
	sophuc tong = a + b;
	XuatSoPhuc(tong, "\na + b = ");
	sophuc hieu = a - b;
	XuatSoPhuc(hieu, "\na - b = ");
	sophuc tich = a * b;
	XuatSoPhuc(tich, "\na * b = ");
	sophuc thuong = a / b;
	XuatSoPhuc(thuong, "\na / b = ");
	
	_getch();
}