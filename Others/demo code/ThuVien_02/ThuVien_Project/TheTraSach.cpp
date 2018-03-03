#include "PhieuMuonTraSach.h"
#include "KiemTraXuLiChuoi.h"
#include "NgayThang.h"
void LapTheTra(DocGia DSDocGia[MAX], int &SoDocGia, SACH DSDauSach[MAX], int &SoDauSach)
{
	printf("\n--------------------------------------------------");
	printf("\n                LAP THE TRA SACH");
	printf("\n--------------------------------------------------");
	char tmp[255];
	int markDG = 0, markSach = 0;
	NhapChuoi(tmp, "\nNhap ma doc gia: ");
	markDG = KiemTraMaDocGiaTrung(tmp, DSDocGia, SoDocGia);
	if (markDG != 0)//ma doc gia hop le
	{
		if (strcmp(DSDocGia[markDG].sachdamuon, "-") != 0)//da muon
		{
			markSach = KiemTraISBNTrung(DSDocGia[markDG].sachdamuon, DSDauSach, SoDauSach);
			int tienphat = 0, tienphat2 = 0;
			date ngaytrathuc;
			NhapNgay(ngaytrathuc, " -Nhap ngay tra sach: ");
			int songaytre = 0;
			if (SoSanhHaiNgay(DSDocGia[markDG].ngaytrasachdukien, ngaytrathuc) < 0)//tre 
			{
				songaytre = TinhSoNgayChenhLech(DSDocGia[markDG].ngaytrasachdukien, ngaytrathuc);
				tienphat += songaytre * 5000;
			}

			strcpy_s(DSDocGia[markDG].sachdamuon, "-");
			DSDauSach[markSach].damuon--;
			setDefaultDate(DSDocGia[markDG].ngaymuonsach);
			setDefaultDate(DSDocGia[markDG].ngaytrasachdukien);

			printf("\nBan co lam mat sach khong?\n 1.Co\n 2.Khong");
			int chon2;
			do
			{
				printf("\n\nChon: ");
				scanf_s("%d", &chon2);
			} while (chon2 > 2 || chon2 < 0);

			switch (chon2)
			{
			case 1:
			{
					  tienphat2 += DSDauSach[markSach].gia * 2;
					  break;
			}
			case 2:break;
			}

			printf("\n---------------------------------------------------");
			printf("\nTra the thanh cong");
			printf("\n---------------------------------------------------");

			printf("\nMa doc gia: %s", DSDocGia[markDG].madg);
			printf("\nISBN sach da tra: %s",DSDauSach[markSach].masach);
			if (tienphat2 > 0)
				printf("\nLam mat sach den: %dvnd (gia goc %dvnd)", tienphat2, DSDauSach[markSach].gia);
			if (songaytre > 0)
				printf("\nTra sach tre %d ngay\nNop phat: %d vnd", songaytre, songaytre * 5000);
			else
				printf("\nTra sach dung han.");
			printf("\nTong so tien phat: %dvnd", tienphat2 + songaytre * 5000);
			printf("\nXin cam on,");
		}
		else
			printf("\nBan chua thuc hien muon sach!!!");
	}
	else
	{
		printf("\nMa doc gia khong hop le");
	}
	printf("\n--------------------------------------------------");
	printf("\n  1.Tiep tuc ");
	printf("\n  2.Tro ve Menu chinh");
	printf("\n  0.Thoat chuong trinh");
	int chon;
	do
	{
		printf("\n\nChon: ");
		scanf_s("%d", &chon);
	} while (chon >2 || chon < 0);

	switch (chon)
	{
	case 1:
	{
			  system("cls");
			  LapTheTra(DSDocGia, SoDocGia, DSDauSach, SoDauSach);
	}
	case 2:
	{
			  system("cls");// xóa màn hình
			  MenuChinh(DSDocGia, SoDocGia, DSDauSach, SoDauSach);
			  break;
	}
	case 0:
	{
			  GhiFileVaThoat(DSDocGia, SoDocGia, DSDauSach, SoDauSach);		//thoát khỏi chương trình
	}
	}
}