#include <stdio.h>
#include <conio.h>
#include <math.h>
#define MAX 100


struct diem
{
	float x;
	float y;
};
typedef struct diem DIEM;

void NhapDiem(DIEM&, char chuoi[255]);
void XuatDiem(DIEM, char chuoi[255]);

void NhapMangDiem(diem a[MAX], int n,char chuoi[255]);
void XuatMangDiem(diem a[MAX], int n, char chuoi[255]);
float TinhKhoangCachHaiDiem(DIEM P1, DIEM P2);
int DemDiemCoHoanhDoDuong(diem a[MAX], int n);
DIEM TimDiemCoTungDoLonNhat(diem a[MAX], int n);
DIEM TimDiemGanGocToaDoNhat(diem a[MAX], int n);
void  XuatHaiTimDiemGanNhauNhat(diem a[MAX], int n);
void  XuatHaiTimDiemXaNhauNhat(diem a[MAX], int n);
