#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>
#define MaxDong 100
#define MaxCot 100

void NhapMang2Chieu(int a[MaxDong][MaxCot], int dong, int cot, char chuoi[255]);
void XuatMang2Chieu(int a[MaxDong][MaxCot], int dong, int cot, char chuoi[255]);

//bai 12
int TinhTongCotK(int a[MaxDong][MaxCot], int dong, int cot, int k);
void HoanVi2Cot(int a[MaxDong][MaxCot], int c1, int c2, int dong);
void SapXepChoTongCotTangDan(int a[MaxDong][MaxCot], int dong, int cot);
