#include "bai1.h"

void main()
{
	char s[255];
	NhapChuoi(s, "\nNhap chuoi:");
	VietHoa(s);
	XuatChuoi(s, "\nChuoi sau khi viet hoa:");
	VietThuong(s);
	XuatChuoi(s, "\nChuoi sau khi viet thuong:");
	vietTitleCase(s);
	XuatChuoi(s, "\nChuoi sau khi viet Title Case:");

	_getch();
}