#include "Menu.h"
#include "DocGia.h"
#include "DauSach.h"
#include "ThongKe.h"
#include "PhieuMuonTraSach.h"
void MenuChinh(DocGia DSDocGia[MAX], int &SoDocGia,Sach DSDauSach[MAX],int &SoDauSach)
{
	//Load tất cả dữ liệu
	int chon;
	printf("\nTHU VIEN DAI HOC KHOA HOC TU NHIEN");
	printf("\n  1.Quan li doc gia");
	printf("\n  2.Quan li sach");
	printf("\n  3.Lap phieu muon sach");
	printf("\n  4.Lap phieu tra sach");
	printf("\n  5.Thong ke");
	printf("\n  0.Ket thuc chuong trinh.");
	do
	{
		printf("\n\nChon : ");
		scanf_s("%d", &chon);
	} while (chon > 5 || chon < 0);

	switch (chon)
	{
	case 1:
	{
			  system("cls");// xóa màn hình
			  MenuQuanLiDocGia(DSDocGia, SoDocGia, DSDauSach, SoDauSach);
			  break;
	}
	case 2:
	{
			  system("cls");// xóa màn hình
			  MenuQuanLiSach(DSDocGia,SoDocGia,DSDauSach,SoDauSach);
			  break;
	}
	case 3:
	{
			  system("cls");// xóa màn hình
			  LapTheMuon(DSDocGia, SoDocGia, DSDauSach, SoDauSach);
			  break;
	}
	case 4:
	{
			  system("cls");// xóa màn hình
			  LapTheTra(DSDocGia, SoDocGia, DSDauSach, SoDauSach);
			  break;
	}
	case 5:
	{
			  system("cls");// xóa màn hình
			  ThongKe(DSDocGia, SoDocGia, DSDauSach, SoDauSach);
			  break;
	}
	case 0:
	{
			  GhiFileVaThoat(DSDocGia, SoDocGia, DSDauSach, SoDauSach);	//thoát khỏi chương trình va ghi vao file
	}

	}
	//Ghi tất cả dữ liệt lên file
	//GhiThongTinDocGiaLenFile(DSDocGia, SoDocGia);
}
void MenuQuanLiSach(DocGia DSDocGia[MAX], int &SoDocGia, Sach DSDauSach[MAX], int &SoDauSach)
{
	printf("\nQUAN LI SACH");
	printf("\n  1.Xem danh sach cac sach trong thu vien");
	printf("\n  2.Them sach");
	printf("\n  3.Chinh sua thong tin mot sach");
	printf("\n  4.Xoa thong tin mot sach");
	printf("\n  5.Tim kiem sach theo ISBN va Ten sach");
	printf("\n  6.Tro ve Menu chinh");
	printf("\n  0.Thoat chuong trinh");
	int chon;
	do
	{
		printf("\n\nChon: ");
		scanf_s("%d", &chon);
	} while (chon > 6 || chon < 0);

	switch (chon)
	{
	case 1:
	{
			  system("cls");
			  XuatDanhSachDauSachRaManHinh(DSDocGia, SoDocGia, DSDauSach, SoDauSach);
			  break;
	}
	case 2:
	{
			  system("cls");
			  ThemDauSach(DSDocGia, SoDocGia, DSDauSach, SoDauSach);
			  break;
	}
	case 3:
	{
			  system("cls");
			  ChinhSuaDauSach(DSDocGia, SoDocGia,DSDauSach,SoDauSach);
			  break;
	}
	case 4:
	{
			  system("cls");
			  XoaDauSach(DSDocGia, SoDocGia,DSDauSach, SoDauSach);
			  break;
	}
	case 5:
	{
			  system("cls");
			  TimKiemDauSach(DSDocGia, SoDocGia, DSDauSach, SoDauSach);
			  break;
	}

	case 6:
	{
			  system("cls");// xóa màn hình
			  MenuChinh(DSDocGia, SoDocGia,DSDauSach,SoDauSach);
			  break;
	}

	case 0:
	{
			  GhiFileVaThoat(DSDocGia, SoDocGia, DSDauSach, SoDauSach);	//thoát khỏi chương trình
			  break;
	}
	}
}
void MenuQuanLiDocGia(DocGia DSDocGia[MAX], int &SoDocGia, Sach DSDauSach[MAX], int &SoDauSach)
{

	printf("\nQUAN LI DOC GIA");
	printf("\n  1.Xem danh sach doc gia trong thu vien");
	printf("\n  2.Them doc gia");
	printf("\n  3.Chinh sua thong tin mot doc gia");
	printf("\n  4.Xoa thong tin mot doc gia");
	printf("\n  5.Tim kiem doc gia theo Ho ten or CMND");
	printf("\n  6.Tro ve Menu chinh");
	printf("\n  0.Thoat chuong trinh");
	int chon;
	do
	{
		printf("\n\nChon: ");
		scanf_s("%d", &chon);
	} while (chon > 6 || chon < 0);

	switch (chon)
	{
	case 1:
	{
			  system("cls");
			  XuatDanhSachDocGiaRaManHinh(DSDocGia, SoDocGia, DSDauSach, SoDauSach);
			  break;
	}
	case 2:
	{
			  system("cls");
			  ThemDocGia(DSDocGia, SoDocGia, DSDauSach, SoDauSach);
			  break;
	}
	case 3:
	{
			  system("cls");
			  ChinhSuaDocGia(DSDocGia, SoDocGia, DSDauSach, SoDauSach);
			  break;
	}
	case 4:
	{
			  system("cls");
			  XoaDocGia(DSDocGia, SoDocGia, DSDauSach, SoDauSach);
			  break;
	}
	case 5:
	{
			  system("cls");
			  TimKiemDocGia(DSDocGia, SoDocGia, DSDauSach, SoDauSach);
			  break;
	}
	
	case 6:
	{
			  system("cls");// xóa màn hình
			  MenuChinh(DSDocGia, SoDocGia,DSDauSach, SoDauSach);
			  break;
	}

	case 0:
	{
			  GhiFileVaThoat(DSDocGia, SoDocGia, DSDauSach, SoDauSach);	//thoát khỏi chương trình
			  break;
	}
	}
}
void GhiFileVaThoat(DocGia DSDocGia[MAX], int &SoDocGia, Sach DSDauSach[MAX], int &SoDauSach)
{
	GhiThongTinDocGiaLenFile(DSDocGia, SoDocGia);
	GhiThongTinSachLenFile(DSDauSach, SoDauSach);
	exit(0);
}