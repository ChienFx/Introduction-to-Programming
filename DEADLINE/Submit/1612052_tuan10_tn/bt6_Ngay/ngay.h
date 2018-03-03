#include <stdio.h>
#include <conio.h>

typedef struct date
{
	int day;
	int month;
	int year;
}DATE;

void NhapNgay(date &ng, char chuoi[255]);
void XuatNgay(date ng, char chuoi[255]);
bool KiemTraHopLe(int ngay, int thang, int nam);
int KiemTraNamNhuan(int n);
int TinhSoNgayTrongThang(int thang, int nam);

date TimNgayKeTiep(date ng);
date TimNgayTruocDo(date ng);