#include <stdio.h>
#include <conio.h>
#include <string.h>
#define MAX 100
typedef struct date
{
	int day;
	int month;
	int year;
}DATE;
typedef struct hocsinh
{
	char ma[11];
	char ten[31];
	date ngaysinh;
	float diem;
}hs;



void NhapHS(hs &p, char chuoi[255]);
void XuatHS(hs p, char chuoi[255]);
void NhapNgay(date &ng, char chuoi[255]);
void XuatNgay(date ng, char chuoi[255]);
bool KiemTraHopLe(int ngay, int thang, int nam);
int KiemTraNamNhuan(int n);
int TinhSoNgayTrongThang(int thang, int nam);

void NhapMangHS(hs a[MAX], int n, char chuoi[255]);
void XuatMangHS(hs a[MAX], int n, char chuoi[255]);