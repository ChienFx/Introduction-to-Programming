#include "DocGia.h"
#include "KiemTraXuLiChuoi.h"
#include "NgayThang.h"

void ThemDocGia(DocGia p[MAX], int &n, Sach DSDauSach[MAX], int &SoDauSach)//n la so doc gia
{
	printf("\n---------------------------------------------------------");
	printf("\n               THEM DOC GIA MOI");
	printf("\n---------------------------------------------------------");
	n++;
	do
	{
		NhapChuoi(p[n].madg, "\n- Nhap ma doc gia:");
		if (KiemTraMaDocGiaTrung(p[n].madg, p, n - 1) != 0)
			printf("\nMa doc gia bi trung. Moi nhap lai.\n");
	} while (KiemTraMaDocGiaTrung(p[n].madg, p, n - 1)!=0);//trung

	NhapChuoi(p[n].hoten, "- Nhap ho ten:");
	strupr(p[n].hoten);
	do
	{
		NhapChuoi(p[n].cmnd, "- Nhap CMND:");
		if (KiemTraCMNDTrung(p[n].cmnd, p, n - 1) != 0)
			printf("\nCMND bi trung. Moi nhap lai.\n");
	} while (KiemTraCMNDTrung(p[n].cmnd, p, n - 1) != 0);//trung
	
	NhapNgay(p[n].ngaysinh, "-Nhap ngay sinh:");
	do
	{
		NhapChuoi(p[n].gioitinh, "- Nhap gioi tinh(trong CMND):");
		strupr(p[n].gioitinh);
		if (strcmp(p[n].gioitinh, "NAM") != 0 && strcmp(p[n].gioitinh, "NU") != 0)
			printf("\nGioi tinh khong hop le. Moi nhap lai.\n");
	} while (strcmp(p[n].gioitinh,"NAM")!=0 && strcmp(p[n].gioitinh,"NU")!=0);

	NhapChuoi(p[n].email, "- Nhap email:");
	NhapChuoi(p[n].diachi, "- Nhap dia chi:");
	do
	{
		NhapNgay(p[n].ngaytaothe, "-Nhap ngay tao the:");
		if (SoSanhHaiNgay(p[n].ngaysinh, p[n].ngaytaothe) >= 0)
			printf("\nNhap ngay tao the sau ngay sinh!!!\n");
	} while (SoSanhHaiNgay(p[n].ngaysinh,p[n].ngaytaothe)>=0);
	p[n].ngayhethan = p[n].ngaytaothe;
	p[n].ngayhethan.year += 4;
	setDefaultDate(p[n].ngaymuonsach);
	setDefaultDate(p[n].ngaytrasachdukien);
	strcpy_s(p[n].sachdamuon, "-");
	printf("\nCo muon tiep tuc them doc gia khong?\n 1.Co\n 2.Khong\nChon: ");
	int chon;
	scanf("%d", &chon);
	if (chon == 1)
	{
		system("cls");
		ThemDocGia(p, n, DSDauSach, SoDauSach);
	}	
	else
	{
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
				  MenuQuanLiDocGia(p, n, DSDauSach, SoDauSach);
				  break;
		}
		default:
			GhiFileVaThoat(p, n, DSDauSach, SoDauSach);
		}
	}
}
void XoaDocGia(DocGia p[MAX], int &n, Sach DSDauSach[MAX], int &SoDauSach)
{
	char tmp[255];
	int vt = 0;
QuayLai:
	printf("\n---------------------------------------------------------");
	printf("\n                  XOA DOC GIA");
	printf("\n---------------------------------------------------------");

	NhapChuoi(tmp, "\nNhap Ma doc gia can xoa:");
	vt = KiemTraMaDocGiaTrung(tmp, p, n);
	if (vt == 0)
		printf("\nMa doc gia khong ton tai!!!");
	else
	{
		XuatDocGia(p[vt]);
		int TiepTuc;
		printf("\nBan co thuc sua muon xoa khong?\n  1.Co\n  2.Khong\n\nChon: ");

		do
		{ 
			scanf_s("%d", &TiepTuc); 
		} while (TiepTuc<1 || TiepTuc>2);

		if (TiepTuc == 1)//thuc hien xoa
		{
			for (int i = vt; i <= n - 1; i++)
			{
				//madg[i] = madg[i+1];
				p[i] = p[i + 1];
			}
			n = n - 1;//giam 1 doc gia
			printf("\nXOA THANH CONG !!!");
		}
	}
	printf("\n---------------------------------------------------------");
	printf("\n  1.Tiep tuc xoa");
	printf("\n  2.Xem danh sach doc gia");
	printf("\n  3.tro ve menu quan li doc gia");
	printf("\n  0.thoat chuong trinh");
	int chon;
	do
	{
		printf("\n\nchon: ");
		scanf_s("%d", &chon);
	} while (chon > 3 || chon < 0);

	switch (chon)
	{
	case 1:
	{
			  system("cls");
			  XoaDocGia(p, n, DSDauSach, SoDauSach);
			  break;
	}
	case 2:
	{
			  system("cls");
			  XuatDanhSachDocGiaRaManHinh(p, n, DSDauSach, SoDauSach);
			  break;
	}
	case 3:
	{
			  system("cls");
			  MenuQuanLiDocGia(p, n,DSDauSach,SoDauSach);
			  break;
	}
	default:
		GhiFileVaThoat(p, n, DSDauSach, SoDauSach);
	}
}
void TimKiemDocGia(DocGia p[MAX], int &n, Sach DSDauSach[MAX], int &SoDauSach)
{
	char tmp[255];
	int vt = 0;
	int chon;
	printf("\n---------------------------------------------------------");
	printf("\n               TIM KIEM DOC GIA");
	printf("\n---------------------------------------------------------");
	printf("\n 1. Tim theo ten\n 2. Tim theo CMND\n Chon:");
	do{ scanf("%d", &chon); } while (chon<1 || chon>2);
	switch (chon)
	{
	case 1:
		NhapChuoi(tmp, "\nNhap ten doc gia can tim:");
		strupr(tmp);
		for (int i = 1; i <= n;i++)
		if (strcmp(tmp, p[i].hoten) == 0)
		{
			vt = i;
			XuatDocGia(p[vt]);
		}
		if (vt == 0)
			printf("\nKHONG TIM THAY!!");
		break;
	case 2:
		NhapChuoi(tmp, "\nNhap CMND can tim:");
		vt = KiemTraCMNDTrung(tmp, p, n);
		if (vt != 0)
			XuatDocGia(p[vt]);
		else
			printf("\nKHONG TIM THAY!!");
		break;
	}
	printf("\n---------------------------------------------------------");
	printf("\n  1.Tiep tuc tim");
	printf("\n  2.Xem danh sach doc gia");
	printf("\n  3.Tro ve Menu quan li doc gia");
	printf("\n  0.Thoat chuong trinh");
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
			  TimKiemDocGia(p, n, DSDauSach, SoDauSach);
			  break;
	}
	case 2:
	{
			  system("cls");
			  XuatDanhSachDocGiaRaManHinh(p, n, DSDauSach, SoDauSach);
			  break;
	}
	case 3:
	{
			  system("cls");
			  MenuQuanLiDocGia(p, n, DSDauSach, SoDauSach);
			  break;
	}
	default:
		GhiFileVaThoat(p, n, DSDauSach, SoDauSach);
	}
}
void ChinhSuaDocGia(DocGia p[MAX], int &n, Sach DSDauSach[MAX], int &SoDauSach)
{
	char tmp[255];
	int vt = 0;
	int chon;
	printf("\n---------------------------------------------------------");
	printf("\n             CHINH SUA THONG TIN DOC GIA");
	printf("\n---------------------------------------------------------");
	printf("\n 1. Tim MA SO DOC GIA\n 2. Tim theo CMND\n Chon:");
	do{ scanf("%d", &chon); } while (chon<1 || chon>2);
	switch (chon)
	{
	case 1:
		NhapChuoi(tmp, "\nNhap Ma doc gia can tim:");
		vt = KiemTraMaDocGiaTrung(tmp, p, n);
		if (vt != 0)
			XuatDocGia(p[vt]);
		else
			printf("\nKHONG TIM THAY!!");
		break;
	case 2:
		NhapChuoi(tmp, "\nNhap CMND can tim:");
		vt = KiemTraCMNDTrung(tmp, p, n);
		if (vt != 0)
			XuatDocGia(p[vt]);
		else
			printf("\nKHONG TIM THAY!!");
		break;
	}
	if (vt != 0)
	{
		printf("\n 1. Xac nhan chinh sua\n 2. Huy bo\n Chon:");
		do{ scanf("%d", &chon); } while (chon<1 || chon>2);
		if (chon == 1)
		{
			do
			{
				strcpy(p[vt].madg, "");
				NhapChuoi(tmp, "- Nhap ma doc gia:");
				if (KiemTraMaDocGiaTrung(tmp, p, n - 1) != 0)
					printf("\nMa doc gia bi trung. Moi nhap lai.\n");
			} while (KiemTraMaDocGiaTrung(tmp, p, n - 1) != 0);//trung
			strcpy(p[vt].madg, tmp);
			NhapChuoi(p[vt].hoten, "- Nhap ho ten:");
			strupr(p[vt].hoten);
			do
			{
				strcpy(p[vt].cmnd, "");
				NhapChuoi(tmp, "- Nhap CMND:");
				if (KiemTraCMNDTrung(tmp, p, n - 1) != 0)
					printf("\nCMND bi trung. Moi nhap lai.\n");
			} while (KiemTraCMNDTrung(tmp, p, n - 1) != 0);//trung
			strcpy(p[vt].cmnd, tmp);
			NhapNgay(p[vt].ngaysinh, "-Nhap ngay sinh:");
			do
			{
				NhapChuoi(p[vt].gioitinh, "- Nhap gioi tinh(trong CMND):");
				strupr(p[vt].gioitinh);
				if (strcmp(p[vt].gioitinh, "NAM") != 0 && strcmp(p[vt].gioitinh, "NU") != 0)
					printf("\nGioi tinh khong hop le. Moi nhap lai.\n");
			} while (strcmp(p[vt].gioitinh, "NAM") != 0 && strcmp(p[vt].gioitinh, "NU") != 0);

			NhapChuoi(p[vt].email, "- Nhap email:");
			NhapChuoi(p[vt].diachi, "- Nhap dia chi:");
			NhapNgay(p[vt].ngaytaothe, "-Nhap ngay tao the:");
			p[vt].ngayhethan = p[vt].ngaytaothe;
			p[vt].ngayhethan.year += 4;
			printf("\n---------------------------------------");
			XuatDocGia(p[vt]);
		}
	}
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
			  ChinhSuaDocGia(p, n, DSDauSach, SoDauSach);
			  break;
	}
	case 2:
	{
			  system("cls");
			  MenuQuanLiDocGia(p, n, DSDauSach, SoDauSach);
			  break;
	}
	default:
		GhiFileVaThoat(p, n, DSDauSach, SoDauSach);
	}
}
void XuatDocGia(DocGia p)
{
	printf("\n------------------------------");
	printf("\nTHONG TIN DOC GIA:");
	XuatChuoi(p.madg, "\n - Ma doc gia:");
	XuatChuoi(p.hoten,"\n - Ho ten    :");
	XuatChuoi(p.cmnd,    "\n - CMND      :");
	XuatNgay(p.ngaysinh, "\n - Ngay sinh :");
	XuatChuoi(p.gioitinh,"\n - Gioi tinh :");
	XuatChuoi(p.email,   "\n - Email     :");
	XuatChuoi(p.diachi,   "\n - Dia Chi   :");
	XuatNgay(p.ngaytaothe,"\n - Ngay tao the :");
	XuatNgay(p.ngayhethan,"\n - Ngay het han :");
	printf("\n------------------------------\n");
}
void XuatDanhSachDocGiaRaManHinh(DocGia p[MAX], int &n, Sach DSDauSach[MAX], int &SoDauSach)//ghi tu dau
{
	printf("\n-----------------------------------------------------------------------------------------------------------------------------------------------------------------------");
	printf("\n                                              DANH SACH DOC GIA THU VIEN TRUONG DH KHOA HOC TU NHIEN TP.HCM");
	printf("\n-----------------------------------------------------------------------------------------------------------------------------------------------------------------------");
	printf("\nMa Doc Gia      Ten doc gia                 CMND            Ngay sinh    Gioi Tinh      Email                          Dia chi             Ngay tao the    Ngay het han");
	printf("\n-----------------------------------------------------------------------------------------------------------------------------------------------------------------------");
	for (int i = 1; i <= n; i++)
	{
		printf("\n%-10s      %-20s        %-15s ", p[i].madg, p[i].hoten, p[i].cmnd);
		printf("%02d/%02d/%04d     ", p[i].ngaysinh.day, p[i].ngaysinh.month, p[i].ngaysinh.year);
		printf("%-5s        %-30s %-15s     ", p[i].gioitinh, p[i].email, p[i].diachi);
		printf("%02d/%02d/%04d      ", p[i].ngaytaothe.day, p[i].ngaytaothe.month, p[i].ngaytaothe.year);
		printf("%02d/%02d/%04d    ", p[i].ngayhethan.day, p[i].ngayhethan.month, p[i].ngayhethan.year);
	}
	printf("\n-----------------------------------------------------------------------------------------------------------------------------------------------------------------------");
	printf("\nTONG SO DOC GIA:   %d\n", n);
	printf("\n------------------------------------");
	printf("\n  1.Tro ve Menu quan li doc gia");
	printf("\n  0.Thoat chuong trinh");
	int chon;
	do
	{
		printf("\nChon: ");
		scanf_s("%d", &chon);
	} while (chon > 1 || chon < 0);

	switch (chon)
	{
	case 1:
	{
			  system("cls");
			  MenuQuanLiDocGia(p, n, DSDauSach, SoDauSach);
			  break;
	}
	default:
		GhiFileVaThoat(p, n, DSDauSach, SoDauSach);
	}
}
//Xu li tren file
void LoadDuLieuDocGia(DocGia p[MAX], int &n)
{
	FILE*f = fopen("ThongTinDocGia.txt", "rt");
	char tmp[255];
	if (f == NULL)
		printf("\nMo file that bai!!!");
	else
	{
		//load số đôc giả
		fscanf(f, "%[^\t]", tmp);
		fscanf(f, "%d", &n);
		for (int i = 1; i <= n; i++)
		{
			strcpy_s(p[i].sachdamuon, "-");
			setDefaultDate(p[i].ngaymuonsach);
			setDefaultDate(p[i].ngaytrasachdukien);
		}
		//printf("\t%d", n);
		//bỏ qua phần header
		char c;
		while ((c = fgetc(f)) != '+');
		//load danh sách
		int i = 0;
		while (!feof(f))
		{
			i++;
			c = fgetc(f);//doc dau \n
			fscanf(f, "%[^\t]", p[i].madg); 
			ChuanHoaChuoi(p[i].madg);

			//while ((c = fgetc(f)) == ' ' || (c = fgetc(f)) != '\t')
				//c = fgetc(f);
			fscanf(f, "%[ ]", tmp);
			fscanf(f, "%[\t]", tmp);
			fscanf(f, "%[^\t]", p[i].hoten);
			ChuanHoaChuoi(p[i].hoten);

			//while ((c = fgetc(f)) != ' ' || (c = fgetc(f)) != '\t');
			fscanf(f, "%[ ]", tmp);
			fscanf(f, "%[\t]", tmp);
			fscanf(f, "%[^\t]", p[i].cmnd); 
			ChuanHoaChuoi(p[i].cmnd);

			//while ((c = fgetc(f)) == ' ' || (c = fgetc(f)) == '\t');
			fscanf(f, "%[ ]", tmp);
			fscanf(f, "%[\t]", tmp);

			fscanf(f, "%d", &p[i].ngaysinh.day);
			c = fgetc(f);
			fscanf(f, "%d", &p[i].ngaysinh.month);
			c = fgetc(f);
			fscanf(f, "%d", &p[i].ngaysinh.year);

			//while ((c = fgetc(f)) == ' ' || (c = fgetc(f)) == '\t');
			fscanf(f, "%[ ]", tmp);
			fscanf(f, "%[\t]", tmp);
			fscanf(f, "%[^\t]", p[i].gioitinh); 
			ChuanHoaChuoi(p[i].gioitinh);

			//while ((c = fgetc(f)) == ' ' || (c = fgetc(f)) == '\t');
			fscanf(f, "%[ ]", tmp);
			fscanf(f, "%[\t]", tmp);
			fscanf(f, "%[^\t]", p[i].email); 
			ChuanHoaChuoi(p[i].email);

			//while ((c = fgetc(f)) == ' ' || (c = fgetc(f)) == '\t');
			fscanf(f, "%[ ]", tmp);
			fscanf(f, "%[\t]", tmp);
			fscanf(f, "%[^\t]", p[i].diachi); 
			ChuanHoaChuoi(p[i].diachi);
			//while ((c = fgetc(f)) == ' ' || (c = fgetc(f)) == '\t');
			fscanf(f, "%[ ]", tmp);
			fscanf(f, "%[\t]", tmp);
			fscanf(f, "%d", &p[i].ngaytaothe.day);
			c = fgetc(f);
			fscanf(f, "%d", &p[i].ngaytaothe.month);
			c = fgetc(f);
			fscanf(f, "%d", &p[i].ngaytaothe.year);
			//while ((c = fgetc(f)) == ' ' || (c = fgetc(f)) == '\t');
			fscanf(f, "%[ ]", tmp);
			fscanf(f, "%[\t]", tmp);
			fscanf(f, "%d", &p[i].ngayhethan.day);
			c = fgetc(f);
			fscanf(f, "%d", &p[i].ngayhethan.month);
			c = fgetc(f);
			fscanf(f, "%d", &p[i].ngayhethan.year);
		}
		fclose(f);
	}
	//load du lieu ve sach muon tu file khac
	f = fopen("MuonSach.txt", "rt");
	if (f == NULL)
		printf("\nMo file that bai!!!");
	else
	{
		char c;
		while ((c = fgetc(f)) != '+');
		int i = 0;
		while (!feof(f))
		{
			i++;
			c = fgetc(f);//doc dau \n
			fscanf(f, "%[^\t]", tmp);
			fscanf(f, "%[ ]", tmp);
			fscanf(f, "%[\t]", tmp);
			fscanf(f, "%s",p[i].sachdamuon);
			fscanf(f, "%[ ]", tmp);
			fscanf(f, "%[\t]", tmp);
			fscanf(f, "%d", &p[i].ngaymuonsach.day);
			c = fgetc(f);
			fscanf(f, "%d", &p[i].ngaymuonsach.month);
			c = fgetc(f);
			fscanf(f, "%d", &p[i].ngaymuonsach.year); 

			fscanf(f, "%[ ]", tmp);
			fscanf(f, "%[\t]", tmp);
			fscanf(f, "%d", &p[i].ngaytrasachdukien.day);
			c = fgetc(f);
			fscanf(f, "%d", &p[i].ngaytrasachdukien.month);
			c = fgetc(f);
			fscanf(f, "%d", &p[i].ngaytrasachdukien.year);

		}
		fclose(f);
	}
}
void GhiThongTinDocGiaLenFile(DocGia p[MAX],int &n)//ghi tu dau
{
	FILE*f = fopen("ThongTinDocGia.txt", "wt");
	if (f == NULL)
		printf("\nMo file that bai!!!");
	else
	{
		fprintf(f, "Tong so doc gia:\t%d", n);
		fprintf(f, "\n--------------------------------------------------------------------------------------------------------------------------------------------------------------------------------\nMa Doc Gia      Ten doc gia                 CMND                Ngay sinh    Gioi Tinh      Email                               Dia chi             Ngay tao the    Ngay het han\n-------------------------------------------------------------------------------------------------------------------------------------------------------------------------------+");

		for (int i = 1; i <= n; i++)
		{
			fprintf(f, "\n%-10s\t\t%-20s\t\t%-15s\t\t", p[i].madg, p[i].hoten, p[i].cmnd);
			fprintf(f, "%02d/%02d/%04d\t\t", p[i].ngaysinh.day, p[i].ngaysinh.month, p[i].ngaysinh.year);
			fprintf(f, "%-5s\t\t%-30s\t\t%-15s\t\t", p[i].gioitinh, p[i].email, p[i].diachi);
			fprintf(f, "%02d/%02d/%04d\t\t", p[i].ngaytaothe.day, p[i].ngaytaothe.month, p[i].ngaytaothe.year);
			fprintf(f, "%02d/%02d/%04d", p[i].ngayhethan.day, p[i].ngayhethan.month, p[i].ngayhethan.year);
		}
		fclose(f);
	}
	//ghi phan sach da muon vao file khac
	f = fopen("MuonSach.txt", "wt");
	if (f == NULL)
		printf("\nMo file that bai!!!");
	else
	{
		fprintf(f, "MSDG       ISBN Sach da muon          Ngay muon sach    Ngay tra du kien\n------------------------------------------------------------------------+");
		for (int i = 1; i <= n; i++)
		{
			fprintf(f, "\n%-10s\t\t", p[i].madg);
			fprintf(f, "%-20s\t", p[i].sachdamuon);
			fprintf(f, "%02d/%02d/%04d\t\t", p[i].ngaymuonsach.day, p[i].ngaymuonsach.month, p[i].ngaymuonsach.year);
			fprintf(f, "%02d/%02d/%04d", p[i].ngaytrasachdukien.day, p[i].ngaytrasachdukien.month, p[i].ngaytrasachdukien.year);
		}
		fclose(f);
	}
}