#pragma once
#include "Menu.h"

void ThemDauSach(DocGia p[MAX], int &n, Sach DSDauSach[MAX], int &SoDauSach);//ok
void XoaDauSach(DocGia p[MAX], int &n, Sach DSDauSach[MAX], int &SoDauSach);//ok
void XuatDauSach(Sach p);// xuat 1 doc gia
void XuatDanhSachDauSachRaManHinh(DocGia p[MAX], int &n, Sach DSDauSach[MAX], int &SoDauSach);//ok
void TimKiemDauSach(DocGia p[MAX], int &n, Sach DSDauSach[MAX], int &SoDauSach);//ok
void ChinhSuaDauSach(DocGia p[MAX], int &n, Sach DSDauSach[MAX], int &SoDauSach);//ok
void LoadDuLieuSach(Sach p[MAX], int &n);
void GhiThongTinSachLenFile(Sach p[MAX], int &n);
