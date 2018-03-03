#include "PhieuMuonTraSach.h"
#include "KiemTraXuLiChuoi.h"
#include "NgayThang.h"
void LapTheMuon(DocGia DSDocGia[MAX], int &SoDocGia, SACH DSDauSach[MAX], int &SoDauSach)
{
	printf("\n--------------------------------------------------");
	printf("\n                LAP THE MUON SACH");
	printf("\n--------------------------------------------------");
QuayLai:

	char tmp[255];
	int markDG = 0, markSach = 0;
	NhapChuoi(tmp, "\nNhap ma doc gia: ");
	markDG = KiemTraMaDocGiaTrung(tmp, DSDocGia, SoDocGia);
	if (markDG != 0)//ma doc gia hop le
	{
		if (KiemTraISBNTrung(DSDocGia[markDG].sachdamuon, DSDauSach, SoDauSach) == 0)//chua muon lan nao, ok
		{
			NhapChuoi(tmp, "\nNhap ma ISBN can muon: ");
			strupr(tmp);
			markSach = KiemTraISBNTrung(tmp, DSDauSach, SoDauSach);
			if (markSach != 0)
			{
				if (DSDauSach[markSach].soquyen - DSDauSach[markSach].damuon > 0)//con sach de muon
				{
					strcpy_s(DSDocGia[markDG].sachdamuon, DSDauSach[markSach].masach);
					DSDauSach[markSach].damuon++;
					
					//NhapNgay(DSDocGia[markDG].ngaymuonsach, "\n- Nhap ngay muon sach: ");
					do
					{
						NhapNgay(DSDocGia[markDG].ngaymuonsach, "\n- Nhap ngay muon sach: ");
						if (SoSanhHaiNgay(DSDocGia[markDG].ngaytaothe, DSDocGia[markDG].ngaymuonsach) > 0)
							printf("\nNhap ngay muon sach phai sau ngay tao the!!!\n");
						if (SoSanhHaiNgay(DSDocGia[markDG].ngayhethan, DSDocGia[markDG].ngaymuonsach) < 0)
							printf("\nThe cua ban da het han!!!\n");
					} while (SoSanhHaiNgay(DSDocGia[markDG].ngaytaothe, DSDocGia[markDG].ngaymuonsach) > 0 || SoSanhHaiNgay(DSDocGia[markDG].ngayhethan, DSDocGia[markDG].ngaymuonsach) < 0);

					DSDocGia[markDG].ngaytrasachdukien = KNgayTiepTheo(DSDocGia[markDG].ngaymuonsach, 7);
					printf("\n--------------------------------------------------");
					printf("\nMUON SACH THANH CONG !!");
					printf("\nMa doc gia      : %s", DSDocGia[markDG].madg);
					printf("\nISBN            : %s", DSDauSach[markSach].masach);
					XuatNgay(DSDocGia[markDG].ngaytrasachdukien, "\nNhay tra du kien: ");
					printf("\n--------------------------------------------------");
				}
				else
					printf("\nSo luong sach da het. Vui long muon sach khac!!");
			}
			else
				printf("\nSach khong co trong thu vien!!!");
		}
		else
		{
			printf("\nBan chi duoc muon toi da 1 quyen. \nVui long tra sach cu turoc khi muon sach moi");
		}
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
			  LapTheMuon(DSDocGia, SoDocGia, DSDauSach, SoDauSach);
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