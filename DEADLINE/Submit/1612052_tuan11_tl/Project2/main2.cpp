#include "bai2.h"

void main()
{
	char s[255];
	NhapChuoi(s, "\nNhap chuoi:");
	if (KiemTraDoiXung(s))
		printf("Doi xung");
	else
		printf("KO doi xung");

	_getch();
}