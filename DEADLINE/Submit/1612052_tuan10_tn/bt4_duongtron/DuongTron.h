#include <stdio.h>
#include <conio.h>
#include <math.h>
#define PI 3.14
struct diem
{
	float x;
	float y;
};
typedef struct diem DIEM;
struct duongtron
{
	DIEM I;
	float R;
};
typedef struct duongtron DUONGTRON;
void XuatDiem(DIEM P, char chuoi[255]);
void NhapDiem(DIEM &P, char chuoi[255]);
void NhapDuongTron(DUONGTRON&);
void XuatDuongTron(DUONGTRON);
float TinhChuViDuongTron(DUONGTRON O);
float TinhDienTichDuongTron(DUONGTRON O);
float TinhKhoangCachHaiDiem(DIEM P1, DIEM P2);
void XuatViTriTuongDoi(DUONGTRON, DUONGTRON);
bool KiemTraDiemThuocDuongTron(diem p, duongtron O);