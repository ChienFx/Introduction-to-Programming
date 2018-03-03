#include "mangdiem.h"

void NhapDiem(DIEM &P, char chuoi[255])
{
	printf("%s", chuoi);
	float tmp;
	printf("\n -Nhap x: ");
	scanf_s("%f", &tmp);
	P.x = tmp;
	printf(" -Nhap y: ");
	scanf_s("%f", &tmp);
	P.y = tmp;
}
void XuatDiem(DIEM P, char chuoi[255])
{

	printf("%s (%0.2f ; %0.2f)", chuoi, P.x, P.y);
}

void NhapMangDiem(diem a[MAX], int n, char chuoi[255])
{
	printf("%s", chuoi);
	for (int i = 0; i < n; i++)
	{
		printf("\nNhap diem thu %2d", i);
		NhapDiem(a[i], "");
	}
}
void XuatMangDiem(diem a[MAX], int n, char chuoi[255])
{
	printf("%s", chuoi);
	for (int i = 0; i < n; i++)
	{
		printf("\nDiem thu %2d", i);
		XuatDiem(a[i], "");
	}
}

int DemDiemCoHoanhDoDuong(diem a[MAX], int n)
{
	int dem = 0;
	for (int i = 0; i < n; i++)
	{
		if (a[i].x > 0)
			dem++;
	}
	return dem;
}

DIEM TimDiemCoTungDoLonNhat(diem a[MAX], int n)
{
	diem max = a[0];
	for (int i = 0; i < n; i++)
	{
		if (a[i].y > max.y)
			max = a[i];
	}
	return max;
}
float TinhKhoangCachHaiDiem(DIEM P1, DIEM P2)
{
	return sqrt(pow(P1.x - P2.x, 2) + pow(P1.y - P2.y, 2));
}

DIEM TimDiemGanGocToaDoNhat(diem a[MAX], int n)
{
	diem GanNhat = a[0],O;
	O.x = 0;
	O.y = 0;
	for (int i = 1; i < n;i++)
	if (TinhKhoangCachHaiDiem(a[i], O) < TinhKhoangCachHaiDiem(GanNhat, O))
		GanNhat = a[i];
	return GanNhat;
}

void  XuatHaiTimDiemGanNhauNhat(diem a[MAX], int n)
{
	if (n < 2)
	{
		printf("\nKhong the tim trong mang nay!!");
	}
	else
	{
		int dau = 0, cuoi = 1;
		for (int i = 0; i < n - 1; i++)
		for (int j = i + 1; j < n; j++)
		if (TinhKhoangCachHaiDiem(a[i], a[j]) < TinhKhoangCachHaiDiem(a[dau], a[cuoi]))
		{
			dau = i;
			cuoi = j;
		}
		printf("\nHai diem gan nhau nhat:");
		XuatDiem(a[dau], "");
		XuatDiem(a[cuoi], " va ");
	}
}

void  XuatHaiTimDiemXaNhauNhat(diem a[MAX], int n)
{
	if (n < 2)
	{
		printf("\nKhong the tim trong mang nay!!");
	}
	else
	{
		int dau = 0, cuoi = 1;
		for (int i = 0; i < n - 1; i++)
		for (int j = i + 1; j < n; j++)
		if (TinhKhoangCachHaiDiem(a[i], a[j]) > TinhKhoangCachHaiDiem(a[dau], a[cuoi]))
		{
			dau = i;
			cuoi = j;
		}
		printf("\nHai diem xa nhau nhat:");
		XuatDiem(a[dau], "");
		XuatDiem(a[cuoi], " va ");
	}
}