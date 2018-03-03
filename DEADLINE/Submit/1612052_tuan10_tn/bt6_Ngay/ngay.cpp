#include "ngay.h"
void NhapNgay(date &ng, char chuoi[255])
{
	printf("%s", chuoi);
	do
	{
		printf("\n -Ngay:");
		scanf_s("%d", &ng.day);
		printf("\n -Thang:");
		scanf_s("%d", &ng.month);
		printf("\n -Nam:");
		scanf_s("%d", &ng.year);
		if (KiemTraHopLe(ng.day, ng.month, ng.year) == false)
			printf("* Ngay nhap vao khong hop le. Moi nhap lai.");
	} while (KiemTraHopLe(ng.day, ng.month, ng.year)==false);
}
void XuatNgay(date ng, char chuoi[255])
{
	//int tmp = ng.month % 100;
	printf("%s", chuoi);
	printf("%02d/%02d/%02d", ng.day, ng.month, ng.year%100);
}
bool KiemTraHopLe(int ngay, int thang, int nam)
{
	if (ngay <1 || ngay >(TinhSoNgayTrongThang(thang, nam)) || thang<1 || thang>12 || nam < 0)
	{
		return false;
	}
	return true;
}

int KiemTraNamNhuan(int n)
{
	if (n < 0) return 0;
	if (n % 400 == 0 || (n % 4 == 0 && n % 100 != 0))
		return 1;
	return 0;
}
int TinhSoNgayTrongThang(int thang, int nam)
{
	int day;
	switch (thang)
	{
	case 1:case 3:case 5:case 7:case 8:case 10:case 12:day = 31; break;
	case 4:case 6:case 9:case 11:day = 30; break;
	default:
		if (KiemTraNamNhuan(nam)) day = 29;
		else day = 28;
	}
	return day;
}

date TimNgayKeTiep(date ng)
{
	if (ng.day == TinhSoNgayTrongThang(ng.month, ng.year))
	{
		if (ng.month == 12)//ngay 31/12
		{
			ng.day = 1;
			ng.month = 1;
			ng.year++;
		}
		else //ngay cuoi thang khac <12
		{
			ng.day = 1;
			ng.month++;
		}
	}
	else
	{
		ng.day++;
	}
	return ng;
}

date TimNgayTruocDo(date ng)
{
	if (ng.day == 1)
	{
		if (ng.month == 1)//ngay 1/1
		{
			ng.day = 31;
			ng.month = 12;
			ng.year--;
		}
		else //ngay dau thang
		{
			ng.day = TinhSoNgayTrongThang(ng.month - 1, ng.year);
			ng.month--;
		}
	}
	else
	{
		ng.day--;
	}
	return ng;
}
