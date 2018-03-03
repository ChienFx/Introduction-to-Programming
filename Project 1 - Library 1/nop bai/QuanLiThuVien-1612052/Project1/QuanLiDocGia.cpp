#include "Menu.h"
//Hàm thêm mới một độc giả với mã độc giả được tự động cập nhật theo số thứ tự
//Them xong nhập 1 hoặc 0 để trở về menu trước hoặc thoát chouwng trình tương ứng
void ThemDocGia(int &n, char madg[][10], char hoten[][25], char cmnd[][14], char ngaysinh[][10], char gioitinh[][10], char email[][200],
	char diachi[][200], int ngaytao[], int thangtao[], int namtao[], int namhet[], char sachmuon[][10], int ngaytradukien[], int thangtradukien[], int namtradukien[],
	int&SoDauSach, char masach[][10], char tensach[][255], char tacgia[][25], char nxb[][25], int namxuatban[], char theloai[][25], int gia[], int soquyen[])//them toi dau la tang so luong doc gia toi do
{
	printf("\n---------------------------------------------------------");
	printf("\n              THEM DOC GIA MOI");
	printf("\n---------------------------------------------------------");
	char tmp[255];
	char TiepTuc;
	do
	{
		fflush(stdin);
		n = n + 1;
		printf("\nMa doc gia 5 ki tu: ");
	NhapLai1:
		gets_s(tmp); 
		fflush(stdin);
		if (KiemTraMaTrung(tmp, madg, n) == 1 || strlen(tmp)<1||strlen(tmp)>10)
		{
			if (strlen(tmp)>10)
				printf("\nMa doc gia qua dai. Moi nhap lai:");
			else if (strlen(tmp) < 1)
				printf("\nMa doc gia khong duoc de trong. Moi nhap lai:");
			else
				printf("\nMa doc gia khong hop le. Moi nhap lai: ");
				goto NhapLai1;
		}

		fflush(stdin);
		strcpy_s(madg[n],tmp);
		do
		{
			printf("\nHo ten:");
			gets_s(hoten[n]);
			if (strlen(hoten[n]) < 1)
				printf("\nHo ten doc gia khong duoc de trong. Moi nhap lai: ");
		} while (strlen(hoten[n]) < 1);

		printf("\nCMND:");
	NhapLai2:
		gets_s(tmp);
		fflush(stdin);
		if (KiemTraCMNDTrung(tmp, cmnd, n) == 1 || strlen(tmp)<1)
		{
			if (strlen(tmp) < 1)
				printf("\nMa doc gia khong duoc de trong. Moi nhap lai:");
			else
			printf("\nCMND bi trung. Moi nhap lai: ");
			goto NhapLai2;
		}

		fflush(stdin);
		strcpy_s(cmnd[n], tmp);
		printf("\nNgay Sinh:");
		gets_s(ngaysinh[n]);

		printf("\nGioi Tinh (Nam/Nu):\n 1.Nam\n 2.Nu\nChon: ");//1 la nam, 2 la nu
		int chon2;
		
		do
		{
			scanf_s("%d", &chon2);
		} while (chon2<0 || chon2>2);

		if (chon2==1)
			strcpy_s(gioitinh[n], "NAM");
		else 
			strcpy_s(gioitinh[n], "NU");

		fflush(stdin);
		printf("\nEmail:");
		gets_s(email[n]);



		fflush(stdin);
		printf("\nDia Chi:");
		gets_s(diachi[n]);
		
		
		fflush(stdin);
		printf("\nNgay tao the:");
		//scanf_s("%d/%d/%d", &ngaytao[n], &thangtao[n], &namtao[n]);
		NhapNgayThangNam(ngaytao[n], thangtao[n], namtao[n]);
		namhet[n] = namtao[n] + 4;
		
		fflush(stdin);

		//thuộc tính mượn sách
		strcpy_s(sachmuon[n],"-1");
		ngaytradukien[n] = 0;
		thangtradukien[n] = 0;
		namtradukien[n] = 0;

		printf("\nBan co muon nhap tieo khong (Y/N):");
		TiepTuc = _getch();
	} while (TiepTuc == 'Y' || TiepTuc == 'y');
	printf("\n---------------------------------------------------------");
	printf("\n  1.Tro ve Menu quan li doc gia");
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
			  HienMenuQuanLiDocGia(n, madg, hoten, cmnd, ngaysinh, gioitinh, email, diachi, ngaytao, thangtao, namtao, namhet, sachmuon, ngaytradukien, thangtradukien, namtradukien, SoDauSach, masach, tensach, tacgia, nxb, namxuatban, theloai, gia, soquyen);
			  break;
	}
	default:
		exit(0);
	}
}

//Xuất toàn bộ danh sách độc giả trong thư viện ra màn hinh
void XuatDanhSachDocGia(int &n, char madg[][10], char hoten[][25], char cmnd[][14], char ngaysinh[][10], char gioitinh[][10], char email[][200],
	char diachi[][200], int ngaytao[], int thangtao[], int namtao[], int namhet[], char sachmuon[][10], int ngaytradukien[], int thangtradukien[], int namtradukien[],
	int&SoDauSach, char masach[][10], char tensach[][255], char tacgia[][25], char nxb[][25], int namxuatban[], char theloai[][25], int gia[], int soquyen[])
{
	printf("\n---------------------------------------------------------------------------------");
	printf("\n              DANH SACH DOC GIA THU VIEN DH KHTN");
	printf("\n---------------------------------------------------------------------------------");
	printf("\nSTT  Ma So     Ho va ten              Gioi Tinh     CMND          Ngay tao the   Ngay het han");
	printf("\n---------------------------------------------------------------------------------");
	if (n == 0)
		printf("\nDanh sach trong !!!");
	else
	{
		for (int i = 1; i <= n; i++)
		{
			printf("\n%04d ", i);
			printf("%5s     ", madg[i]);
			printf("%-23s", hoten[i]);
			printf("%-14s", gioitinh[i]);
			printf("%-13s ", cmnd[i]);
			printf("%02d/%02d/%04d     ", ngaytao[i], thangtao[i], namtao[i]);
			printf("%02d/%02d/%04d     ", ngaytao[i], thangtao[i], namhet[i]);
		}
	}
	printf("\n--------------------------------------------------------------------------");
	printf("\n  1.Tro ve Menu quan li doc gia");
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
			  HienMenuQuanLiDocGia(n, madg, hoten, cmnd, ngaysinh, gioitinh, email, diachi, ngaytao, thangtao, namtao, namhet, sachmuon, ngaytradukien, thangtradukien, namtradukien, SoDauSach, masach, tensach, tacgia, nxb, namxuatban, theloai, gia, soquyen);
			  break;
	}
	default:
		exit(0);
	}
}

//Hàm thực hiện xóa độc giả có mã "mdg[i]"
void XoaDocGia(int &n, char madg[][10], char hoten[][25], char cmnd[][14], char ngaysinh[][10], char gioitinh[][10], char email[][200],
	char diachi[][200], int ngaytao[], int thangtao[], int namtao[], int namhet[], char sachmuon[][10], int ngaytradukien[], int thangtradukien[], int namtradukien[],
	int&SoDauSach, char masach[][10], char tensach[][255], char tacgia[][25], char nxb[][25], int namxuatban[], char theloai[][25], int gia[], int soquyen[])//them toi dau la tang so luong doc gia toi do
{
QuayLai:
	printf("\n---------------------------------------------------------");
	printf("\n              XOA DOC GIA");
	printf("\n---------------------------------------------------------");
	printf("\nNhap Ma doc gia can xoa(nhap -1 de HUY BO):");
	char tmp[255];
	int vt = 0;
QuayLai2:
	//scanf_s("%d", &tmp);
	gets_s(tmp);
	if (tmp[0] == '-')
	{
		goto NhayRa;
	}
	else if (KiemTraMaTrung(tmp,madg,n)==0)
	{
		printf("\nMa doc gia khong ton tai. Moi nhap lai:");
		//system("cls");
		goto QuayLai2;
	}
	for (int i = 1; i <= n;i++)
	if (strcmp(tmp, madg[i]) == 0)
		vt = i;
	printf("\n------------------------------");
	printf("\nTHONG TIN DOC GIA:");
	printf("\n\nMa doc gia: %5s", madg[vt]);
	printf("\nHo ten    : %s", hoten[vt]);
	printf("\nCMND      : %s", cmnd[vt]);
	printf("\nNgay Sinh : %s", ngaysinh[vt]);
	printf("\nGioi Tinh : %s", gioitinh[vt]);
	printf("\nEmail     : %s", email[vt]);
	printf("\nDia Chi   : %s", diachi[vt]);
	printf("\nNgay tao the: %d/%d/%d", ngaytao[vt], thangtao[vt], namtao[vt]);
	printf("\nNgay het han: %d/%d/%d", ngaytao[vt], thangtao[vt], namhet[vt]);
	printf("\n------------------------------");

	int TiepTuc;
	printf("\nBan co thuc sua muon xoa khong?\n  1.Co\n  2.Khong\n\nChon: ");
	
	do{ scanf_s("%d", &TiepTuc); } while (TiepTuc<1 || TiepTuc>2);

	if (TiepTuc == 2)
		goto NhayRa;//khong thuc hien xoa
	else//thuc hien xoa
	{
		for (int i = vt; i <= n - 1; i++)
		{
			//madg[i] = madg[i+1];
			strcpy_s(madg[i], madg[i+1]);

			strcpy_s(hoten[i], hoten[i + 1]);

			strcpy_s(cmnd[i], cmnd[i + 1]);

			strcpy_s(ngaysinh[i], ngaysinh[i + 1]);

			strcpy_s(gioitinh[i], gioitinh[i + 1]);

			strcpy_s(email[i], email[i + 1]);

			strcpy_s(diachi[i], diachi[i + 1]);

			ngaytao[i] = ngaytao[i + 1];
			thangtao[i] = thangtao[i + 1];
			namtao[i] = namtao[i + 1];
			namhet[i] = namhet[i + 1];

			strcpy_s(sachmuon[i], sachmuon[i + 1]);
			ngaytradukien[i] = ngaytradukien[i + 1];
			thangtradukien[i] = thangtradukien[i + 1];
			namtradukien[i] = namtradukien[i + 1];
		}
		n = n - 1;//giam 1 doc gia
		printf("\nXOA THANH CONG !!!");
		
	}
NhayRa:
	
	printf("\n---------------------------------------------------------");
	printf("\n  1.Tiep tuc xoa");
	printf("\n  2.Xem danh sach doc gia");
	printf("\n  3.Tro ve Menu quan li doc gia");
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
			  XuatDanhSachDocGia(n, madg, hoten, cmnd, ngaysinh, gioitinh, email, diachi, ngaytao, thangtao, namtao, namhet, sachmuon, ngaytradukien, thangtradukien, namtradukien, SoDauSach, masach, tensach, tacgia, nxb, namxuatban, theloai, gia, soquyen);
			  break;
	}
	case 3:
	{
			  system("cls");
			  HienMenuQuanLiDocGia(n, madg, hoten, cmnd, ngaysinh, gioitinh, email, diachi, ngaytao, thangtao, namtao, namhet, sachmuon, ngaytradukien, thangtradukien, namtradukien, SoDauSach, masach, tensach, tacgia, nxb, namxuatban, theloai, gia, soquyen);
			  break;
	}
	default:
		exit(0);
	}
}


//Hàm nhập và chứng minh nhân dân và đưa ra list thong tin thoa yeu cau, neu khong co thi in ra thong bao khong tim tháy
void TimKiemDocGiaTheoCMND(int &n, char madg[][10], char hoten[][25], char cmnd[][14], char ngaysinh[][10], char gioitinh[][10], char email[][200],
	char diachi[][200], int ngaytao[], int thangtao[], int namtao[], int namhet[], char sachmuon[][10], int ngaytradukien[], int thangtradukien[], int namtradukien[],
	int&SoDauSach, char masach[][10], char tensach[][255], char tacgia[][25], char nxb[][25], int namxuatban[], char theloai[][25], int gia[], int soquyen[])
{
	char tmp[255];
QuayLai:
	int kt = 0;
	fflush(stdin);
	printf("\n---------------------------------------------------------");
	printf("\n              TIM KIEM DOC GIA");
	printf("\n---------------------------------------------------------");
	printf("\nNhap so CMND can tim: ");
	gets_s(tmp);
	for (int i = 1; i <= n;i++)
	if (strcmp(tmp,cmnd[i])==0)//hàm str(s1.s2) so sanh 2 xau thay vi tmp == cmnd[i])
	{
		kt = 1;
		printf("\nMa doc gia: %5s", madg[i]);
		printf("\nHo ten    : %s", hoten[i]);
		printf("\nCMND      : %s", cmnd[i]);
		printf("\nNgay Sinh : %s", ngaysinh[i]);
		printf("\nGioi Tinh : %s", gioitinh[i]);
		printf("\nEmail     : %s", email[i]);
		printf("\nDia Chi   : %s", diachi[i]);
		printf("\nNgay tao the: %d/%d/%d", ngaytao[i], thangtao[i], namtao[i]);
		printf("\nNgay het han: %d/%d/%d", ngaytao[i], thangtao[i], namhet[i]);
		//XuatThongTinDocGia(i, n, madg, hoten, cmnd, ngaysinh, gioitinh, email, diachi, ngaytao, thangtao, namtao, namhet, sachmuon, ngaytradukien, thangtradukien, namtradukien, SoDauSach, masach, tensach, tacgia, nxb, namxuatban, theloai, gia, soquyen);
		break;
	}
	if (kt == 0)
	printf("\nKhong tim thay!!!");
	printf("\n---------------------------------------------------------");
	printf("\n  1.Tiep tuc tim");
	printf("\n  2.Xem danh sach doc gia");
	printf("\n  3.Tro ve Menu quan li doc gia");
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
			  XuatDanhSachDocGia(n, madg, hoten, cmnd, ngaysinh, gioitinh, email, diachi, ngaytao, thangtao, namtao, namhet, sachmuon, ngaytradukien, thangtradukien, namtradukien, SoDauSach, masach, tensach, tacgia, nxb, namxuatban, theloai, gia, soquyen);
			  break;
	}
	case 3:
	{
			  system("cls");
			  HienMenuQuanLiDocGia(n, madg, hoten, cmnd, ngaysinh, gioitinh, email, diachi, ngaytao, thangtao, namtao, namhet, sachmuon, ngaytradukien, thangtradukien, namtradukien, SoDauSach, masach, tensach, tacgia, nxb, namxuatban, theloai, gia, soquyen);
			  break;
	}
	default:
		exit(0);
	}
}

//Tìm kiếm thông tinh độc giả theo họ tên
void TimKiemDocGiaTheoHoTen(int &n, char madg[][10], char hoten[][25], char cmnd[][14], char ngaysinh[][10], char gioitinh[][10], char email[][200],
	char diachi[][200], int ngaytao[], int thangtao[], int namtao[], int namhet[], char sachmuon[][10], int ngaytradukien[], int thangtradukien[], int namtradukien[],
	int&SoDauSach, char masach[][10], char tensach[][255], char tacgia[][25], char nxb[][25], int namxuatban[], char theloai[][25], int gia[], int soquyen[])
{
	char tmp[255];
QuayLai:
	int kt = 0;
	fflush(stdin);
	printf("\n---------------------------------------------------------");
	printf("\n             TIM KIEM DOC GIA THEO HO TEN");
	printf("\n---------------------------------------------------------");
	printf("\nNhap so Ho Ten doc gia can tim: ");
	gets_s(tmp);
	for (int i = 1; i <= n; i++)
	if (strcmp(tmp, hoten[i]) == 0)//hàm str(s1.s2) so sanh 2 xau thay vi tmp == hoten[i])
	{
		kt = 1;
		printf("\nMa doc gia: %5s", madg[i]);
		printf("\nHo ten    : %s", hoten[i]);
		printf("\nCMND      : %s", cmnd[i]);
		printf("\nNgay Sinh : %s", ngaysinh[i]);
		printf("\nGioi Tinh : %s", gioitinh[i]);
		printf("\nEmail     : %s", email[i]);
		printf("\nDia Chi   : %s", diachi[i]);
		printf("\nNgay tao the: %d/%d/%d", ngaytao[i], thangtao[i], namtao[i]);
		printf("\nNgay het han: %d/%d/%d", ngaytao[i], thangtao[i], namhet[i]);
		//XuatThongTinDocGia(i, n, madg, hoten, cmnd, ngaysinh, gioitinh, email, diachi, ngaytao, thangtao, namtao, namhet, sachmuon, ngaytradukien, thangtradukien, namtradukien, SoDauSach, masach, tensach, tacgia, nxb, namxuatban, theloai, gia, soquyen);
		break;
	}
	if (kt == 0)
		printf("\nKhong tim thay!!!");
	printf("\n---------------------------------------------------------");
	printf("\n  1.Tiep tuc tim");
	printf("\n  2.Xem danh sach doc gia");
	printf("\n  3.Tro ve Menu quan li doc gia");
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
			  XuatDanhSachDocGia(n, madg, hoten, cmnd, ngaysinh, gioitinh, email, diachi, ngaytao, thangtao, namtao, namhet, sachmuon, ngaytradukien, thangtradukien, namtradukien, SoDauSach, masach, tensach, tacgia, nxb, namxuatban, theloai, gia, soquyen);
			  break;
	}
	case 3:
	{
			  system("cls");
			  HienMenuQuanLiDocGia(n, madg, hoten, cmnd, ngaysinh, gioitinh, email, diachi, ngaytao, thangtao, namtao, namhet, sachmuon, ngaytradukien, thangtradukien, namtradukien, SoDauSach, masach, tensach, tacgia, nxb, namxuatban, theloai, gia, soquyen);
			  break;
	}
	default:
		exit(0);
	}
}

//Chinh sua thog tin cua mot doc gia
void ChinhSuaThongTinDocGia(int &n, char madg[][10], char hoten[][25], char cmnd[][14], char ngaysinh[][10], char gioitinh[][10], char email[][200],
	 char diachi[][200], int ngaytao[], int thangtao[], int namtao[], int namhet[], char sachmuon[][10], int ngaytradukien[], int thangtradukien[], int namtradukien[],
	int&SoDauSach, char masach[][10], char tensach[][255], char tacgia[][25], char nxb[][25], int namxuatban[], char theloai[][25], int gia[], int soquyen[])//them toi dau la tang so luong doc gia toi do
{
	printf("\n---------------------------------------------------------");
	printf("\n              CHINH SUA THONG TIN DOC GIA");
	printf("\n---------------------------------------------------------");
QuayLai:

	char tmp[255];
	int vt = 0;
	int kt = 0;
	printf("\nNhap so Ma doc gia can chinh sua(nhap -1 de huy bo): ");
QuayLai2:
	fflush(stdin);
	gets_s(tmp);
	if (tmp[0] == '-')
	{
		goto NhayRa;
	}
	for (int i = 1; i <= n; i++)
	if (strcmp(tmp,madg[i])==0)
	{
		kt = 1;
		vt = i;
		printf("\nMa doc gia: %s", madg[i]);
		printf("\nHo ten    : %s", hoten[i]);
		printf("\nCMND      : %s", cmnd[i]);
		printf("\nNgay Sinh : %s", ngaysinh[i]);
		printf("\nGioi Tinh : %s", gioitinh[i]);
		printf("\nEmail     : %s", email[i]);
		printf("\nDia Chi   : %s", diachi[i]);
		printf("\nNgay tao the: %d/%d/%d", ngaytao[i], thangtao[i], namtao[i]);
		printf("\nNgay het han: %d/%d/%d", ngaytao[i], thangtao[i], namhet[i]);
		break;
	}
	if (kt == 0)
	{
		printf("\nMa so doc gia khong ton tai. Moi nhap lai:");
		goto QuayLai2;
	}
	printf("\n-------------------------");
	printf("\nChon muc can chinh sua:");
	printf("\n  1.Nhap lai toan bo thong tin");
	printf("\n  2.Ho ten");
	printf("\n  3.CMND");
	printf("\n  4.Ngay sinh");
	printf("\n  5.Gioi tinh");
	printf("\n  6.Email");
	printf("\n  7.Dia chi");
	printf("\n  8.Ngay tao the");
	printf("\n  0.Huy bo");

	int chon;
	do
	{
		fflush(stdin);
		printf("\n\nChon: ");
		scanf_s("%d", &chon);
	} while (chon > 8 || chon < 0);

	switch (chon)
	{
		case 1:
		{
			  NhapLai1:
				  fflush(stdin);
				  gets_s(tmp);
				  fflush(stdin);
				  if (KiemTraMaTrung(tmp, madg, n) == 1 || strlen(tmp)<1||strlen(tmp)>10)
				  {

					  if (strlen(tmp) > 10)
						  printf("\nMa doc gia qua dai. Moi nhap lai:");
					  else if (strlen(tmp) < 1)
						  printf("\nMa doc gia khong duoc de trong. Moi nhap lai:");
					  else
						  printf("\nMa doc gia khong hop le. Moi nhap lai: ");
					  goto NhapLai1;
				  }

				  fflush(stdin);
				  strcpy_s(madg[vt], tmp);
				  do
				  {
					  printf("\nHo ten:");	fflush(stdin);
					  gets_s(hoten[vt]);
					  if (strlen(hoten[vt]) < 1)
						  printf("\nHo ten doc gia khong duoc de trong. Moi nhap lai: ");
				  } while (strlen(hoten[vt]) < 1);

				  printf("\nCMND:");
			  NhapLai2:
				  gets_s(tmp);
				  fflush(stdin);
				  if (KiemTraCMNDTrung(tmp, cmnd, n) == 1 || strlen(tmp)<1)
				  {
					  if (strlen(tmp) < 1)
						  printf("\nMa doc gia khong duoc de trong. Moi nhap lai:");
					  else
						  printf("\nCMND bi trung. Moi nhap lai: ");
					  goto NhapLai2;
				  }

				  fflush(stdin);
				  strcpy_s(cmnd[vt], tmp);
				  printf("\nNgay Sinh:");	fflush(stdin);
				  gets_s(ngaysinh[vt]);

				  printf("\nGioi Tinh (Nam/Nu):\n 1.Nam\n 2.Nu\nChon: ");//1 la nam, 2 la nu
				  int chon2;

				  do
				  {
					  scanf_s("%d", &chon2);
				  } while (chon2<0 || chon2>2);

				  if (chon2 == 1)
					  strcpy_s(gioitinh[vt], "NAM");
				  else
					  strcpy_s(gioitinh[vt], "NU");

				  fflush(stdin);
				  printf("\nEmail:");
				  gets_s(email[vt]);



				  fflush(stdin);
				  printf("\nDia Chi:");
				  gets_s(diachi[vt]);


				  fflush(stdin);
				  printf("\nNgay tao the:");
				  NhapNgayThangNam(ngaytao[vt], thangtao[vt], namtao[vt]);
				  namhet[n] = namtao[n] + 4;
				 
				  break;
		}
		case 2:
		{
				  do
				  {
					  fflush(stdin);
					  printf("\nHo ten:");
					  gets_s(hoten[vt]);
					  if (strlen(hoten[vt]) < 1)
						  printf("\nHo ten doc gia khong duoc de trong. Moi nhap lai: ");
				  } while (strlen(hoten[vt]) < 1);
				  break;
		}
		case 3:
		{
				  fflush(stdin);
				  printf("\nCMND:");
			  NhapLai3:
				  gets_s(tmp);
				  fflush(stdin);
				  if (KiemTraCMNDTrung(tmp, cmnd, n) == 1 || strlen(tmp)<1)
				  {
					  if (strlen(tmp) < 1)
						  printf("\nMa doc gia khong duoc de trong. Moi nhap lai:");
					  else
						  printf("\nCMND bi trung. Moi nhap lai: ");
					  goto NhapLai3;
				  }
				  break;
		} 
		case 4:
		{
				  fflush(stdin);
				  printf("\nNgay Sinh:");
				  gets_s(ngaysinh[vt]);
				  break;
		}
		case 5:
		{
				  printf("\nGioi Tinh (Nam/Nu):\n 1.Nam\n 2.Nu\nChon: ");//1 la nam, 2 la nu
				  int chon2;

				  do
				  {
					  fflush(stdin);
					  scanf_s("%d", &chon2);
				  } while (chon2<0 || chon2>2);

				  if (chon2 == 1)
					  strcpy_s(gioitinh[vt], "NAM");
				  else
					  strcpy_s(gioitinh[vt], "NU");
				  break;
		}
		case 6:
		{	fflush(stdin);
				  printf("\nEmail:");
				  gets_s(email[vt]);
				  break;
		}
		case 7:
		{
				  fflush(stdin);
				  printf("\nDia Chi:");
				  gets_s(diachi[vt]);
				  break;
		}
		case 8:
		{		
				  fflush(stdin);
					printf("\nNgay tao the:");
					NhapNgayThangNam(ngaytao[vt], thangtao[vt], namtao[vt]);
					namhet[n] = namtao[n] + 4;
				  break;
		}
		case 0:
		{
				  goto NhayRa;
				  break;
		}
	}
	//Thong tin sau chinh sua
	printf("\n------------------------------");
	printf("\nTHONG TIN SAU KHI CHINH SUA:");
	printf("\n\nMa doc gia: %5s", madg[vt]);
	printf("\nHo ten    : %s", hoten[vt]);
	printf("\nCMND      : %s", cmnd[vt]);
	printf("\nNgay Sinh : %s", ngaysinh[vt]);
	printf("\nGioi Tinh : %s", gioitinh[vt]);
	printf("\nEmail     : %s", email[vt]);
	printf("\nDia Chi   : %s", diachi[vt]);
	printf("\nNgay tao the: %d/%d/%d", ngaytao[vt], thangtao[vt], namtao[vt]);
	printf("\nNgay het han: %d/%d/%d", ngaytao[vt], thangtao[vt], namhet[vt]);
NhayRa:

	printf("\n---------------------------------------------------------");
	printf("\n  1.Tiep tuc chinh sua");
	printf("\n  2.Tro ve Menu quan li doc gia");
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
				  HienMenuQuanLiDocGia(n, madg, hoten, cmnd, ngaysinh, gioitinh, email, diachi, ngaytao, thangtao, namtao, namhet, sachmuon, ngaytradukien, thangtradukien, namtradukien, SoDauSach, masach, tensach, tacgia, nxb, namxuatban, theloai, gia, soquyen);
				  break;
		}
		default:
			exit(0);
	}
}
