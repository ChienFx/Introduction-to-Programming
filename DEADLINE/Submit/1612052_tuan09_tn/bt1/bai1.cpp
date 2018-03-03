#include "bai1.h"

void NhapMang2Chieu(int a[MaxDong][MaxCot], int dong, int cot, char chuoi[255])
{
	printf("\n%s",chuoi);
	srand(time(NULL));
	for (int i = 0; i < dong; i++)
	for (int j = 0; j < cot; j++)
		a[i][j] = rand() % 100 - 20;
}
void XuatMang2Chieu(int a[MaxDong][MaxCot], int dong, int cot, char chuoi[255])
{
	printf("\n%s",chuoi);
	for (int i = 0; i < dong; i++)
	{
		for (int j = 0; j < cot; j++)
			printf("%5d", a[i][j]);
		printf("\n");
	}
}
int KiemTraSoChinhPhuong(int n)
{
	if (n < 1)
		return 0;
	float tmp = sqrt(n+0.0);
	if (fmod(tmp, 1) == 0) return 1;
	return 0;
}
int KiemTraSNT(int n)
{
	if (n < 2) return 0;
	for (int i = 2; i <= sqrt(n + 0.0); i++)
	if (n%i == 0) return 0;
	return 1;
}
int KiemTraHoanChinh(int n)// hàm tính tổng của các ước, trừ chính nó
{
	int s = 0;
	for (int i = 1; i < n; i++)
	if (n % i == 0)
		s += i;
	if (s == n) return 1;
	return 0;
}
int KiemTraSoDuongDoiXung(int n)
{
	int Temp = n % 10, t2 = n;
	n /= 10;
	while (n > 0)
	{
		Temp = Temp * 10 + (n % 10);
		n /= 10;
	}
	if (t2 == Temp) return 1;
	return 0;
}
void XuatDongChuaSoChinhPhuong(int a[MaxDong][MaxCot], int dong, int cot, char chuoi[255])
{
	int dem = 0;
	printf("\n%s", chuoi);
	for (int i = 0; i < dong; i++)
	{
		for (int j = 0; j < cot; j++)
		if (KiemTraSoChinhPhuong(a[i][j]))
		{
			dem++;
			printf("%4d", i);
			break;
		}
	}
	if (dem == 0)
		printf("\nMang khong chua so chinh phuong");
}
void XuatDongChuaSoNguyenTo(int a[MaxDong][MaxCot], int dong, int cot, char chuoi[255])
{
	int dem = 0;
	printf("\n%s", chuoi);
	for (int i = 0; i < dong; i++)
	{
		for (int j = 0; j < cot; j++)
		if (KiemTraSNT(a[i][j]))
		{
			dem++;
			printf("%4d", i);
			break;
		}
	}
	if (dem == 0)
		printf("\nMang khong chua so nguyyen to");
}
void XuatDongChuaSoHoanChinh(int a[MaxDong][MaxCot], int dong, int cot, char chuoi[255])
{
	int dem = 0;
	printf("\n%s", chuoi);
	for (int i = 0; i < dong; i++)
	{
		for (int j = 0; j < cot; j++)
		if (KiemTraHoanChinh(a[i][j]))
		{
			dem++;
			printf("%4d", i);
			break;
		}
	}
	if (dem == 0)
		printf("\nMang khong chua so hoan chinh");
}
void XuatDongChuaSoDuongDoiXung(int a[MaxDong][MaxCot], int dong, int cot, char chuoi[255])
{
	int dem = 0;
	printf("\n%s", chuoi);
	for (int i = 0; i < dong; i++)
	{
		for (int j = 0; j < cot; j++)
		if (KiemTraSoDuongDoiXung(a[i][j]))
		{
			dem++;
			printf("%4d", i);
			break;
		}
	}
	if (dem == 0)
		printf("\nMang khong chua so duong doi xung");
}