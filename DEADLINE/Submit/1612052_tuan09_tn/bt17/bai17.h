#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>
#define MaxDong 100
#define MaxCot 100

void NhapMang2Chieu(int a[MaxDong][MaxCot], int dong, int cot, char chuoi[255]);
void XuatMang2Chieu(int a[MaxDong][MaxCot], int dong, int cot, char chuoi[255]);
//bai17:
int KiemTraSoChinhPhuong(int n);
int KiemTraSNT(int n);
int KiemTraHoanChinh(int n);
int KiemTraSoDuongDoiXung(int n);
int DemSoChinhPhuongTrenDuongCheoPhu(int a[MaxDong][MaxCot], int n);
int DemSoNguyenToTrenDuongCheoPhu(int a[MaxDong][MaxCot], int n);
int DemSoHoanChinhTrenDuongCheoPhu(int a[MaxDong][MaxCot], int n);
int DemSoDoiXungTrenDuongCheoPhu(int a[MaxDong][MaxCot], int n);
