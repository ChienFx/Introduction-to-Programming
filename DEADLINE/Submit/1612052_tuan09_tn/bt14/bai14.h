#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>
#define MaxDong 100
#define MaxCot 100

void NhapMang2Chieu(int a[MaxDong][MaxCot], int dong, int cot, char chuoi[255]);
void XuatMang2Chieu(int a[MaxDong][MaxCot], int dong, int cot, char chuoi[255]);
//bai14:
int KiemTraSoChinhPhuong(int n);
int KiemTraSNT(int n);
int KiemTraHoanChinh(int n);
int KiemTraSoDuongDoiXung(int n);
int TinhTongSoChinhPhuongTrenDuongCheoChinh(int a[MaxDong][MaxCot], int n);
int TinhTongSoNguyenToTrenDuongCheoChinh(int a[MaxDong][MaxCot], int n);
int TinhTongSoHoanChinhTrenDuongCheoChinh(int a[MaxDong][MaxCot], int n);
int TinhTongSoDoiXungTrenDuongCheoChinh(int a[MaxDong][MaxCot], int n);
