#include "bai5.h"

void main()
{
	char s[255];
	NhapChuoi(s, "\nNhap chuoi:");
	XoaKhoangTrangThua(s);
	XuatChuoi(s, "\nChuoi sau khi xoa khoang trang:");
	
	_getch();
}