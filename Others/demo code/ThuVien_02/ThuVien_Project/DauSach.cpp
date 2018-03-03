#include "DauSach.h"
#include "KiemTraXuLiChuoi.h"
#include "NgayThang.h"

void ThemDauSach(DocGia DSDocGia[MAX], int &SoDocGia, Sach p[MAX], int &n)//n la so doc gia
{
	printf("\n---------------------------------------------------------");
	printf("\n               THEM DAU SACH MOI");
	printf("\n---------------------------------------------------------");
	n++;
	do
	{
		NhapChuoi(p[n].masach, "\n- Nhap ma ISBN:");
		strupr(p[n].masach);
		if (KiemTraISBNTrung(p[n].masach, p, n - 1) != 0)
			printf("\nMa ISBN bi trung. Moi nhap lai.\n");
	} while (KiemTraISBNTrung(p[n].masach, p, n - 1) != 0);//trung
	strupr(p[n].masach);
	NhapChuoi(p[n].tensach, "- Nhap ten sach:");
	strupr(p[n].tensach);

	NhapChuoi(p[n].tacgia, "- Nhap ten tac gia:");
	strupr(p[n].tacgia);

	NhapChuoi(p[n].nxb, "- Nhap ten Nha xuat ban:");
	strupr(p[n].nxb);

	do
	{
		printf("- Nhap nam xuat ban:");
		scanf("%d", &p[n].namxuatban);
	} while (p[n].namxuatban < 1);

	NhapChuoi(p[n].theloai, "- Nhap the loai:");
	strupr(p[n].theloai);

	do
	{
		printf("- Nhap gia:");
		scanf("%d", &p[n].gia);
		printf("- Nhap so luong sach:");
		scanf("%d", &p[n].soquyen);
	} while (p[n].gia < 1||p[n].soquyen<1);
	p[n].damuon = 0;
	printf("\nCo muon tiep tuc them dau sach khong?\n 1.Co\n 2.Khong\nChon: ");
	int chon;
	scanf("%d", &chon);
	if (chon == 1)
	{
		system("cls");
		ThemDauSach(DSDocGia, SoDocGia, p, n);
	}

	else
	{
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
				  MenuQuanLiSach(DSDocGia, SoDocGia, p, n);
				  break;
		}
		default:
			GhiFileVaThoat(DSDocGia, SoDocGia, p, n);
		}
	}
}
void XoaDauSach(DocGia DSDocGia[MAX], int &SoDocGia, Sach p[MAX], int &n)
{
	char tmp[255];
	int vt = 0;
QuayLai:
	printf("\n---------------------------------------------------------");
	printf("\n                     XOA SACH");
	printf("\n---------------------------------------------------------");

	NhapChuoi(tmp, "\nNhap Ma ISBN cua sach can xoa:");
	vt = KiemTraISBNTrung(tmp, p, n);
	if (vt == 0)
		printf("\nMa ISBN khong ton tai!!!");
	else
	{
		XuatDauSach(p[vt]);
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
				p[i] = p[i + 1];
			}
			n = n - 1;//giam 1 dau sach
			printf("\nXOA THANH CONG !!!");
		}
	}
	printf("\n---------------------------------------------------------");
	printf("\n  1.Tiep tuc xoa");
	printf("\n  2.Xem danh sach dau sach");
	printf("\n  3.Tro ve menu quan li sach");
	printf("\n  0.Thoat chuong trinh");
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
			  XoaDauSach(DSDocGia,SoDocGia,p,n);
			  break;
	}
	case 2:
	{
			  system("cls");
			  XuatDanhSachDauSachRaManHinh(DSDocGia, SoDocGia, p, n);
			  break;
	}
	case 3:
	{
			  system("cls");
			  MenuQuanLiSach(DSDocGia, SoDocGia, p, n);
			  break;
	}
	default:
		GhiFileVaThoat(DSDocGia, SoDocGia, p, n);
	}
}
void TimKiemDauSach(DocGia DSDocGia[MAX], int &SoDocGia, Sach p[MAX], int &n)
{
	char tmp[255];
	int vt = 0;
	int chon;
	printf("\n---------------------------------------------------------");
	printf("\n               TIM KIEM DAU SACH");
	printf("\n---------------------------------------------------------");
	printf("\n 1. Tim theo ISBN\n 2. Tim theo ten sach\n Chon:");
	do{ scanf("%d", &chon); } while (chon<1 || chon>2);
	switch (chon)
	{
	case 1:
		NhapChuoi(tmp, "\nNhap ISBN sach can tim:");
		strupr(tmp);
		for (int i = 1; i <= n; i++)
		if (strcmp(tmp, p[i].masach) == 0)
		{
			vt = i;
			XuatDauSach(p[vt]);
		}
		if (vt == 0)
			printf("\nKHONG TIM THAY!!");
		break;
	case 2:
		NhapChuoi(tmp, "\nNhap ten sach can tim:");
		strupr(tmp);
		for (int i = 1; i <= n; i++)
		if (strcmp(tmp, p[i].tensach) == 0)
		{
			vt = i;
			XuatDauSach(p[vt]);
		}
		if (vt==0)
			printf("\nKHONG TIM THAY!!");
		break;
	}
	printf("\n---------------------------------------------------------");
	printf("\n  1.Tiep tuc tim");
	printf("\n  2.Xem danh sach dau sach");
	printf("\n  3.Tro ve Menu quan li sach");
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
			  TimKiemDauSach(DSDocGia,SoDocGia,p,n);
			  break;
	}
	case 2:
	{
			  system("cls");
			  XuatDanhSachDauSachRaManHinh(DSDocGia, SoDocGia, p, n);
			  break;
	}
	case 3:
	{
			  system("cls");
			  MenuQuanLiSach(DSDocGia, SoDocGia, p, n);
			  break;
	}
	default:
		GhiFileVaThoat(DSDocGia, SoDocGia, p, n);
	}
}
void ChinhSuaDauSach(DocGia DSDocGia[MAX], int &SoDocGia, Sach p[MAX], int &n)
{
	char tmp[255];
	int vt = 0;
	int chon;
	printf("\n---------------------------------------------------------");
	printf("\n             CHINH SUA THONG TIN SACH");
	printf("\n---------------------------------------------------------");
	
	NhapChuoi(tmp, "\nNhap ISBN sach can tim:");
	strupr(tmp);
	vt = KiemTraISBNTrung(tmp, p, n);
	if (vt != 0)
	{
		XuatDauSach(p[vt]);
		printf("\n 1. Xac nhan chinh sua\n 2. Huy bo\n Chon:");
		do{ scanf("%d", &chon); } while (chon<1 || chon>2);
		if (chon == 1)
		{
			do
			{
				strcpy(p[vt].masach,"");
				NhapChuoi(tmp, "\n- Nhap ma ISBN:");
				strupr(tmp);
				if (KiemTraISBNTrung(tmp, p, n - 1) != 0)
					printf("\nMa ISBN bi trung. Moi nhap lai.\n");
			} while (KiemTraISBNTrung(tmp, p, n - 1) != 0);//trung
			strcpy(p[vt].masach, tmp);
			
			NhapChuoi(p[vt].tensach, "- Nhap ten sach:");
			strupr(p[vt].tensach);

			NhapChuoi(p[vt].tacgia, "- Nhap ten tac gia:");
			strupr(p[vt].tacgia);

			NhapChuoi(p[vt].nxb, "- Nhap ten Nha xuat ban:");
			strupr(p[vt].nxb);

			do
			{
				printf("- Nhap nam xuat ban:");
				scanf("%d", &p[vt].namxuatban);
			} while (p[vt].namxuatban < 1);

			NhapChuoi(p[vt].theloai, "- Nhap the loai:");
			strupr(p[vt].theloai);

			do
			{
				printf("- Nhap gia:");
				scanf("%d", &p[vt].gia);
				printf("- Nhap so luong sach:");
				scanf("%d", &p[vt].soquyen);
			} while (p[vt].gia < 1 || p[vt].soquyen<1);
			printf("\n---------------------------------------");
			XuatDauSach(p[vt]);
		}
		else
			printf("\nKHONG TIM THAY!!");
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
			  ChinhSuaDauSach(DSDocGia,SoDocGia,p,n);
			  break;
	}
	case 2:
	{
			  system("cls");
			  MenuQuanLiSach(DSDocGia, SoDocGia, p, n);
			  break;
	}
	default:
		GhiFileVaThoat(DSDocGia, SoDocGia, p, n);
	}
}
void XuatDauSach(Sach p)
{
	printf("\n------------------------------");
	printf("\nTHONG TIN DOC GIA:");
	XuatChuoi(p.masach, "\n - Ma ISBN:");
	XuatChuoi(p.tensach, "\n - Ten sach    :");
	XuatChuoi(p.tacgia, "\n - Tac gia      :");
	XuatChuoi(p.nxb, "\n - NXB:");
	printf("\n - Nam xuat ban: %04d", p.namxuatban);
	XuatChuoi(p.theloai, "\n - The loai     :");
	printf("\n - Gia     : %d", p.gia);
	printf("\n - So luong: %d", p.soquyen);
	printf("\n------------------------------\n");
}
void XuatDanhSachDauSachRaManHinh(DocGia DSDocGia[MAX], int &SoDocGia, Sach p[MAX], int &n)//ghi tu dau
{
	printf("\n-----------------------------------------------------------------------------------------------------------------------------------------------------------");
	printf("\n                                           DANH SACH CAC DAU SACH CUA THU VIEN TRUONG DH KHOA HOC TU NHIEN TP.HCM");
	printf("\n-----------------------------------------------------------------------------------------------------------------------------------------------------------");
	printf("\nMa ISBN         Ten sach                Ten tac gia            Nha xuat ban             Nam xuat ban      The loai            Gia                 So luong");
	printf("\n-----------------------------------------------------------------------------------------------------------------------------------------------------------");
	for (int i = 1; i <= n; i++)
	{
		printf("\n%-16s%-24s%-23s", p[i].masach, p[i].tensach, p[i].tacgia);
		printf("%-25s    %04d          %-20s%-16d   %4d", p[i].nxb, p[i].namxuatban, p[i].theloai, p[i].gia, p[i].soquyen);
	}
	printf("\n-----------------------------------------------------------------------------------------------------------------------------------------------------------");
	printf("\nTONG SO DAU SACH:   %d\n", n);
	printf("\n------------------------------------");
	printf("\n  1.Tro ve Menu quan li sach");
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
			  MenuQuanLiSach(DSDocGia, SoDocGia, p, n);
			  break;
	}
	default:
		GhiFileVaThoat(DSDocGia, SoDocGia, p, n);
	}
}
//Xu li tren file
void LoadDuLieuSach(Sach p[MAX], int &n)
{
	FILE*f = fopen("ThongTinDauSach.txt", "rt");
	char tmp[255];
	if (f == NULL)
		printf("\nMo file that bai!!!");
	else
	{
		//load so dau sach
		fscanf(f, "%[^\t]", tmp);
		//printf("%s", tmp);
		fscanf(f, "%d", &n);
		for (int i = 1; i <= n; i++)
			p[i].damuon = 0;
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
			fscanf(f, "%[^\t]", p[i].masach);
			ChuanHoaChuoi(p[i].masach);

			fscanf(f, "%[ ]", tmp);
			fscanf(f, "%[\t]", tmp);
			fscanf(f, "%[^\t]", p[i].tensach);
			ChuanHoaChuoi(p[i].tensach);

			fscanf(f, "%[ ]", tmp);
			fscanf(f, "%[\t]", tmp);
			fscanf(f, "%[^\t]", p[i].tacgia);
			ChuanHoaChuoi(p[i].tacgia);
			//
			fscanf(f, "%[ ]", tmp);
			fscanf(f, "%[\t]", tmp);
			fscanf(f, "%[^\t]", p[i].nxb);
			ChuanHoaChuoi(p[i].nxb);

			fscanf(f, "%[ ]", tmp);
			fscanf(f, "%[\t]", tmp);
			fscanf(f, "%d", &p[i].namxuatban);
			
			fscanf(f, "%[ ]", tmp);
			fscanf(f, "%[\t]", tmp);
			fscanf(f, "%[^\t]", p[i].theloai);
			ChuanHoaChuoi(p[i].theloai);

			fscanf(f, "%[ ]", tmp);
			fscanf(f, "%[\t]", tmp);
			fscanf(f, "%d", &p[i].gia);

			fscanf(f, "%[ ]", tmp);
			fscanf(f, "%[\t]", tmp);
			fscanf(f, "%d", &p[i].soquyen);

			fscanf(f, "%[ ]", tmp);
			fscanf(f, "%[\t]", tmp);
			fscanf(f, "%d", &p[i].damuon);
		}
		fclose(f);
	}
}
void GhiThongTinSachLenFile(Sach p[MAX], int &n)//ghi tu dau
{
	FILE*f = fopen("ThongTinDauSach.txt", "wt");
	if (f == NULL)
		printf("\nMo file that bai!!!");
	else
	{
		fprintf(f, "Tong so dau sach:\t%d", n);
		fprintf(f, "\n-------------------------------------------------------------------------------------------------------------------------------------------------------------\nMa ISBN         Ten sach                Ten tac gia             Nha xuat ban        Nam xuat ban        The loai            Gia         So luong     Da muon\n------------------------------------------------------------------------------------------------------------------------------------------------------------+");
		for (int i = 1; i <= n; i++)
		{
			fprintf(f, "\n%-11s\t\t%-18s\t\t%-17s\t\t", p[i].masach, p[i].tensach, p[i].tacgia);
			fprintf(f, "%-18s\t\t%04d\t\t\t%-15s\t\t%-10d\t\t%4d\t\t%4d",p[i].nxb,p[i].namxuatban, p[i].theloai,p[i].gia,p[i].soquyen,p[i].damuon);
		}
		fclose(f);
	}
}