#include "gio.h"

void main()
{
	tagGio t1,t2;
	NhapGio(t1, "Nhap gio thu I:");
	NhapGio(t2, "Nhap gio thu II:");
	XuatGio(t1, "\nGio I:");
	XuatGio(t2, "\nGio II:");
	XuatGio(TongHaiGio(t1, t2), "\n-Tong 2 gio:");
	_getch();
}