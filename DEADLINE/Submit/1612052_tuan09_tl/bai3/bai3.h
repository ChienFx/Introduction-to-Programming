#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>
#define MAX 100

void NhapMang2Chieu(int a[][MAX], int dong, int cot);
void XuatMang2Chieu(int a[][MAX], int dong, int cot);
int KiemTraDoiXung(int n);
int KiemTraSNT(int n);
int KiemTraChinhPhuong(int n);
int KiemTraHoanThien(int n);

float TinhTBCSoDuongDoiXung(int a[][MAX], int dong, int cot);
float TinhTBCSoSNT(int a[][MAX], int dong, int cot);
float TinhTBCSoChinhPhuong(int a[][MAX], int dong, int cot);
float TinhTBCSoHoanThien(int a[][MAX], int dong, int cot);