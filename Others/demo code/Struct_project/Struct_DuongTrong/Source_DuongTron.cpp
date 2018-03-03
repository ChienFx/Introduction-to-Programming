#include "DuongTron.h"

int main()
{
	DUONGTRON O;
	NhapDuongTron(O);
	XuatDuongTron(O);
	printf("\nChu vi: %f", TinhChuViDuongTron(O));
	printf("\nDien tich: %f", TinhDienTichDuongTron(O));
	_getch();
	return 0;
}