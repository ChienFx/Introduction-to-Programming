#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>
#define MaxDong 100
#define MaxCot 100

void NhapMang2Chieu(int a[MaxDong][MaxCot], int dong, int cot, char chuoi[255]);
void XuatMang2Chieu(int a[MaxDong][MaxCot], int dong, int cot, char chuoi[255]);

int TimMinTrenCotK(int a[MaxDong][MaxCot], int dong, int cot, int k);
int TimMinTrenDongK(int a[MaxDong][MaxCot], int dong, int cot, int k);
