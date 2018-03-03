#pragma once
#include "Menu.h"

//Xu li chuoi
void ChuanHoaChuoi(char*chuoi);
void NhapChuoi(char *p, char ThongBao[255]);
void XuatChuoi(char *p, char ThongBao[255]);

//kiem tra thong tin trung cua doc gia
int KiemTraMaDocGiaTrung(char*chuoi, DocGia p[MAX], int SoDocGia);
int KiemTraCMNDTrung(char*chuoi, DocGia m[MAX], int SoDocGia);

//
int KiemTraISBNTrung(char*chuoi, Sach p[MAX], int SoSach);
int KiemTraTheLoaiTrung(char*chuoi, Sach p[MAX], int SoSach);