#include <stdio.h>
#include <conio.h>
#include <string.h>
#include <stdlib.h>
typedef struct date
{
	int day;
	int month;
	int year;
}DATE;
typedef struct tagGio
{
	int gio;
	int phut;
	int giay;
}TAGGIO;

typedef struct tagBay
{
	char maBay[6];
	date ngayBay;
	tagGio gioBay;
	char noiDi[21];
	char noiDen[21];
}TAGBAY;

//Gio
void NhapGio(tagGio &ng, char chuoi[255]);
void XuatGio(tagGio ng, char chuoi[255]);
bool KiemTraHopLe(tagGio);
//Ngay
void NhapNgay(date &ng, char chuoi[255]);
void XuatNgay(date ng, char chuoi[255]);
bool KiemTraHopLe(int ngay, int thang, int nam);
int KiemTraNamNhuan(int n);
int TinhSoNgayTrongThang(int thang, int nam);
//Chuyen bay
void NhapChuyenBay(tagBay &P, char chuoi[255]);
void XuatChuyenBay(tagBay P, char chuoi[255]);
