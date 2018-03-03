#include "bai4.h"

void main()
{
	char s[255];
	NhapChuoi(s, "\nNhap chuoi:");
	printf("\nSo tu: %d", DemChu(s));

	_getch();
}