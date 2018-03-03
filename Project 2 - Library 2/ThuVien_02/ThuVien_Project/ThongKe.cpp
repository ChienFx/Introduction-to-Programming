#include "ThongKe.h"
void ThongKe(DocGia DSDocGia[MAX], int SoDocGia, SACH DSDauSach[MAX], int SoDauSach)
{
	int TongSoSach=TinhTongSoSach(DSDauSach,SoDauSach);
	int SoSachDangDuocMuon = TinhSoSachDangDuocMuon(DSDauSach, SoDauSach);
	int SoSachConLai = TongSoSach - SoSachDangDuocMuon;
	printf("\n*************************************************");
	printf("\n                    THONG KE");
	printf("\n*************************************************\n\n");
	printf("\n=================================================");
	printf("\n  - Tong so luong sach trong thu vien: %d", TongSoSach);
	printf("\n=================================================");
	printf("\n  - Sach dang duoc muon              : %d", SoSachDangDuocMuon);
	printf("\n=================================================");
	printf("\n  - Sach con trong thu vien          : %d", SoSachConLai);
	printf("\n=================================================");
	ThongKeTheoTheLoai(DSDauSach, SoDauSach);
	ThongKeTheoGioiTinh(DSDocGia, SoDocGia);
	ThongKeSoDocGiaTreHan(DSDocGia, SoDocGia);

	printf("\n--------------------------------------------------");
	printf("\n  1.Tro ve Menu chinh");
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
void ThongKeSoDocGiaTreHan(DocGia p[MAX], int SoDocGia)
{
	printf("\n=================================================");
	printf("\n  - Thong ke so do gia tre han");
	int sotre = 0;
	date ngayKT;
	NhapNgay(ngayKT, "\n - Nhap ngay can kiem tra: ");
	for (int i = 1; i <= SoDocGia; i++)
	{
		if (strcmp(p[i].sachdamuon, "-") != 0)
		{
			if (SoSanhHaiNgay(p[i].ngaytrasachdukien, ngayKT) < 0)
				sotre++;
		}
	}
	printf("\n - So doc gia tre hen: %d", sotre);
	printf("\n=================================================");
}
void ThongKeTheoGioiTinh(DocGia p[MAX], int SoDocGia)
{
	printf("\n  - Thong ke sach theo gioi tinh:");
	int nam = 0, nu = 0;
	for (int i = 1; i <= SoDocGia; i++)
	{
		if (strcmp(p[i].gioitinh, "NAM") == 0)
			nam++;
		else nu++;
	}
	printf("\n  - NAM:   %2d", nam);
	printf("\n  - NU :   %2d", nu);
	printf("\n=================================================");
}
void ThongKeTheoTheLoai(SACH p[MAX], int SoDauSach)
{
	printf("\n  - Thong ke sach theo the loai:\n");
	int dem = 0;
	for (int i = 1; i <= SoDauSach; i++)
	{
		dem = 0;
		if (KiemTraTheLoaiTrung(p[i].theloai,p,SoDauSach)==0)//chưa duyệt lần nào
		{
			dem = p[i].soquyen;//đếm thể loại của thằng i
			for (int j = i + 1; j <= SoDauSach; j++)
			if (strcmp(p[i].theloai, p[j].theloai) == 0)
				dem += p[j].soquyen;

			printf("\n  +    %10s: %d", p[i].theloai, dem);
		}
	}
	printf("\n=================================================");
}
int TinhTongSoSach(SACH DSDauSach[MAX], int SoDauSach)
{
	int tong = 0;
	for (int i = 1; i <= SoDauSach; i++)
		tong += DSDauSach[i].soquyen;
	return tong;
}
int TinhSoSachDangDuocMuon(SACH DSDauSach[MAX], int SoDauSach)
{
	int tong = 0;
	for (int i = 1; i <= SoDauSach; i++)
		tong += DSDauSach[i].damuon;
	return tong;
}