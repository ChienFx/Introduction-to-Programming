#include "DuongTron.h"

void NhapDiem(DIEM &P, char chuoi[255])
{
	printf("%s", chuoi);
	float tmp;
	printf("\n -Nhap x: ");
	scanf_s("%f", &tmp);
	P.x = tmp;
	printf(" -Nhap y: ");
	scanf_s("%f", &tmp);
	P.y = tmp;
}
void XuatDiem(DIEM P, char chuoi[255])
{

	printf("%s (%0.2f ; %0.2f)", chuoi, P.x, P.y);
}

void NhapDuongTron(DUONGTRON&O)
{
	printf("\nNhap tam duong tron:\nx: ");
	scanf_s("%f", &O.I.x);
	printf("y: ");
	scanf_s("%f", &O.I.y);
	printf("Ban kinh: ");
	scanf_s("%f", &O.R);

}
void XuatDuongTron(DUONGTRON O)
{
	printf("((%0.2f,%0.2f),%0.2f)", O.I.x, O.I.y, O.R);
}
float TinhChuViDuongTron(DUONGTRON O)
{
	return 2 * PI*O.R;
}
float TinhDienTichDuongTron(DUONGTRON O)
{
	return PI*O.R*O.R;
}
float TinhKhoangCachHaiDiem(DIEM P1, DIEM P2)
{
	return sqrt(pow(P1.x - P2.x, 2) + pow(P1.y - P2.y, 2));
}
void XuatViTriTuongDoi(DUONGTRON O1, DUONGTRON O2)
{
	float KhoangCachHaiTam = TinhKhoangCachHaiDiem(O1.I, O2.I);
	if (KhoangCachHaiTam == 0 && O1.R == O2.R)
		printf("\nHai duong tron TRUNG NHAU.");
	else if (KhoangCachHaiTam < abs(O1.R-O2.R))
		printf("\nHai duong tron O TRONG NHAU.");
	else if (KhoangCachHaiTam == abs(O1.R - O2.R)|| KhoangCachHaiTam == O1.R +O2.R)
		printf("\nHai duong tron TIEP XUC NHAU.");
	else if (KhoangCachHaiTam > abs(O1.R - O2.R) && KhoangCachHaiTam < O1.R + O2.R)
		printf("\nHai duong tron CAT NHAU.");
	else if (KhoangCachHaiTam > abs(O1.R - O2.R))
		printf("\nHai duong tron NGOAI NHAU.");

}//thieu

bool KiemTraDiemThuocDuongTron(diem p, duongtron O)
{
	if (TinhKhoangCachHaiDiem(p, O.I) == O.R)
		return true;
	return false;
}