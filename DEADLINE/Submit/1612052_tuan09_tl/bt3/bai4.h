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

int DemSoDuongDoiXung(int a[][MAX], int dong, int cot);
int DemSoSNT(int a[][MAX], int dong, int cot);
int DemSoChinhPhuong(int a[][MAX], int dong, int cot);
int DemSoHoanThien(int a[][MAX], int dong, int cot);