#include "TamGiac.h"

void NhapDiem(DIEM &P, char chuoi[255])
{
	printf("%s", chuoi);
	float tmp;
	printf("\nNhap x: ");
	scanf_s("%f", &tmp);
	P.x = tmp;
	printf("Nhap y: ");
	scanf_s("%f", &tmp);
	P.y = tmp;
}
void XuatDiem(DIEM P, char chuoi[255])
{

	printf("%s (%0.2f , %0.2f)", chuoi, P.x, P.y);
}
float TinhKhoangCachHaiDiem(DIEM P1, DIEM P2)
{
	return sqrt(pow(P1.x - P2.x, 2) + pow(P1.y - P2.y, 2));
}

void NhapTamGiac(tamgiac &T, char chuoi[255])
{
	printf("%s", chuoi);
	do{
		NhapDiem(T.d1, " -Nhap dinh thu I:");
		NhapDiem(T.d2, " -Nhap dinh thu II:");
		NhapDiem(T.d3, " -Nhap dinh thu III:");
		if (KiemTraLapThanhTamGiac(T) == false)
			printf("\nKhong tao thanh tam giac. MOi nhap lai.\n");
	} while (KiemTraLapThanhTamGiac(T) == false);
}
void XuatTamGiac(tamgiac T, char chuoi[255])
{
	printf("%s", chuoi);
	printf("("); 
	XuatDiem(T.d1, "");
	XuatDiem(T.d2, "");
	XuatDiem(T.d3, "");
	printf(")");
}

bool KiemTraLapThanhTamGiac(tamgiac T)
{
	float a = TinhKhoangCachHaiDiem(T.d2, T.d3);
	float b = TinhKhoangCachHaiDiem(T.d1, T.d3);
	float c = TinhKhoangCachHaiDiem(T.d1, T.d2);
	if (a + b > c && a + c > b && b + c > a)
		return true;
	return false;
}
float TinhChuViTamGiac(tamgiac T)
{
	float a = TinhKhoangCachHaiDiem(T.d2, T.d3);
	float b = TinhKhoangCachHaiDiem(T.d1, T.d3);
	float c = TinhKhoangCachHaiDiem(T.d1, T.d2);
	return a + b + c;
}
float TinhDienTichTamGiac(tamgiac T)
{
	float a = TinhKhoangCachHaiDiem(T.d2, T.d3);
	float b = TinhKhoangCachHaiDiem(T.d1, T.d3);
	float c = TinhKhoangCachHaiDiem(T.d1, T.d2);
	float p = (a + b + c) / 2;
	float S = p*sqrt((p - a)*(p - b)*(p - b));
	return S;
}
diem ToaDoTrongTamTamGia(tamgiac T)
{
	diem G;
	G.x = (T.d1.x + T.d2.x + T.d3.x) / 3;
	G.y = (T.d1.y + T.d2.y + T.d3.y) / 3;
	return G;
}
diem ToaDoDinhCoHoanhDoLonNhat(tamgiac T)
{
	diem Max = T.d1;
	if (T.d2.x > Max.x)
		Max = T.d2;
	if (T.d3.x > Max.x)
		Max = T.d3;
	return Max;
}