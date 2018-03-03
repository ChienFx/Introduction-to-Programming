#pragma once
#include "Menu.h"

void NhapNgay(date &ng, char chuoi[255]);
void XuatNgay(date ng, char chuoi[255]);
bool KiemTraNgayHopLe(int ngay, int thang, int nam);
int KiemTraNamNhuan(int n);
int TinhSoNgayTrongThang(int thang, int nam);
int TinhTongSoNgayTrongNam(int n);
DATE KNgayTiepTheo(date p, int k);
int SoSanhHaiNgay(date p1, date p2);//tra ra 1 0 -1
int TinhSoNgayChenhLech(date p1, date p2);
void setDefaultDate(date &p);