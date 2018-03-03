#include "hocsinh.h"

void NhapHS(hs &p, char chuoi[255])
{
	printf("%s", chuoi);
	char tmp[35];
	do
	{
		printf("\n-Nhap MSSV:");
		fflush(stdin);
		gets_s(tmp);

	} while (strlen(tmp)<1 || strlen(tmp)>10);
	strcpy_s(p.ma, tmp);
	do
	{
		printf("\n-Nhap ten SV:");
		fflush(stdin);
		gets_s(tmp);

	} while (strlen(tmp)<1 || strlen(tmp)>30);
	strcpy_s(p.ten, tmp);
	NhapNgay(p.ngaysinh, " - Ngay sinh");
	do
	{
		printf("\n-Nhap diem:");
		scanf_s("%f", &p.diem);
	} while (p.diem<0 || p.diem>10);
}
void XuatHS(hs p, char chuoi[255])
{
	printf("\n%s", chuoi);
	printf("\n - MSSV: %s", p.ma);
	printf("\n - Ten : %s", p.ten);
	XuatNgay(p.ngaysinh, "\n - Ngay sinh:");
	printf("\n - Diem: %0.1f", p.diem);
}

void NhapNgay(date &ng, char chuoi[255])
{
	printf("%s", chuoi);
	do
	{
		printf("\n  +Ngay:");
		scanf_s("%d", &ng.day);
		printf("\n  +Thang:");
		scanf_s("%d", &ng.month);
		printf("\n  +Nam:");
		scanf_s("%d", &ng.year);
		if (KiemTraHopLe(ng.day, ng.month, ng.year) == false)
			printf("* Ngay nhap vao khong hop le. Moi nhap lai.");
	} while (KiemTraHopLe(ng.day, ng.month, ng.year) == false);
}
void XuatNgay(date ng, char chuoi[255])
{
	//int tmp = ng.month % 100;
	printf("%s", chuoi);
	printf("%02d/%02d/%02d", ng.day, ng.month, ng.year % 100);
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

void NhapMangHS(hs a[MAX], int n,char chuoi[255])
{
	printf("\n %s", chuoi);
	for (int i = 0; i < n; i++)
	{
		printf("\nHoc sinh thu: %2d", i + 1);
		NhapHS(a[i], "");
	}
}
void XuatMangHS(hs a[MAX], int n, char chuoi[255])
{
	printf("\n %s", chuoi);
	for (int i = 0; i < n; i++)
	{
		printf("\nHoc sinh thu: %2d", i + 1);
		XuatHS(a[i], "");
	}
}