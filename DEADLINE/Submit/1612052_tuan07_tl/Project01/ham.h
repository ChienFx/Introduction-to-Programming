#include <stdio.h>
#include <conio.h>
#include <math.h>

void NhapMang(int a[], int n);//
void XuatMang(int a[], int n);//
int TimMinMang(int a[], int n);//
int TimMaxMang(int a[], int n);//
int TimGiaTriNhoNhi(int a[], int n);
int TimGiaTriLonNhi(int a[], int n);
int TimViTriDuongCuoi(int a[], int n);//
int TimSoChanDauTien(int a[], int n);//
int TimViTriGiaTriNhoNhat(int a[], int n);//
int TimSNTCuoi(int a[], int n);//
int KiemTraSNT(int n);
int TimSoNguyenToNhoNhat(int a[], int n);

int TimGiaTriXaXNhat(int a[], int n, float x);
void XuatMangabChuaMang(int a[], int n);
int TimSo2muKDauTien(int a[], int n);
void LietKeSoAm(int a[], int n);
void LietKeGiaTriTrongDoan(int a[], int n, int x, int y);
void LietKeLonHonTriTuyetSau(int a[], int n);
void LietKeCacViTriCuaPhanTuLonNhat(int a[], int n);
void LietKeSoCoLanCanLe(int a[], int n);
int KiemTraDauChan(int n);
void LietKePhanTuCoChuSoDauChan(int a[], int n);
void LietKeSoNguyenTo(int a[], int n);
int TinhTongGiaTri(int a[], int n);
int KiemTraChinhPhuong(int n);
int TinhTongCacPhanTuChinhPhuong(int a[], int n);
float TinhTrungBinhCongPhanTuDuong(int a[], int n);
int KiemTraHangChucChan(int n);
int TinhTongSoChucChan(int a[], int n);
int timUocChungLonNhatCuaHaiSo(int x, int y);
int timUocChungLonNhatCuaMotMang(int n, int a[]);
void lietKeCacPhanTuCoItNhatMotLanCanLe(int a[], int n);
int tinhTongCacPhanTuCucTri(int a[], int n);
void XuatCacDayConTang(int a[], int n);
int KiemTraTang(int a[], int dau, int cuoi);

int DemSoPhanTuNguyenTo(int a[], int n);
int DemSoPhanTuMax(int a[], int n);

void SXMangTang(int a[], int n);
void SXLeTang(int a[], int n);

void XoaSoAm(int a[], int n);
void XoaPhanTuBiTrung(int a[], int n);