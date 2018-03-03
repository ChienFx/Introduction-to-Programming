#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <time.h>
#define MAX 100

void XuatMang1Chieu(int a[MAX], int n, char chuoi[255]);
void NhapMang1Chieu(int a[MAX], int &n, char chuoi[255]);
void ChenPhanTu(int x, int a[MAX], int &n, bool tang);
void SapXep(int a[], int n, bool tang);//tang la TRUE, giam la FALSE
void merge_arrays(int a[MAX], int b[MAX], int c[MAX], int n1, int n2, int &n3);