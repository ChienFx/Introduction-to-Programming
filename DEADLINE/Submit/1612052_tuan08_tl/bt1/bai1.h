#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <time.h>

void NhapMang(int a[], int n);

void XuatMang(int a[], int n);
int TimSoChanLonNhat(int a[], int n);
int TinhTongMang(int a[], int n);
int TimSoLeNhoNhat(int a[], int n);
float TinhTrungBinhCong(int a[], int n);
bool KiemTraTonTai(int a[], int n, int x);
int DemTanSuat(int a[], int n, int x);
void XoaPhanTuThuI(int a[], int &n, int vitri);
void XoaTatCaPhanTuX(int a[], int &n, int x);
void SapXap(int a[], int n, bool TangOrGiam);
void ChenPhanTu(int a[], int &n, int x);
float TinhTrungBinhCongLonhon(int a[], int n, int k);
void HuyPhanTu(int a[], int &n, int vt, int k);//hủy k phan tu tu vi tri vt
void GopMangBvaoATaiK(int a[], int &n1, int b[], int&n2, int k);
void GopXenKe(int a[], int n1, int b[], int n2);
void XoaPhanTuBiTrung(int a[], int &n);
int DemSoMangConTangVaXuatMangConTangDaiNhat(int a[], int n);
bool KiemTraMangConTang(int a[], int dau, int cuoi);
bool KiemTraMangDoiXung(int a[], int n);