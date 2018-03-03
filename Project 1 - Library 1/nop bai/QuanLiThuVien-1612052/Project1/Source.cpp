#include "Menu.h"


int main()
{
	char madg[100][10]; //lưu mã độc giả______KHÔNG TRÙNG
	char hoten[100][25];//lưu họ tên độc giả
	char cmnd[100][14];//lưu cmnd độc giả_____KHÔNG TRÙNG
	char ngaysinh[100][10];//Ngày sinh
	char gioitinh[100][10];//Giới tính_NAM_OR_NU
	char email[100][200];//Luu email
	char diachi[100][200];//Luu dia chi
	int ngaytao[100];//ngay tao the
	int thangtao[100] = { 0 };//thang tao the
	int namtao[100];//nam tao the
	int namhet[100];//nam het = nam tao +2;
	//quan li the muon sach
	char sachmuon[100][10];//Lưu mã isbn mà độc giả đã mượn mặc định -1 là chưa mượn
	int ngaytradukien[100];//
	int thangtradukiem[100];//
	int namtradukien[100];//
	// mảng quản lí sách.
	char masach[100][10];//Luu isbn sach____KHONG TRUNG
	char tensach[100][255];//luu ten sach
	char tacgia[100][25];//luu tac gia
	char nxb[100][25];//luu nhà xaut ban
	int namxuatban[100];//luu nam xuat ban
	char theloai[100][25];//luu the loai
	int gia[100];//luuu gia sach
	int soquyen[100];//luu so uqyne sach
	
	int SoDocGia=0;//tổng số độc gia
	int SoDauSach = 0;//tổng số đầu sách
		
	HienMenuChinh(SoDocGia, madg, hoten, cmnd, ngaysinh, gioitinh, email, diachi, ngaytao, thangtao, namtao, namhet,sachmuon,ngaytradukien,thangtradukiem,namtradukien,SoDauSach,masach,tensach,tacgia,nxb,namxuatban,theloai,gia,soquyen);
	_getch();
	return 0;
}