#include "Menu.h"
//void ThemDocGia(int &n, char madg[][10], char hoten[][25], char cmnd[][14], char ngaysinh[][10], char gioitinh[][10], char email[][200],
//	char diachi[][200], int ngaytao[], int thangtao[], int namtao[], int namhet[])


//Hàm in ra menu bảng chọn các ứng dụng quản lí
//Input:Nhập vào các số tương ứng, ngoài 0.1.2.3.4.5 thì cho nhập lại, 0 để thoát
void HienMenuChinh(int &SoDocGia, char madg[][10], char hoten[][25], char cmnd[][14], char ngaysinh[][10], char gioitinh[][10], char email[][200],
	char diachi[][200], int ngaytao[], int thangtao[], int namtao[], int namhet[], char sachmuon[][10], int ngaytradukien[], int thangtradukien[], int namtradukien[],
	int&SoDauSach, char masach[][10], char tensach[][255], char tacgia[][25], char nxb[][25], int namxuatban[], char theloai[][25], int gia[], int soquyen[])
{
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

	switch(chon)
	{
		case 1:
			{
				system("cls");// xóa màn hình
				HienMenuQuanLiDocGia(SoDocGia, madg, hoten, cmnd, ngaysinh, gioitinh, email, diachi, ngaytao, thangtao, namtao, namhet, sachmuon, ngaytradukien, thangtradukien, namtradukien, SoDauSach, masach, tensach, tacgia, nxb, namxuatban, theloai, gia, soquyen);
				break;
			}
		case 2:
		{
				  system("cls");// xóa màn hình
				  HienMenuQuanLiSach(SoDocGia, madg, hoten, cmnd, ngaysinh, gioitinh, email, diachi, ngaytao, thangtao, namtao, namhet, sachmuon, ngaytradukien, thangtradukien, namtradukien, SoDauSach, masach, tensach, tacgia, nxb, namxuatban, theloai, gia, soquyen);
				  break;
		}
		case 3:
		{
				  system("cls");// xóa màn hình
				  LapTheMuonSach(SoDocGia, madg, hoten, cmnd, ngaysinh, gioitinh, email, diachi, ngaytao, thangtao, namtao, namhet,sachmuon,ngaytradukien,thangtradukien,namtradukien, SoDauSach, masach, tensach, tacgia, nxb, namxuatban, theloai, gia, soquyen);
				  break;
		}
		case 4:
		{
				  system("cls");// xóa màn hình
				  LapTheTraSach(SoDocGia, madg, hoten, cmnd, ngaysinh, gioitinh, email, diachi, ngaytao, thangtao, namtao, namhet, sachmuon, ngaytradukien, thangtradukien, namtradukien, SoDauSach, masach, tensach, tacgia, nxb, namxuatban, theloai, gia, soquyen);
				  break;
		}
		case 5:
		{
				  system("cls");// xóa màn hình
				  HienMenuThongKe(SoDocGia, madg, hoten, cmnd, ngaysinh, gioitinh, email, diachi, ngaytao, thangtao, namtao, namhet, sachmuon, ngaytradukien, thangtradukien, namtradukien, SoDauSach, masach, tensach, tacgia, nxb, namxuatban, theloai, gia, soquyen);
				  break;
		}
		case 0:
			{
				 exit(0);		//thoát khỏi chương trình
			}
	
	}
	
}

//Hàm hiện ra menu Quản Lí độc giả, chọn các số 1... để đi tới các menu chọn tương ứng.
void HienMenuQuanLiDocGia(int &SoDocGia, char madg[][10], char hoten[][25], char cmnd[][14], char ngaysinh[][10], char gioitinh[][10], char email[][200],
	char diachi[][200], int ngaytao[], int thangtao[], int namtao[], int namhet[], char sachmuon[][10], int ngaytradukien[], int thangtradukien[], int namtradukien[],
	int&SoDauSach, char masach[][10], char tensach[][255], char tacgia[][25], char nxb[][25], int namxuatban[], char theloai[][25], int gia[], int soquyen[])
{
	printf("\nQUAN LI DOC GIA");
	printf("\n  1.Xem danh sach doc gia trong thu vien");
	printf("\n  2.Them doc gia");
	printf("\n  3.Chinh sua thong tin mot doc gia");
	printf("\n  4.Xoa thong tin mot doc gia");
	printf("\n  5.Tim kiem doc gia theo CMND");
	printf("\n  6.Tim kiem doc gia theo ho ten");
	printf("\n  7.Tro ve Menu chinh");
	printf("\n  0.Thoat chuong trinh");
	int chon;
	do
	{
		printf("\n\nChon: ");
		scanf_s("%d", &chon);
	} while (chon > 7 || chon < 0);

	switch (chon)
	{
	case 1:
	{
			  system("cls");
			  XuatDanhSachDocGia(SoDocGia, madg, hoten, cmnd, ngaysinh, gioitinh, email, diachi, ngaytao, thangtao, namtao, namhet, sachmuon, ngaytradukien, thangtradukien, namtradukien, SoDauSach, masach, tensach, tacgia, nxb, namxuatban, theloai, gia, soquyen);
			  break;
	}
	case 2:
	{
			  system("cls");
			  ThemDocGia(SoDocGia, madg, hoten, cmnd, ngaysinh, gioitinh, email, diachi, ngaytao, thangtao, namtao, namhet, sachmuon, ngaytradukien, thangtradukien, namtradukien, SoDauSach, masach, tensach, tacgia, nxb, namxuatban, theloai, gia, soquyen);
			  break;
	}
	case 3:
	{
			  system("cls");
			  ChinhSuaThongTinDocGia(SoDocGia, madg, hoten, cmnd, ngaysinh, gioitinh, email, diachi, ngaytao, thangtao, namtao, namhet, sachmuon, ngaytradukien, thangtradukien, namtradukien, SoDauSach, masach, tensach, tacgia, nxb, namxuatban, theloai, gia, soquyen);
			  break;
	}
	case 4:
	{
			  system("cls");
			  XoaDocGia(SoDocGia, madg, hoten, cmnd, ngaysinh, gioitinh, email, diachi, ngaytao, thangtao, namtao, namhet, sachmuon, ngaytradukien, thangtradukien, namtradukien, SoDauSach, masach, tensach, tacgia, nxb, namxuatban, theloai, gia, soquyen);
			  break;
	}
	case 5:
	{
			  system("cls");
			  TimKiemDocGiaTheoCMND(SoDocGia, madg, hoten, cmnd, ngaysinh, gioitinh, email, diachi, ngaytao, thangtao, namtao, namhet, sachmuon, ngaytradukien, thangtradukien, namtradukien, SoDauSach, masach, tensach, tacgia, nxb, namxuatban, theloai, gia, soquyen);
			  break;
	}
	case 6:
	{
			  system("cls");
			  TimKiemDocGiaTheoHoTen(SoDocGia, madg, hoten, cmnd, ngaysinh, gioitinh, email, diachi, ngaytao, thangtao, namtao, namhet, sachmuon, ngaytradukien, thangtradukien, namtradukien, SoDauSach, masach, tensach, tacgia, nxb, namxuatban, theloai, gia, soquyen);
			  break;
	}
	case 7:
	{
			  system("cls");// xóa màn hình
			  HienMenuChinh(SoDocGia, madg, hoten, cmnd, ngaysinh, gioitinh, email, diachi, ngaytao, thangtao, namtao, namhet, sachmuon, ngaytradukien, thangtradukien, namtradukien, SoDauSach, masach, tensach, tacgia, nxb, namxuatban, theloai, gia, soquyen);
			  break;
	}

	case 0:
	{
			  exit(0);		//thoát khỏi chương trình
			  break;
	}

	}

}

//Hàm hiện ra menu quan li sach 
void HienMenuQuanLiSach(int &SoDocGia, char madg[][10], char hoten[][25], char cmnd[][14], char ngaysinh[][10], char gioitinh[][10], char email[][200],
	char diachi[][200], int ngaytao[], int thangtao[], int namtao[], int namhet[], char sachmuon[][10], int ngaytradukien[], int thangtradukien[], int namtradukien[],
	int&SoDauSach, char masach[][10], char tensach[][255], char tacgia[][25], char nxb[][25], int namxuatban[], char theloai[][25], int gia[], int soquyen[])
{
	printf("\nQUAN LI SACH");
	printf("\n  1.Xem danh sach cac sach trong thu vien");
	printf("\n  2.Them sach");
	printf("\n  3.Chinh sua thong tin mot sach");
	printf("\n  4.Xoa thong tin mot sach");
	printf("\n  5.Tim kiem sach theo ISBN");
	printf("\n  6.Tim kiem sach theo ten sach");
	printf("\n  7.Tro ve Menu chinh");
	printf("\n  0.Thoat chuong trinh");
	int chon;
	do
	{
		printf("\n\nChon: ");
		scanf_s("%d", &chon);
	} while (chon > 7 || chon < 0);

	switch (chon)
	{
	case 1:
	{
			  system("cls");
			  XuatDanhSachDauSach(SoDocGia, madg, hoten, cmnd, ngaysinh, gioitinh, email, diachi, ngaytao, thangtao, namtao, namhet, sachmuon, ngaytradukien, thangtradukien, namtradukien, SoDauSach, masach, tensach, tacgia, nxb, namxuatban, theloai, gia, soquyen);
			  break;
	}
	case 2:
	{
			  system("cls");
			  ThemSach(SoDocGia, madg, hoten, cmnd, ngaysinh, gioitinh, email, diachi, ngaytao, thangtao, namtao, namhet, sachmuon, ngaytradukien, thangtradukien, namtradukien, SoDauSach, masach, tensach, tacgia, nxb, namxuatban, theloai, gia, soquyen);
			  break;
	}
	case 3:
	{
			  system("cls");
			  ChinhSuaThongTinSach(SoDocGia, madg, hoten, cmnd, ngaysinh, gioitinh, email, diachi, ngaytao, thangtao, namtao, namhet, sachmuon, ngaytradukien, thangtradukien, namtradukien, SoDauSach, masach, tensach, tacgia, nxb, namxuatban, theloai, gia, soquyen);
			  break;
	}
	case 4:
	{
			  system("cls");
			  XoaSach(SoDocGia, madg, hoten, cmnd, ngaysinh, gioitinh, email, diachi, ngaytao, thangtao, namtao, namhet, sachmuon, ngaytradukien, thangtradukien, namtradukien, SoDauSach, masach, tensach, tacgia, nxb, namxuatban, theloai, gia, soquyen);
			  break;
	}
	case 5:
	{
			  system("cls");
			  TimKiemSachISBN(SoDocGia, madg, hoten, cmnd, ngaysinh, gioitinh, email, diachi, ngaytao, thangtao, namtao, namhet, sachmuon, ngaytradukien, thangtradukien, namtradukien, SoDauSach, masach, tensach, tacgia, nxb, namxuatban, theloai, gia, soquyen);
			  break;
	}
	case 6:
	{
			  system("cls");
			  TimKiemSachTheoTen(SoDocGia, madg, hoten, cmnd, ngaysinh, gioitinh, email, diachi, ngaytao, thangtao, namtao, namhet, sachmuon, ngaytradukien, thangtradukien, namtradukien, SoDauSach, masach, tensach, tacgia, nxb, namxuatban, theloai, gia, soquyen);
			  break;
	}
	case 7:
	{
			  system("cls");// xóa màn hình
			  HienMenuChinh(SoDocGia, madg, hoten, cmnd, ngaysinh, gioitinh, email, diachi, ngaytao, thangtao, namtao, namhet, sachmuon, ngaytradukien, thangtradukien, namtradukien, SoDauSach, masach, tensach, tacgia, nxb, namxuatban, theloai, gia, soquyen);
			  break;
	}
	case 0:
	{
			  exit(0);		//thoát khỏi chương trình
	}

	}
}

//Hàm hiện ra cac thong ke co ban
void HienMenuThongKe(int &SoDocGia, char madg[][10], char hoten[][25], char cmnd[][14], char ngaysinh[][10], char gioitinh[][10], char email[][200],
	char diachi[][200], int ngaytao[], int thangtao[], int namtao[], int namhet[], char sachmuon[][10], int ngaytradukien[], int thangtradukien[], int namtradukien[],
	int&SoDauSach, char masach[][10], char tensach[][255], char tacgia[][25], char nxb[][25], int namxuatban[], char theloai[][25], int gia[], int soquyen[])
{
	int tongsach,sachcon,sachdangmuon, tongnam, tongnu, dem = 0;
	sachcon = TinhSoLuongSach(SoDocGia, madg, hoten, cmnd, ngaysinh, gioitinh, email, diachi, ngaytao, thangtao, namtao, namhet, sachmuon, ngaytradukien, thangtradukien, namtradukien, SoDauSach, masach, tensach, tacgia, nxb, namxuatban, theloai, gia, soquyen);
	sachdangmuon = TinhSoSachDangDuocMuon(SoDocGia, madg, hoten, cmnd, ngaysinh, gioitinh, email, diachi, ngaytao, thangtao, namtao, namhet, sachmuon, ngaytradukien, thangtradukien, namtradukien, SoDauSach, masach, tensach, tacgia, nxb, namxuatban, theloai, gia, soquyen);
	tongsach = sachcon + sachdangmuon;

	tongnam = ThongKeTheoGioiTinh("NAM", SoDocGia, madg, hoten, cmnd, ngaysinh, gioitinh, email, diachi, ngaytao, thangtao, namtao, namhet, sachmuon, ngaytradukien, thangtradukien, namtradukien, SoDauSach, masach, tensach, tacgia, nxb, namxuatban, theloai, gia, soquyen);
	tongnu = ThongKeTheoGioiTinh("NU", SoDocGia, madg, hoten, cmnd, ngaysinh, gioitinh, email, diachi, ngaytao, thangtao, namtao, namhet, sachmuon, ngaytradukien, thangtradukien, namtradukien, SoDauSach, masach, tensach, tacgia, nxb, namxuatban, theloai, gia, soquyen);

	printf("\n*************************************************");
	printf("\n                    THONG KE");
	printf("\n*************************************************\n\n");
	printf("\n=================================================");
	printf("\n  - Tong so luong sach trong thu vien: %d", tongsach);
	printf("\n=================================================");
	printf("\n  - Sach con trong thu vien          : %d", sachcon);
	printf("\n=================================================");
	printf("\n  - Sach dang duoc muon              : %d", sachdangmuon);
	printf("\n=================================================");
	printf("\n  - Thong ke sach theo the loai:\n");
			  for (int i = 1; i <= SoDauSach; i++)
			  {		
				  dem = 0;
				  if (KiemTraTheLoaiTrung(theloai[i], theloai, i - 1) != 1)//chưa duyệt lần nào
				  {
					  dem = soquyen[i];//đếm thể loại của thằng i
					  for (int k = 1; k <= SoDocGia;k++)
					  if (strcmp(sachmuon[k], theloai[i]) == 0)
						  dem++;
					  for (int j = i + 1; j <= SoDauSach;j++)
					  if (strcmp(theloai[i],theloai[j])==0)
						  dem+=soquyen[j];
					  
						printf("\n  +    %10s: %d", theloai[i], dem);
					 
				  }
			  }
			  printf("\n=================================================");

	//3
	printf("\n  - Tong so doc gia    : %d", SoDocGia);
	printf("\n        + Nam        : %d",tongnam);
	printf("\n        + Nu         : %d", tongnu);
	printf("\n=================================================");
	printf("\n  - Thong ke so do gia tre han");
	int ngaytra = 0, thangtra = 0, namtra = 0;
	int sotre = 0,tam;
	
		printf("\n  - Nhap ngay kiem tra:");
		NhapNgayThangNam(ngaytra, thangtra, namtra);
		for (int i = 1; i <= SoDocGia; i++)
		{
			tam = TinhSoNgayChenhLech(ngaytradukien[i], thangtradukien[i], namtradukien[i], ngaytra, thangtra, namtra);
			if (KiemTraSachTrung(sachmuon[i],masach,SoDocGia)==1 &&tam > 0)
				sotre++;
		}
		printf("\n - So doc gia tre hen: %d", sotre);

	printf("\n*************************************************");
	printf("\n  1.Tro ve Menu chinh");
	printf("\n  0.Thoat chuong trinh");
	int chon;
	do
	{
		printf("\n\nChon: ");
		scanf_s("%d", &chon);
	} while (chon > 1 || chon < 0);

	switch (chon)
	{
	case 1:
	{
			  system("cls");
			  HienMenuChinh(SoDocGia, madg, hoten, cmnd, ngaysinh, gioitinh, email, diachi, ngaytao, thangtao, namtao, namhet, sachmuon, ngaytradukien, thangtradukien, namtradukien, SoDauSach, masach, tensach, tacgia, nxb, namxuatban, theloai, gia, soquyen);
			  break;
	}
	default:
		exit(0);
	}
}
