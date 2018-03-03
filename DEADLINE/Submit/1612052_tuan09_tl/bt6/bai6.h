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

int DemSoDuongDoiXungCotK(int a[][MAX], int dong, int cot, int k);
int DemSoSNTCotK(int a[][MAX], int dong, int cot, int k);
int DemSoChinhPhuongCotK(int a[][MAX], int dong, int cot, int k);
int DemSoHoanThienCotK(int a[][MAX], int dong, int cot, int k);