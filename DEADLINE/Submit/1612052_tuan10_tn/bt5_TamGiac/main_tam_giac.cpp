#include "TamGiac.h"

void main()
{
	tamgiac T;
	NhapTamGiac(T, "Nhap Tam Giac T:\n");
	XuatTamGiac(T, "Tam giac vua nhap:");
	printf("\nChu vi Tam Giac T: %f", TinhChuViTamGiac(T));
	printf("\nDien Tich Tam Giac T: %f", TinhDienTichTamGiac(T));
	XuatDiem(ToaDoTrongTamTamGia(T), "\nToa do Trong tam: ");
	XuatDiem(ToaDoDinhCoHoanhDoLonNhat(T), "\nToa do Dinh co hoanh do lon nhat: ");
	_getch();
}