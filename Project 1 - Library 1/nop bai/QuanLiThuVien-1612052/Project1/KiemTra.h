#include <stdio.h>
#include <conio.h>
#include <string.h>
#include <math.h>
#include <Windows.h>
#include <stdlib.h>

//Ham kiem tra
int KiemTraSachTrung(char sach[], char masach[][10], int n);
int KiemTraTheLoaiTrung(char tmp[], char theloai[][25], int n);
int KiemTraMaTrung(char tmp[10], char mang[][10], int n);
int KiemTraCMNDTrung(char tmp[10], char mang[][14], int n);
void NhapNgayThangNam(int&ngay, int&thang, int&nam);
int TinhSoNgayTrongThang(int thang, int nam);
int KiemTraNamNhuan(int n);
void TaoNgayTraDuKien(int &ngay, int &thang, int &nam, int k);//+7ngay
int TinhSoNgayChenhLech(int ngay1, int thang1, int nam1, int ngay2, int thang2, int nam2);
