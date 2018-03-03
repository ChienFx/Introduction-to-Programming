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

void NhapDuongTron(DUONGTRON&);
void XuatDuongTron(DUONGTRON);
float TinhChuViDuongTron(DUONGTRON O);
float TinhDienTichDuongTron(DUONGTRON O);
void XuatViTriTuongDoi(DUONGTRON, DUONGTRON);