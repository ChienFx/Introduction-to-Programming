#include <stdio.h>
#include <conio.h>
#include <string.h>
#include <math.h>
#include <Windows.h>
#include <stdlib.h>


int TinhSoLuongSach(int &SoDocGia, char madg[][10], char hoten[][25], char cmnd[][14], char ngaysinh[][10], char gioitinh[][10], char email[][200],
	char diachi[][200], int ngaytao[], int thangtao[], int namtao[], int namhet[], char sachmuon[][10], int ngaytradukien[], int thangtradukien[], int namtradukien[],
	int&SoDauSach, char masach[][10], char tensach[][255], char tacgia[][25], char nxb[][25], int namxuatban[], char theloai[][25], int gia[], int soquyen[]);
int TinhSoSachDangDuocMuon(int &SoDocGia, char madg[][10], char hoten[][25], char cmnd[][14], char ngaysinh[][10], char gioitinh[][10], char email[][200],
	char diachi[][200], int ngaytao[], int thangtao[], int namtao[], int namhet[], char sachmuon[][10], int ngaytradukien[], int thangtradukien[], int namtradukien[],
	int&SoDauSach, char masach[][10], char tensach[][255], char tacgia[][25], char nxb[][25], int namxuatban[], char theloai[][25], int gia[], int soquyen[]);
int ThongKeTheoGioiTinh(char tmp[5], int &SoDocGia, char madg[][10], char hoten[][25], char cmnd[][14], char ngaysinh[][10], char gioitinh[][10], char email[][200],
	char diachi[][200], int ngaytao[], int thangtao[], int namtao[], int namhet[], char sachmuon[][10], int ngaytradukien[], int thangtradukien[], int namtradukien[],
	int&SoDauSach, char masach[][10], char tensach[][255], char tacgia[][25], char nxb[][25], int namxuatban[], char theloai[][25], int gia[], int soquyen[]);