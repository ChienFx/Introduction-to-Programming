#include "Menu.h"

//Hàm tính số lượng sách trong kho(khác với số đầu sách)
int TinhSoLuongSach(int &SoDocGia, char madg[][10], char hoten[][25], char cmnd[][14], char ngaysinh[][10], char gioitinh[][10], char email[][200],
	char diachi[][200], int ngaytao[], int thangtao[], int namtao[], int namhet[], char sachmuon[][10], int ngaytradukien[], int thangtradukien[], int namtradukien[],
	int&SoDauSach, char masach[][10], char tensach[][255], char tacgia[][25], char nxb[][25], int namxuatban[], char theloai[][25], int gia[], int soquyen[])
{
	int kq = 0;
	for (int i = 1; i <= SoDauSach; i++)
		kq = kq + soquyen[i];
	return kq;
}

//Hàm tính số sách đang được mượn
int TinhSoSachDangDuocMuon(int &SoDocGia, char madg[][10], char hoten[][25], char cmnd[][14], char ngaysinh[][10], char gioitinh[][10], char email[][200],
	char diachi[][200], int ngaytao[], int thangtao[], int namtao[], int namhet[], char sachmuon[][10], int ngaytradukien[], int thangtradukien[], int namtradukien[],
	int&SoDauSach, char masach[][10], char tensach[][255], char tacgia[][25], char nxb[][25], int namxuatban[], char theloai[][25], int gia[], int soquyen[])
{
	int kq = 0;
	for (int i = 1; i <= SoDocGia; i++)
	if (KiemTraSachTrung(sachmuon[i], masach, SoDauSach) == 1)
		kq++;
	return kq;
}

//Hàm tinh so doc gia theo gioi tinh tmp[5],trong ham goi se thay tmp="NAM" or "NU"
int ThongKeTheoGioiTinh(char tmp[5],int &SoDocGia, char madg[][10], char hoten[][25], char cmnd[][14], char ngaysinh[][10], char gioitinh[][10], char email[][200],
	char diachi[][200], int ngaytao[], int thangtao[], int namtao[], int namhet[], char sachmuon[][10], int ngaytradukien[], int thangtradukien[], int namtradukien[],
	int&SoDauSach, char masach[][10], char tensach[][255], char tacgia[][25], char nxb[][25], int namxuatban[], char theloai[][25], int gia[], int soquyen[])
{
	int kq = 0;
	for (int i = 1; i <= SoDocGia; i++)
	if (strcmp(tmp,gioitinh[i])==0)
		kq++;
	return kq;
}

