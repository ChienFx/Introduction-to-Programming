#include "diem_oxy.h"

void NhapDiem(DIEM &P,char chuoi[255])
{
	printf("%s", chuoi);
	float tmp;
	printf("\nNhap x: ");
	scanf_s("%f", &tmp);
	P.x = tmp;
	printf("\nNhap y: ");
	scanf_s("%f", &tmp);
	P.y = tmp;
}
void XuatDiem(DIEM P,char chuoi[255])
{

	printf("%s (%0.2f ; %0.2f)",chuoi, P.x, P.y);
}
float TinhKhoangCachHaiDiem(DIEM P1, DIEM P2)
{
	return sqrt(pow(P1.x - P2.x, 2) + pow(P1.y - P2.y, 2));
}
float TinhKhoangCachTheoPhuongOx(DIEM P1, DIEM P2)
{
	return abs(P1.x - P2.x);
}
float TinhKhoangCachTheoPhuongOy(DIEM P1, DIEM P2)
{
	return abs(P1.y - P2.y);
}
DIEM TimDoiXung(DIEM P)
{
	DIEM Doixung;
	Doixung.x = -P.x;
	Doixung.y = -P.y;
	return Doixung;
}
DIEM TimDoiXungQuaPhanGiacI(DIEM P)
{
	DIEM tmp;
	tmp.x = P.y;
	tmp.y = P.x;
	return tmp;
}
DIEM TimDoiXungQuaPhanGiacII(DIEM P)
{
	DIEM tmp;
	tmp.x = -P.y;
	tmp.y = -P.x;
	return tmp;
}
int ThuocPhanNaoCuaHeTruc(DIEM P)// trả về điểm P thuộc phần tư thứ mấy
{
	int kq = 0;
	if (P.x > 0 & P.y > 0)
		kq = 1;
	else if (P.x <0 && P.y > 0)
		kq = 2;
	else if (P.x < 0 && P.y < 0)
		kq = 3;
	else if (P.x >0 && P.y < 0)
		kq = 4;
	return kq;//trường hợp P thuộc TRỤC TỌA ĐỘ (X = 0 || Y =0) thì trả về 0.
}