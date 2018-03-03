#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<math.h>
#include<Windows.h>

typedef struct MatHang
{
	char TenMH[100];
	int SoLuong;
	int DonGia;
	int loai;
}MH;

void DocFILE(int &n,MH a[]);
void NhapTuBanPhimVaGhiVaoFILE(int &n, MH a[]);
void InRaManHinh(int &n, MH a[]);