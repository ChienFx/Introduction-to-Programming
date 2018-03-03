#include "Menu.h"

//The tra sach
void LapTheTraSach(int &SoDocGia, char madg[][10], char hoten[][25], char cmnd[][14], char ngaysinh[][10], char gioitinh[][10], char email[][200],
	char diachi[][200], int ngaytao[], int thangtao[], int namtao[], int namhet[], char sachmuon[][10], int ngaytradukien[], int thangtradukien[], int namtradukien[],
	int&SoDauSach, char masach[][10], char tensach[][255], char tacgia[][25], char nxb[][25], int namxuatban[], char theloai[][25], int gia[], int soquyen[])
{
	printf("\n--------------------------------------------------");
	printf("\n                LAP THE TRA SACH");
	printf("\n--------------------------------------------------");
QuayLai:

	char tmp[255];
	int vtdocgia = 0;//luu vi tri doc gia
	int vtsach = 0;//lưu vị trí của sách có isbn được mượn
	fflush(stdin);
	printf("\nNhap so Ma doc gia: ");
	gets_s(tmp);
	for (int i = 1; i <= SoDocGia; i++)
	if (strcmp(tmp, madg[i]) == 0)
	{
		vtdocgia = i;//lưu vị trí độc giả
		break;
	}
	if (vtdocgia == 0)
	{
		printf("\nMa doc gia khong hop le");
		goto NhayRa;
	}

	for (int i = 1; i <= SoDauSach; i++)
	if (strcmp(sachmuon[vtdocgia], masach[i]) == 0)
	{
		vtsach = i;//lưu vị trí độc giả
		break;
	}
	if (vtsach == 0)
	{
		printf("\nBan chua muon sach nao cua thu vien!");
		goto NhayRa;
	}
	
	int ngaytra = 0, thangtra = 0, namtra = 0;
	int songaytre = 0;
	do
	{
		printf("\nNhap ngay tra sach:");
		NhapNgayThangNam(ngaytra, thangtra, namtra);
		TaoNgayTraDuKien(ngaytradukien[vtdocgia], thangtradukien[vtdocgia], namtradukien[vtdocgia], -7);//dua ve ngay muon sach
		songaytre = TinhSoNgayChenhLech(ngaytradukien[vtdocgia], thangtradukien[vtdocgia], namtradukien[vtdocgia], ngaytra, thangtra, namtra);
		if (songaytre < 0)
			printf("\nNgay tra phai sau ngay muon the. Vui long nhap chinh xac.");
	} while (songaytre<0);
	TaoNgayTraDuKien(ngaytradukien[vtdocgia], thangtradukien[vtdocgia], namtradukien[vtdocgia],7);//dua ve ngay muon sach
	songaytre = TinhSoNgayChenhLech(ngaytradukien[vtdocgia], thangtradukien[vtdocgia], namtradukien[vtdocgia], ngaytra, thangtra, namtra);

	int TienPhat=0;
	//Xu li tra sach
	printf("\nBan co lam mat sach khong?\n 1.Co\n 2.Khong");
	int chon2;
	do
	{
		printf("\n\nChon: ");
		scanf_s("%d", &chon2);
	} while (chon2 >2 || chon2 < 0);

	switch (chon2)
	{
	case 1:
	{
			  TienPhat += gia[vtsach] * 2; break;
	}
	case 2:break;
	}
	soquyen[vtsach]++;
	ngaytradukien[vtdocgia] = 0;
	thangtradukien[vtdocgia] = 0;
	namtradukien[vtdocgia] = 0;
	

	//Xuat thong tin the
	printf("\n---------------------------------------------------");
	printf("\nTra the thanh cong");
	printf("\n---------------------------------------------------");

	printf("\nMa doc gia: %s",madg[vtdocgia]);
	printf("\nISBN sach da tra: %s",sachmuon[vtdocgia]);
	if (TienPhat > 0)
		printf("\nLam mat sach den: %dvnd (gia goc %dvnd)", TienPhat, gia[vtsach]);

	if (songaytre > 0)
		printf("\nTra sach tre %d ngay\nNop phat: %d vnd", songaytre, songaytre * 5000);
	else
		printf("\nTra sach dung han.");
	printf("\nTong so tien phat: %dvnd",TienPhat + songaytre*5000);
	printf("\nXin cam on,");
	strcpy_s(sachmuon[vtdocgia], "-1");
NhayRa:
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
			  goto QuayLai;
	}
	case 2:
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

