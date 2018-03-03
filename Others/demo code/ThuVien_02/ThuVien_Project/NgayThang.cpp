#include "NgayThang.h"

void NhapNgay(date &ng, char chuoi[255])
{
	printf("%s", chuoi);
	do
	{
		printf("\n  + Ngay:");
		scanf_s("%d", &ng.day);
		printf("  + Thang:");
		scanf_s("%d", &ng.month);
		printf("  + Nam:");
		scanf_s("%d", &ng.year);
		if (KiemTraNgayHopLe(ng.day, ng.month, ng.year) == false)
			printf("* Ngay nhap vao khong hop le. Moi nhap lai.");
	} while (KiemTraNgayHopLe(ng.day, ng.month, ng.year) == false);
}
void XuatNgay(date ng, char chuoi[255])
{
	//int tmp = ng.month % 100;
	printf("%s", chuoi);
	printf("%02d/%02d/%04d", ng.day, ng.month, ng.year);
}
bool KiemTraNgayHopLe(int ngay, int thang, int nam)
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
int TinhTongSoNgayTrongNam(int n)
{
	if (KiemTraNamNhuan(n))
		return 366;
	return 365;
}
DATE KNgayTiepTheo(date p, int k)
{
	if (p.day + k <= TinhSoNgayTrongThang(p.month, p.year))
	{
		p.day = p.day + k;
	}
	else
	{
		p.day = p.day + k;
		while (p.day > TinhSoNgayTrongThang(p.month, p.year))
		{
			if (p.month == 12)
			{
				p.month = 1;
				p.year++;
				p.day = p.day - TinhSoNgayTrongThang(p.month, p.year);
			}
			else
			{
				p.month++;
				p.day = p.day - TinhSoNgayTrongThang(p.month, p.year);
			}
		}
	}
	return p;
}
int SoSanhHaiNgay(date p1, date p2)//tra ra 1 0 -1
{
	//30-04-1998=>19980430
	int tmp1 = p1.year * 10000 + p1.month * 100 + p1.day;
	int tmp2 = p2.year * 10000 + p2.month * 100 + p2.day; if (tmp1 > tmp2)
		return 1;
	else if (tmp1 < tmp2)
		return -1;
	return 0;
}
void setDefaultDate(date &p)
{
	p.day = 0;
	p.month = 0;
	p.year = 0;
}
int TinhSoNgayChenhLech(date p1, date p2)
{
	if (SoSanhHaiNgay(p1, p2)>0)
	{
		date temp = p1;
		p1 = p2;
		p2 = temp;
	}
	int kq = -1; int tmp = 0;
	if (p1.year == p2.year)
	{
		if (p1.month <= p2.month)
		{
			for (int i = p1.month; i <= p2.month - 1; i++)
				tmp += TinhSoNgayTrongThang(i, p1.year);
			kq = tmp - p1.day + p2.day;
		}
	}
	else if (p1.year < p2.year)
	{
		int k = p2.year - p1.year;
		for (int i = p1.month; i <= 12; i++)
			tmp += TinhSoNgayTrongThang(i, p1.year);
		tmp = tmp - p1.day;
		for (int i = 1; i <= p2.month - 1; i++)
			tmp += TinhSoNgayTrongThang(i, p2.year);
		tmp = tmp + p2.day;
		if (k>1)
		{
			for (int i = p1.year + 1; i <= p2.year - 1; i++)
			for (int j = 1; j <= 12; j++)
				tmp = tmp + TinhSoNgayTrongThang(j, i);
		}
		kq = tmp;
	}
	return kq;
}