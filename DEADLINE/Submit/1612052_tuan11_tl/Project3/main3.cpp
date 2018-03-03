#include "bai3.h"

void main()
{
	char s[255];
	NhapChuoi(s, "\nNhap chuoi:");
	DaoNguoc(s);
	XuatChuoi(s, "\nChuoi dao nguoc:");

	_getch();
}