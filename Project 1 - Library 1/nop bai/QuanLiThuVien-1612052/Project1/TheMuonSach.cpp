#include "Menu.h"

//Hàm lập thẻ mượn sách
void LapTheMuonSach(int &SoDocGia, char madg[][10], char hoten[][25], char cmnd[][14], char ngaysinh[][10], char gioitinh[][10], char email[][200],
	char diachi[][200], int ngaytao[], int thangtao[], int namtao[], int namhet[], char sachmuon[][10], int ngaytradukien[], int thangtradukien[], int namtradukien[],
	int&SoDauSach, char masach[][10], char tensach[][255], char tacgia[][25], char nxb[][25], int namxuatban[], char theloai[][25], int gia[], int soquyen[])
{
	printf("\n--------------------------------------------------");
	printf("\n                LAP THE MUON SACH");
	printf("\n--------------------------------------------------");
QuayLai:

	char tmp[255];
	int kt = 0;//luu vi tri doc gia
	int kts = 0;//lưu vị trí của sách có isbn được mượn
	fflush(stdin);
	printf("\nNhap so Ma doc gia: ");
	gets_s(tmp);
	for (int i = 1; i <= SoDocGia; i++)
	if (strcmp(tmp,madg[i])==0)
	{
		kt = i;//
		break;
	}
	if (kt == 0)
	{
		printf("\nMa doc gia khong hop le");
		goto NhayRa;
	}
	if (KiemTraSachTrung(sachmuon[kt], masach, SoDauSach)==1)
	{
		printf("\nBan chi duoc muon toi da 1 quyen. \nVui long tra sach cu turoc khi muon sach moi");
		goto NhayRa;
	}
QuayLai1:

	char temp[14];
	printf("\nNhap ma sach ISBN can muon:");
	fflush(stdin);
	gets_s(temp);
	for (int i = 1; i <= SoDauSach; i++)
	{
		if (strcmp(temp, masach[i]) == 0)
		{
			if (soquyen[i] > 0)
			{
				kts = 1;
				strcpy_s(sachmuon[kt], masach[i]);//gan ma isbn vao sach muon
				NhapNgayThangNam(ngaytradukien[kt], thangtradukien[kt], namtradukien[kt]);
				TaoNgayTraDuKien(ngaytradukien[kt], thangtradukien[kt], namtradukien[kt], 7);
				soquyen[i]--;
				printf("\n--------------------------------------------------");
				printf("\nMUON SACH THANH CONG !!");
				printf("\nMa doc gia      : %s", madg[kt]);
				printf("\nISBN            : %s", masach[i]);
				printf("\nNgay tra du kien: %02d/%02d/%04d",ngaytradukien[kt],thangtradukien[kt],namtradukien[kt]);
				break;
			}
			else 
			{
				printf("\nSach ban chon da het. Vui long chon sach khac.!!");
				goto QuayLai1;
			}
			
		}
	}
	if (kts==0)
	{
		printf("\nKhong tim thay sach ban can.");
		goto NhayRa;
	}
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

