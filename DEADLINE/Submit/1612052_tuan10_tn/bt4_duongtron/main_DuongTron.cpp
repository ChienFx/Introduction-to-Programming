#include "DuongTron.h"

int main()
{
	DUONGTRON O1, O2;
	diem M;
	NhapDuongTron(O1);
	XuatDuongTron(O1);
	NhapDuongTron(O2);
	XuatDuongTron(O2);
	printf("\nChu vi O1: %f", TinhChuViDuongTron(O1));
	printf("\nDien tich O1: %f", TinhDienTichDuongTron(O1));
	XuatViTriTuongDoi( O1,  O2);
	NhapDiem(M, "\nNhap diem M");

	if (KiemTraDiemThuocDuongTron(M, O1))
		printf("\nDiem M thuoc duong tron O1");
	else
		printf("\nDiem M thuoc KHONG duong tron O1");
	_getch();
	return 0;
}