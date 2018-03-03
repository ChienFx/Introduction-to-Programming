#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>
#define MaxDong 100
#define MaxCot 100

void NhapMang2Chieu(int a[MaxDong][MaxCot], int dong, int cot, char chuoi[255]);
void XuatMang2Chieu(int a[MaxDong][MaxCot], int dong, int cot, char chuoi[255]);
//bai16:
int KiemTraSoChinhPhuong(int n);
int KiemTraSNT(int n);
int KiemTraHoanChinh(int n);
int KiemTraSoDuongDoiXung(int n);
int DemSoChinhPhuongTrenDuongCheoChinh(int a[MaxDong][MaxCot], int n);
int DemSoNguyenToTrenDuongCheoChinh(int a[MaxDong][MaxCot], int n);
int DemSoHoanChinhTrenDuongCheoChinh(int a[MaxDong][MaxCot], int n);
int DemSoDoiXungTrenDuongCheoChinh(int a[MaxDong][MaxCot], int n);
