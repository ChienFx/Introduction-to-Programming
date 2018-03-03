#pragma once
#include <stdio.h>
#include <conio.h>
#include <string.h>
#include <stdlib.h>
#define MAX 100

//struct ngày tháng
typedef struct date
{
	int day;
	int month;
	int year;
}DATE;
//struct độc giả
typedef struct dgia
{
	char madg[11]; //lưu mã độc giả______KHÔNG TRÙNG
	char hoten[25];//lưu họ tên độc giả
	char cmnd[14];//lưu cmnd độc giả_____KHÔNG TRÙNG
	date ngaysinh;//Ngày sinh
	char gioitinh[10];//Giới tính_NAM_OR_NU
	char email[200];//Luu email
	char diachi[200];//Luu dia chi
	date ngaytaothe;//ngay tao the
	date ngayhethan;//nam het = nam tao +4;
	date ngaymuonsach;
	date ngaytrasachdukien;
	char sachdamuon[10];

}DocGia;
//struct độc giả
typedef struct Sach
{
	char masach[10];
	char tensach[255];
	char tacgia[30];
	char nxb[30];
	char theloai[25];
	int namxuatban;
	int gia;
	int soquyen;
	int damuon;

}SACH;


//MENU
void MenuChinh(DocGia DSDocGia[MAX], int &SoDocGia, Sach DSDauSach[MAX], int &SoDauSach);
void MenuQuanLiDocGia(DocGia DSDocGia[MAX], int &SoDocGia, Sach DSDauSach[MAX], int &SoDauSach);
void MenuQuanLiSach(DocGia DSDocGia[MAX], int &Sodocgia, Sach DSDauSach[MAX], int &SoDauSach);
//Ghi thong tin len file
void GhiFileVaThoat(DocGia DSDocGia[MAX], int &Sodocgia, Sach DSDauSach[MAX], int &SoDauSach);