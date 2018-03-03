#include "Menu.h"


//Hàm thêm thông tin của 1 quyển sách cho đến khi nào muốn dừng thì dừng
void ThemSach(int &SoDocGia, char madg[][10], char hoten[][25], char cmnd[][14], char ngaysinh[][10], char gioitinh[][10], char email[][200],
	char diachi[][200], int ngaytao[], int thangtao[], int namtao[], int namhet[], char sachmuon[][10], int ngaytradukien[], int thangtradukien[], int namtradukien[],
	int&n, char masach[][10], char tensach[][255], char tacgia[][25], char nxb[][25], int namxuatban[], char theloai[][25], int gia[], int soquyen[])//them toi dau la tang so luong doc gia toi do
{
	printf("\n---------------------------------------------------------");
	printf("\n                  THEM SACH MOI");
	printf("\n---------------------------------------------------------");
	char tmp[255];
	char TiepTuc;
	do
	{
		fflush(stdin);
		n = n + 1;
		
		do
		{
			printf("\nMa ISBN: ");
			gets_s(tmp);
			if (strlen(tmp) < 1||strlen(tmp)>10)
				printf("\nMa ISBN khong hop le. Moi nhap lai.");
			else
			if (KiemTraSachTrung(tmp, masach, n) == 1)
				printf("\nMa sach bi trung. Moi nhap lai: ");
			fflush(stdin);
		} while (KiemTraSachTrung(tmp, masach, n) == 1 || strlen(tmp)<1);
		strcpy_s(masach[n], tmp);

		do
		{
			printf("\nTen sach:");
			gets_s(tensach[n]);
			if (strlen(tensach[n]) < 1)
				printf("\nTen sach khong duoc de trong. Moi nhap lai.");
		} while (strlen(tensach[n]) < 1);
		fflush(stdin);
		do
		{
			printf("\nTac gia:");
			gets_s(tacgia[n]);
			if (strlen(tacgia[n]) < 1)
				printf("\nTen tac gia khong duoc de trong. Moi nhap lai.");
		} while (strlen(tacgia[n]) < 1);
		fflush(stdin);
		do
		{
			printf("\nNha xuat ban:");
			gets_s(nxb[n]);
			if (strlen(nxb[n]) < 1)
				printf("\nNXB khong duoc de trong. Moi nhap lai.");
		} while (strlen(nxb[n]) < 1);
		
		fflush(stdin);
		printf("\nNam xuat ban:");
		scanf_s("%d", &namxuatban[n]);

		fflush(stdin);//xoa ky tu "ENTER"
		do{
			printf("\nThe loai:");
			gets_s(theloai[n]);
			if (strlen(theloai[n]) < 1)
				printf("\nThe loai khong duoc de trong. Moi nhap lai.");
		} while (strlen(theloai[n]) < 1);
		fflush(stdin);
		printf("\nGia:");
		scanf_s("%d", &gia[n]);
		fflush(stdin);
		printf("\nSo luong:");
		scanf_s("%d", &soquyen[n]);
		fflush(stdin);
		printf("\nBan co muon nhap tieo khong (Y/N):");
		TiepTuc = _getch();
	} while (TiepTuc == 'Y' || TiepTuc == 'y');

	printf("\n---------------------------------------------------------");
	printf("\n  1.Tro ve Menu quan li sach");
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
			  HienMenuQuanLiSach(SoDocGia, madg, hoten, cmnd, ngaysinh, gioitinh, email, diachi, ngaytao, thangtao, namtao, namhet, sachmuon, ngaytradukien, thangtradukien, namtradukien, n, masach, tensach, tacgia, nxb, namxuatban, theloai, gia, soquyen);
			  break;
	}
	default:
		exit(0);
	}
}

//Xuất toàn bộ danh sách độc giả theo form bảng tính
void XuatDanhSachDauSach(int &SoDocGia, char madg[][10], char hoten[][25], char cmnd[][14], char ngaysinh[][10], char gioitinh[][10], char email[][200],
	char diachi[][200], int ngaytao[], int thangtao[], int namtao[], int namhet[], char sachmuon[][10], int ngaytradukien[], int thangtradukien[], int namtradukien[],
	int&n, char masach[][10], char tensach[][255], char tacgia[][25], char nxb[][25], int namxuatban[], char theloai[][25], int gia[], int soquyen[])
{
	printf("\n--------------------------------------------------------------------------");
	printf("\n              DANH SACH CAC DAU SACH CO TRONG THU VIEN");
	printf("\n--------------------------------------------------------------------------");
	printf("\nSTT ISBN       Ten sach                        Tac gia                 Nha xuat ban         Nam XB   The loai        Gia           So luong");
	printf("\n--------------------------------------------------------------------------");
	if (n == 0)
		printf("\nDanh sach trong !!!");
	else
	{
		for (int i = 1; i <= n; i++)
		{
			printf("\n%-02d  ", i);
			printf("%-10s ", masach[i]);
			printf("%-30s ", tensach[i]);
			printf("%-25s ", tacgia[i]);
			printf("%-20s ", nxb[i]);
			printf("%-8d ", namxuatban[i]);
			printf("%-15s ", theloai[i]);
			printf("%-13d ", gia[i]);
			printf("%-03d ", soquyen[i]);
		
		}
	}
	printf("\n--------------------------------------------------------------------------");
	printf("\n  1.Tro ve Menu quan li sach");
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
			  HienMenuQuanLiSach(SoDocGia, madg, hoten, cmnd, ngaysinh, gioitinh, email, diachi, ngaytao, thangtao, namtao, namhet, sachmuon, ngaytradukien, thangtradukien, namtradukien, n, masach, tensach, tacgia, nxb, namxuatban, theloai, gia, soquyen);
			  break;
	}
	default:
		exit(0);
	}
}

//Xóa 1 đầu sách trong danh sách
void XoaSach(int &SoDocGia, char madg[][10], char hoten[][25], char cmnd[][14], char ngaysinh[][10], char gioitinh[][10], char email[][200],
	char diachi[][200], int ngaytao[], int thangtao[], int namtao[], int namhet[], char sachmuon[][10], int ngaytradukien[], int thangtradukien[], int namtradukien[],
	int&n, char masach[][10], char tensach[][255], char tacgia[][25], char nxb[][25], int namxuatban[], char theloai[][25], int gia[], int soquyen[])//them toi dau la tang so luong doc gia toi do
{
QuayLai:
	printf("\n---------------------------------------------------------");
	printf("\n              XOA SACH");
	printf("\n---------------------------------------------------------");
	printf("\nNhap Ma ISBN can xoa(nhap -1 de HUY BO):");
	char tmp[255];
	int kt = 0;

	fflush(stdin);
	gets_s(tmp);
	if (tmp[0] == '-')
	{
		goto NhayRa;
	}
	else 
	{
		for (int i = 1; i <= n; i++)
		if (strcmp(tmp, masach[i]) == 0)//trung
		{
			kt = i;
			break;
		}
		if (kt == 0)
		{
			printf("\nKhong tim ra ISBN sach.");
			goto NhayRa;
		}

	printf("\n---------------------------------");
	printf("\nTHONG TIN SACH:");
	printf("\nISBN          : %s", masach[kt]);
	printf("\nTen sach      : %s", tensach[kt]);
	printf("\nTen tac gia   : %s", tacgia[kt]);
	printf("\nNXB           : %s", nxb[kt]);
	printf("\nNam XB        : %d", namxuatban[kt]);
	printf("\nThe loai      : %s", theloai[kt]);
	printf("\nGia           : %d", gia[kt]);
	printf("\nSo luong      : %d", soquyen[kt]);
	
	printf("\n------------------------------");

	int TiepTuc;
	printf("\nBan co thuc sua muon xoa khong?\n  1.Co\n  2.Khong\n\nChon: ");

	do
	{ 
		scanf_s("%d", &TiepTuc); 
	} while (TiepTuc<1 || TiepTuc>2);

	if (TiepTuc == 2)
		goto NhayRa;//khong thuc hien xoa
	else//thuc hien xoa
	{
		for (int i = kt; i <= n - 1; i++)
		{
			strcpy_s(masach[i], masach[i + 1]);
			strcpy_s(tensach[i], tensach[i + 1]);
			strcpy_s(tacgia[i], tacgia[i + 1]);
			strcpy_s(nxb[i], nxb[i + 1]);
			strcpy_s(theloai[i], theloai[i + 1]);
			namxuatban[i] = namxuatban[i + 1];
			gia[i] = gia[i + 1];
			soquyen[i] = soquyen[i + 1];
		}
		n = n - 1;//giam 1 sach
		printf("\nXOA THANH CONG !!!");
	}
	}
NhayRa:

	printf("\n---------------------------------------------------------");
	printf("\n  1.Tiep tuc xoa");
	printf("\n  2.Xem danh sach cac sach");
	printf("\n  3.Tro ve Menu quan li sach");
	printf("\n  0.Thoat chuong trinh");
	int chon;
	do
	{
		printf("\n\nChon: ");
		scanf_s("%d", &chon);
	} while (chon > 3 || chon < 0);

	switch (chon)
	{
	case 1:
	{
			  system("cls");
			  goto QuayLai;
			  break;
	}
	case 2:
	{
			  system("cls");
			  XuatDanhSachDauSach(SoDocGia, madg, hoten, cmnd, ngaysinh, gioitinh, email, diachi, ngaytao, thangtao, namtao, namhet, sachmuon, ngaytradukien, thangtradukien, namtradukien, n, masach, tensach, tacgia, nxb, namxuatban, theloai, gia, soquyen);
			  break;
	}
	case 3:
	{
			  system("cls");
			  HienMenuQuanLiSach(SoDocGia, madg, hoten, cmnd, ngaysinh, gioitinh, email, diachi, ngaytao, thangtao, namtao, namhet, sachmuon, ngaytradukien, thangtradukien, namtradukien, n, masach, tensach, tacgia, nxb, namxuatban, theloai, gia, soquyen);
			  break;
	}
	default:
		exit(0);
	}
}

//tim kiem sach theo isbn
void TimKiemSachISBN(int &SoDocGia, char madg[][10], char hoten[][25], char cmnd[][14], char ngaysinh[][10], char gioitinh[][10], char email[][200],
	char diachi[][200], int ngaytao[], int thangtao[], int namtao[], int namhet[], char sachmuon[][10], int ngaytradukien[], int thangtradukien[], int namtradukien[],
	int&n, char masach[][10], char tensach[][255], char tacgia[][25], char nxb[][25], int namxuatban[], char theloai[][25], int gia[], int soquyen[])
{
	char tmp[255];
QuayLai:
	int kt = 0;
	fflush(stdin);
	printf("\n---------------------------------------------------------");
	printf("\n              TIM KIEM SACH");
	printf("\n---------------------------------------------------------");
	printf("\nNhap ma ISBN: ");

	fflush(stdin);
	gets_s(tmp);
	if (tmp[0] == '-')
	{
		goto NhayRa;
	}
	else
	{
		for (int i = 1; i <= n; i++)
		if (strcmp(tmp, masach[i]) == 0)//trung
		{
			kt = i;
			break;
		}
		if (kt == 0)
		{
			printf("\nKhong tim ra ISBN sach.");
			goto NhayRa;
		}

		printf("\n---------------------------------");
		printf("\nTHONG TIN SACH:");
		printf("\nISBN          : %s", masach[kt]);
		printf("\nTen sach      : %s", tensach[kt]);
		printf("\nTen tac gia   : %s", tacgia[kt]);
		printf("\nNXB           : %s", nxb[kt]);
		printf("\nNam XB        : %d", namxuatban[kt]);
		printf("\nThe loai      : %s", theloai[kt]);
		printf("\nGia           : %d", gia[kt]);
		printf("\nSo luong      : %d", soquyen[kt]);

		printf("\n------------------------------");
	NhayRa:

		printf("\n---------------------------------------------------------");
		printf("\n  1.Tiep tuc tim");
		printf("\n  2.Xem danh sach dau sach");
		printf("\n  3.Tro ve Menu quan li sach");
		printf("\n  0.Thoat chuong trinh");
		int chon;
		do
		{
			printf("\n\nChon: ");
			scanf_s("%d", &chon);
		} while (chon > 3 || chon < 0);

		switch (chon)
		{
		case 1:
		{
				  system("cls");
				  goto QuayLai;
				  break;
		}
		case 2:
		{
				  system("cls");
				  XuatDanhSachDauSach(SoDocGia, madg, hoten, cmnd, ngaysinh, gioitinh, email, diachi, ngaytao, thangtao, namtao, namhet, sachmuon, ngaytradukien, thangtradukien, namtradukien, n, masach, tensach, tacgia, nxb, namxuatban, theloai, gia, soquyen);
				  break;
		}
		case 3:
		{
				  system("cls");
				  HienMenuQuanLiSach(SoDocGia, madg, hoten, cmnd, ngaysinh, gioitinh, email, diachi, ngaytao, thangtao, namtao, namhet, sachmuon, ngaytradukien, thangtradukien, namtradukien, n, masach, tensach, tacgia, nxb, namxuatban, theloai, gia, soquyen);
				  break;
		}
		default:
			exit(0);
		}
	}
}

//tim sach theo ten sach
void TimKiemSachTheoTen(int &SoDocGia, char madg[][10], char hoten[][25], char cmnd[][14], char ngaysinh[][10], char gioitinh[][10], char email[][200],
	char diachi[][200], int ngaytao[], int thangtao[], int namtao[], int namhet[], char sachmuon[][10], int ngaytradukien[], int thangtradukien[], int namtradukien[],
	int&n, char masach[][10], char tensach[][255], char tacgia[][25], char nxb[][25], int namxuatban[], char theloai[][25], int gia[], int soquyen[])
{
	char tmp[255];
QuayLai:
	int kt = 0;
	fflush(stdin);
	printf("\n---------------------------------------------------------");
	printf("\n              TIM KIEM SACH");
	printf("\n---------------------------------------------------------");
	printf("\nNhap ten sach: ");

	fflush(stdin);
	gets_s(tmp);
	if (tmp[0] == '-')
	{
		goto NhayRa;
	}
	else
	{
		for (int i = 1; i <= n; i++)
		if (strcmp(tmp, tensach[i]) == 0)//trung
		{
			kt = i;
			break;
		}
		if (kt == 0)
		{
			printf("\nKhong tim ra ten sach.");
			goto NhayRa;
		}

		printf("\n---------------------------------");
		printf("\nTHONG TIN SACH:");
		printf("\nISBN          : %s", masach[kt]);
		printf("\nTen sach      : %s", tensach[kt]);
		printf("\nTen tac gia   : %s", tacgia[kt]);
		printf("\nNXB           : %s", nxb[kt]);
		printf("\nNam XB        : %d", namxuatban[kt]);
		printf("\nThe loai      : %s", theloai[kt]);
		printf("\nGia           : %d", gia[kt]);
		printf("\nSo luong      : %d", soquyen[kt]);

		printf("\n------------------------------");
	NhayRa:

		printf("\n---------------------------------------------------------");
		printf("\n  1.Tiep tuc tim");
		printf("\n  2.Xem danh sach dau sach");
		printf("\n  3.Tro ve Menu quan li sach");
		printf("\n  0.Thoat chuong trinh");
		int chon;
		do
		{
			printf("\n\nChon: ");
			scanf_s("%d", &chon);
		} while (chon > 3 || chon < 0);

		switch (chon)
		{
		case 1:
		{
				  system("cls");
				  goto QuayLai;
				  break;
		}
		case 2:
		{
				  system("cls");
				  XuatDanhSachDauSach(SoDocGia, madg, hoten, cmnd, ngaysinh, gioitinh, email, diachi, ngaytao, thangtao, namtao, namhet, sachmuon, ngaytradukien, thangtradukien, namtradukien, n, masach, tensach, tacgia, nxb, namxuatban, theloai, gia, soquyen);
				  break;
		}
		case 3:
		{
				  system("cls");
				  HienMenuQuanLiSach(SoDocGia, madg, hoten, cmnd, ngaysinh, gioitinh, email, diachi, ngaytao, thangtao, namtao, namhet, sachmuon, ngaytradukien, thangtradukien, namtradukien, n, masach, tensach, tacgia, nxb, namxuatban, theloai, gia, soquyen);
				  break;
		}
		default:
			exit(0);
		}
	}
}

//Chinh sua thong tin 1 đầu sach
void ChinhSuaThongTinSach(int &SoDocGia, char madg[][10], char hoten[][25], char cmnd[][14], char ngaysinh[][10], char gioitinh[][10], char email[][200],
	char diachi[][200], int ngaytao[], int thangtao[], int namtao[], int namhet[], char sachmuon[][10], int ngaytradukien[], int thangtradukien[], int namtradukien[],
	int&n, char masach[][10], char tensach[][255], char tacgia[][25], char nxb[][25], int namxuatban[], char theloai[][25], int gia[], int soquyen[])//them toi dau la tang so luong doc gia toi do
{
QuayLai:
	printf("\n---------------------------------------------------------");
	printf("\n              CHINH SUA THONG TIN SACH");
	printf("\n---------------------------------------------------------");


	//	char TiepTuc;
	char tmp[255];
	int kt = 0;//đánh dấu tìm ra hợp lệ hay không
	printf("\nNhap so ma ISBN (nhap -1 de thoat) : ");

	fflush(stdin);
	gets_s(tmp);
	if (tmp[0] == '-')
	{
		goto NhayRa;
	}
	else
	{
		for (int i = 1; i <= n; i++)
		if (strcmp(tmp, masach[i]) == 0)//trung
		{
			kt = i;
			break;
		}
		if (kt == 0)
		{
			printf("\nKhong tim ra ISBN sach.");
			goto NhayRa;
		}
		printf("\n---------------------------------------------");
		printf("\nTHONG TIN SACH:");
		printf("\nISBN          : %s", masach[kt]);
		printf("\nTen sach      : %s", tensach[kt]);
		printf("\nTen tac gia   : %s", tacgia[kt]);
		printf("\nNXB           : %s", nxb[kt]);
		printf("\nNam XB        : %d", namxuatban[kt]);
		printf("\nThe loai      : %s", theloai[kt]);
		printf("\nGia           : %d", gia[kt]);
		printf("\nSo luong      : %d", soquyen[kt]);

		printf("\n---------------------------------------------");
		printf("\nChon muc can chinh sua:");
		printf("\n  1.Sua toan bo thong tin sach");
		printf("\n  2.ISBN");
		printf("\n  3.Ten sach");
		printf("\n  4.Tac gia");
		printf("\n  5.Nha xuat ban");
		printf("\n  6.Nam xuat ban");
		printf("\n  7.The loai");
		printf("\n  8.Gia sach");
		printf("\n  9.So luong");
		printf("\n  0.Huy bo");

		int chon;
		do
		{
			printf("\n\nChon: ");
			scanf_s("%d", &chon);
			fflush(stdin);
		} while (chon > 9 || chon < 0);

		switch (chon)
		{
		case 1:
		{
				  fflush(stdin);
				  strcpy_s(masach[kt], "-1");//de truong hop nguoi dung muon nhap lai ma isbn cu thi ham kiem tra trung khong phat hien duoc
				  
				  do
				  {
					  printf("\nMa ISBN: ");
					  gets_s(tmp);
					  if (strlen(tmp) < 1||strlen(tmp)>10)
						  printf("\nMa ISBN khong hop le.Moi nhap lai.");
					  else
					  if (KiemTraSachTrung(tmp, masach, n) == 1)
						  printf("\nMa sach bi trung. Moi nhap lai: ");
					  fflush(stdin);
				  } while (KiemTraSachTrung(tmp, masach, n) == 1 || strlen(tmp)<1);
				  strcpy_s(masach[kt], tmp);

				  do
				  {
					  printf("\nTen sach:");
					  gets_s(tensach[kt]);
					  if (strlen(tensach[kt]) < 1)
						  printf("\nTen sach khong duoc de trong. Moi nhap lai.");
				  } while (strlen(tensach[kt]) < 1);
				  fflush(stdin);
				  
				  do
				  {
					  printf("\nTac gia:");
					  gets_s(tacgia[kt]);
					  if (strlen(tacgia[kt]) < 1)
						  printf("\nTen tac gia khong duoc de trong. Moi nhap lai.");
				  } while (strlen(tacgia[kt]) < 1);
				  fflush(stdin);
				  do
				  {
					  printf("\nNha xuat ban:");
					  gets_s(nxb[kt]);
					  if (strlen(nxb[kt]) < 1)
						  printf("\nNXB khong duoc de trong. Moi nhap lai.");
				  } while (strlen(nxb[kt]) < 1);

				  fflush(stdin);
				  printf("\nNam xuat ban:");
				  scanf_s("%d", &namxuatban[kt]);

				  fflush(stdin);//xoa ky tu "ENTER"
				  do{
					  printf("\nThe loai:");
					  gets_s(theloai[kt]);
					  if (strlen(theloai[kt]) < 1)
						  printf("\nThe loai khong duoc de trong. Moi nhap lai.");
				  } while (strlen(theloai[kt]) < 1);
				  fflush(stdin);
				  printf("\nGia:");
				  scanf_s("%d", &gia[kt]);
				  fflush(stdin);
				  printf("\nSo luong:");
				  scanf_s("%d", &soquyen[kt]);
				  fflush(stdin);

				  break;
		}
		case 2:
		{

				  fflush(stdin);
				  strcpy_s(masach[kt], "-1");//de truong hop nguoi dung muon nhap lai ma isbn cu thi ham kiem tra trung khong phat hien duoc

				  do
				  {
					  printf("\nMa ISBN: ");
					  gets_s(tmp);
					  if (strlen(tmp) < 1||strlen(tmp)>10)
						  printf("\nMa ISBN khong hop le.Moi nhap lai.");
					  else
					  if (KiemTraSachTrung(tmp, masach, n) == 1)
						  printf("\nMa doc gia bi trung. Moi nhap lai: ");
					  fflush(stdin);
				  } while (KiemTraSachTrung(tmp, masach, n) == 1 || strlen(tmp)<1);
				  strcpy_s(masach[kt], tmp);
				  break;
		}
		case 3:
		{
				  do
				  {
					  printf("\nTen sach:");
					  gets_s(tensach[kt]);
					  if (strlen(tensach[kt]) < 1)
						  printf("\nTen sach khong duoc de trong. Moi nhap lai.");
				  } while (strlen(tensach[kt]) < 1);
				  fflush(stdin);
				  break;
		}
		case 4:
		{
				  do
				  {
					  printf("\nTac gia:");
					  gets_s(tacgia[kt]);
					  if (strlen(tacgia[kt]) < 1)
						  printf("\nTen tac gia khong duoc de trong. Moi nhap lai.");
				  } while (strlen(tacgia[kt]) < 1);
				  fflush(stdin);
				  break;
		}
		case 5:
		{
				 /* printf("\nNXB:");
				  gets_s(nxb[kt]);*/
				  fflush(stdin);
				  do
				  {
					  printf("\nNha xuat ban:");
					  gets_s(nxb[kt]);
					  if (strlen(nxb[kt]) < 1)
						  printf("\nNXB khong duoc de trong. Moi nhap lai.");
				  } while (strlen(nxb[kt]) < 1);
				  break;
		}
		case 6:
		{
				  printf("\nNam xuat ban:");
				  scanf_s("%d", &namxuatban[kt]);
				  break;
		}
		case 7:
		{
				  do{
					  printf("\nThe loai:");
					  gets_s(theloai[kt]);
					  if (strlen(theloai[kt]) < 1)
						  printf("\nThe loai khong duoc de trong. Moi nhap lai.");
				  } while (strlen(theloai[kt]) < 1);
				  fflush(stdin);
				  break;
		}
		case 8:
		{
				  printf("\nGia :");
				  scanf_s("%d", &gia[kt]);
				  break;
		}
		case 9:
		{
				  printf("\nSo luong :");
				  scanf_s("%d", &soquyen[kt]);
				  break;
		}
		case 0:
		{
				  goto NhayRa;
				  break;
		}
		}

		printf("\n------------------------------");
		printf("\nTHONG TIN SACH SAU KHI CHINH SUA:");
		printf("\nISBN          : %s", masach[kt]);
		printf("\nTen sach      : %s", tensach[kt]);
		printf("\nTen tac gia   : %s", tacgia[kt]);
		printf("\nNXB           : %s", nxb[kt]);
		printf("\nNam XB        : %d", namxuatban[kt]);
		printf("\nThe loai      : %s", theloai[kt]);
		printf("\nGia           : %d", gia[kt]);
		printf("\nSo luong      : %d", soquyen[kt]);

		printf("\n---------------------------------------------");
	NhayRa:

		printf("\n---------------------------------------------------------");
		printf("\n  1.Tiep tuc chinh sua");
		printf("\n  2.Tro ve Menu quan li sach");
		printf("\n  0.Thoat chuong trinh");
		do
		{
			printf("\n\nChon: ");
			scanf_s("%d", &chon);
		} while (chon > 2 || chon < 0);

		switch (chon)
		{
		case 1:
		{
				  system("cls");
				  goto QuayLai;
				  break;
		}
		case 2:
		{
				  system("cls");
				  HienMenuQuanLiSach(SoDocGia, madg, hoten, cmnd, ngaysinh, gioitinh, email, diachi, ngaytao, thangtao, namtao, namhet, sachmuon, ngaytradukien, thangtradukien, namtradukien, n, masach, tensach, tacgia, nxb, namxuatban, theloai, gia, soquyen);
				  break;
		}
		default:
			exit(0);
		}
	}
}
