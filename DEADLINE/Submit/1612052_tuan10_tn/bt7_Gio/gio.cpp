#include "gio.h"

void NhapGio(tagGio &P,char chuoi[255])
{
	printf("%s", chuoi);
	do
	{
		printf("\n -Gio:");
		scanf_s("%d", &P.gio);
		printf("\n -Phut:");
		scanf_s("%d", &P.phut);
		printf("\n -Giay:");
		scanf_s("%d", &P.giay);
		if (KiemTraHopLe(P) == false)
			printf("* Gio nhap vao khong hop le. Moi nhap lai.");
	} while (KiemTraHopLe(P) == false);
}

void XuatGio(tagGio p, char chuoi[255])
{
	printf("%s", chuoi);
	printf("%02d:%02d:%02d", p.gio, p.phut, p.giay);
}

bool KiemTraHopLe(tagGio p)
{
	if (p.giay<0 || p.giay > 59 || p.phut<0 || p.phut > 59 || p.gio <0 || p.gio>23)
		return false;
	return true;
}

tagGio TongHaiGio(tagGio t1, tagGio t2)
{
	unsigned long tmp= (t1.giay + t2.giay) + (t1.phut + t2.phut) * 60 + (t1.gio + t2.gio) * 3600;
	tagGio s;
	s.gio = tmp / 3600;
	tmp -= s.gio * 3600;
	s.phut = tmp / 60;
	s.giay = tmp % 60;
	return s;
}