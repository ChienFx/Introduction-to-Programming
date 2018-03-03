#include "bai4.h"

void NhapNgayThangNam(int&ngay, int&thang, int&nam)
{
	MrC:
		printf("\nNhap ngay:");
		scanf_s("%d", &ngay);
		printf("\nNhap thang:");
		scanf_s("%d", &thang);
		printf("\nNhap nam:");
		scanf_s("%d", &nam);
		if (ngay <1 || ngay >(TinhSoNgayTrongThang(thang, nam)) || thang<1 || thang>12 || nam < 0)
		{
			printf("\nNgay nhap vao khong hop le. Moi nhap lai!!!\n");
			goto MrC;
		}
}
int KiemTraNamNhuan(int n)
{
	if (n < 0) return 0;
	if (n % 400 == 0 || (n % 4 == 0 && n % 100 != 0))
		return 1;
	return 0;
}
int TinhSoNgayTrongThang(int thang,int nam)
{
	int day;
	switch (thang)
	{
	case 1:case 3:case 5:case 7:case 8:case 10:case 12:day = 31; break;
	case 4:case 6:case 9:case 11:day= 30; break;
	default: 
		if (KiemTraNamNhuan(nam)) day= 29; 
		else day = 28;
	}
	return day;
}
void XuatNgayHomTruoc(int ngay, int thang, int nam)
{
	if (ngay == 1)
	{ 
		if (thang == 1)//ngay 1/1
		{
			ngay = 31;
			thang = 12;
			nam--;
		}
		else //ngay dau thang
		{
			ngay = TinhSoNgayTrongThang(thang-1,nam);
			thang--;
		}
	}
	else
	{
		ngay--;
	}
	printf("\nNgay hom truoc la: %d/%d/%d", ngay, thang, nam);
}
void XuatNgayHomSau(int ngay, int thang, int nam)
{
	if (ngay == TinhSoNgayTrongThang(thang, nam))
	{
		if (thang == 12)//ngay 31/12
		{
			ngay = 1;
			thang = 1;
			nam++;
		}
		else //ngay cuoi thang khac <12
		{
			ngay = 1;
			thang++;
		}
	}
	else
	{
		ngay++;
	}
	printf("\nNgay tieo theo la: %d/%d/%d", ngay, thang, nam);
}
void XuatKNgayTiepTheo(int ngay, int thang, int nam, int k)
{
	if (ngay + k <= TinhSoNgayTrongThang(thang, nam))
	{
		ngay = ngay + k;
	}
	else
	{
		ngay = ngay + k;
		while (ngay > TinhSoNgayTrongThang(thang, nam))
		{
			if (thang == 12)
			{
				thang = 1;
				nam++;
				ngay = ngay - TinhSoNgayTrongThang(thang,nam);
			}
			else
			{
				thang++;
				ngay = ngay - TinhSoNgayTrongThang(thang, nam);
			}
		}
	}
	printf("\n%d Ngay tieo theo la: %d/%d/%d",k, ngay, thang, nam);
}

void XuatKNgayTruoc(int ngay, int thang, int nam, int k)
{
	int tmp = k;
	if (ngay - k > 0)
	{
		ngay = ngay - k;
	}
	else
	{
		tmp = tmp - ngay;//ngay < 0
		while (tmp > 0)
		{
			if (thang == 1)
			{
				thang = 12;
				nam--;
				tmp = tmp - TinhSoNgayTrongThang(thang, nam);
			}
			else
			{
				thang--;
				tmp = tmp - TinhSoNgayTrongThang(thang, nam);
			}
		}
		ngay = -tmp;// tmp <0
	}
	printf("\n%d Ngay truoc la: %d/%d/%d", k, ngay, thang, nam);
}