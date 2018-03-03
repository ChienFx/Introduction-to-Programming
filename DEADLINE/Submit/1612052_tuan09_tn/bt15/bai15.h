#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>
#define MaxDong 100
#define MaxCot 100

void NhapMang2Chieu(int a[MaxDong][MaxCot], int dong, int cot, char chuoi[255]);
void XuatMang2Chieu(int a[MaxDong][MaxCot], int dong, int cot, char chuoi[255]);
//bai15:
int KiemTraSoChinhPhuong(int n);
int KiemTraSNT(int n);
int KiemTraHoanChinh(int n);
int KiemTraSoDuongDoiXung(int n);

int TinhTongSoChinhPhuongTrenDuongCheoPhu(int a[MaxDong][MaxCot], int n);
int TinhTongSoNguyenToTrenDuongCheoPhu(int a[MaxDong][MaxCot], int n);
int TinhTongSoHoanChinhTrenDuongCheoPhu(int a[MaxDong][MaxCot], int n);
int TinhTongSoDoiXungTrenDuongCheoPhu(int a[MaxDong][MaxCot], int n);
