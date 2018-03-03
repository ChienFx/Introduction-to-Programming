#include "Menu.h"
#include "KiemTraXuLiChuoi.h"
#include "NgayThang.h"
void ThongKe(DocGia DSDocGia[MAX], int SoDocGia, SACH DSDauSach[MAX], int SoDauSach);
int TinhTongSoSach(SACH DSDauSach[MAX], int SoDauSach);
int TinhSoSachDangDuocMuon(SACH DSDauSach[MAX], int SoDauSach);
void ThongKeTheoTheLoai(SACH p[MAX], int SoDauSach);
void ThongKeTheoGioiTinh(DocGia p[MAX], int SoDocGia);
void ThongKeSoDocGiaTreHan(DocGia p[MAX], int SoDocGia);