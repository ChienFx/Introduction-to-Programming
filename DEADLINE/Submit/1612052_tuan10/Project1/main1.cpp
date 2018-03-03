#include "bai1.h"

void main()
{
	phanso a, b;
	phanso hieu, tich, tong,thuong;
	NhapPhanSo(a,"Nhap phan so a:\n");
	NhapPhanSo(b, "\nNhap phan so b:\n");

	XuatPhanSo(a,"\nPhan So a:");
	XuatPhanSo(b, "\nPhan So b:");

	tong = a + b;
	hieu = a - b;
	tich = a * b;
	thuong = a / b;

	XuatPhanSo(tong, "\nTong :");
	XuatPhanSo(hieu, "\nHieu :");
	XuatPhanSo(tich, "\nTich :");
	XuatPhanSo(thuong, "\nThuong :");

	printf("\n\nSo sanh:  ");
	int tmp = SoSanhHaiPhanSo(a, b);
	if (tmp < 0)
	{
		XuatPhanSo(a, "\n"); printf(" < "); XuatPhanSo(b, "");
	}
	else if(tmp > 0)
	{
		XuatPhanSo(a, "\n"); printf(" > "); XuatPhanSo(b, "");
	}
	else
	{
		XuatPhanSo(a, "\n"); printf(" = "); XuatPhanSo(b, "");
	}
	printf("\n");
	if (KiemTraDuong(a) > 0)
	{
		XuatPhanSo(a, ""); printf(" DUONG");
	}
	else if(KiemTraDuong(a) < 0)
	{

		XuatPhanSo(a, ""); printf(" AM ");
	}
	else
	{
		XuatPhanSo(a, ""); printf(" KHong am cung khong duong (so 0) ");
	}
	_getch();
}