#include "chuyenbay.h"
//ngay
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
//gio
void NhapGio(tagGio &P, char chuoi[255])
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
//Chuyen Bay
void NhapChuyenBay(tagBay &P, char chuoi[255])
{
	printf("%s", chuoi);
	char tmp[255];
	do
	{
		printf("\n - Nhap ma chuyen bay(5 ki tu): ");
		fflush(stdin);
		gets_s(tmp);
		if (strlen(tmp) > 5 || strlen(tmp) < 1)
			printf("\nMa chuyen bay phai du 5 ki tu. Moi nhap lai.");
	} while (strlen(tmp) > 5 || strlen(tmp) < 1);
	strcpy_s(P.maBay, tmp);
	//P.maBay[strlen(tmp)] = '\0';
	NhapNgay(P.ngayBay, " - Nhap ngay bay:");
	NhapGio(P.gioBay, " - Nhap gio bay:");

	do
	{
		printf("\n - Nhap noi di(toi da 20 ki tu): ");
		fflush(stdin);
		gets_s(tmp);
		if (strlen(tmp) > 20 || strlen(tmp) < 1)
			printf("\nNoi di khong hop le. Moi nhap lai.");
	} while (strlen(tmp) > 20 || strlen(tmp) < 1);
	strcpy_s(P.noiDi, tmp);
	//P.noiDi[strlen(tmp)] = '\0';
	do
	{
		printf("\n - Nhap noi den(toi da 20 ki tu): ");
		fflush(stdin);
		gets_s(tmp);
		if (strlen(tmp) > 20 || strlen(tmp) < 1)
			printf("\nNoi den khong hop le. Moi nhap lai.");
	} while (strlen(tmp) > 20 || strlen(tmp) < 1);
	strcpy_s(P.noiDen, tmp);
	//P.noiDen[strlen(tmp)] = '\0';
}
void XuatChuyenBay(tagBay P, char chuoi[255])
{
	printf("%s", chuoi);
	printf("\n - Ma chuyen bay: %s", P.maBay);
	XuatNgay(P.ngayBay, "\n - Ngay bay:");
	XuatGio(P.gioBay, "\n - Gio bay:");
	printf("\n - Noi di : %s", P.noiDi);
	printf("\n - Noi den: %s", P.noiDen);
}

