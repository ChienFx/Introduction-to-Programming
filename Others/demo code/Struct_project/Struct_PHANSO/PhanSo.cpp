#include "PhanSo.h"	

void NhapPhanSo(PHANSO &P)
{
	do
	{
		printf("\nNhap Tu So:");
		scanf_s("%d", &P.tu);
		printf("\nNhap Mau So:");
		scanf_s("%d", &P.mau);
	} while (P.mau == 0);

}

void XuatPhanSo(PHANSO P)
{
	printf("%d/%d", P.tu, P.mau);
}
void RutGonPhanSo(PHANSO &P)
{
	for (int i = 1; i <= P.tu; i++)
	if (P.tu % i == 0 & P.mau %i == 0)
		{
			P.tu /= i;
			P.mau /= i;
		}		
}

PHANSO TinhTongHaiPhanSo(PHANSO p1, PHANSO p2)
{
	PHANSO tmp;
	tmp.tu = p1.tu * p2.mau + p2.tu*p1.mau;
	tmp.mau = p1.mau *p2.mau;
	RutGonPhanSo(tmp);
	return tmp;
}
PHANSO TinhHieuHaiPhanSo(PHANSO p1, PHANSO p2)
{
	PHANSO tmp;
	tmp.tu = p1.tu * p2.mau - p2.tu*p1.mau;
	tmp.mau = p1.mau *p2.mau;
	RutGonPhanSo(tmp);
	return tmp;
}
PHANSO TinhTichHaiPhanSo(PHANSO p1, PHANSO p2)
{
	PHANSO tmp;
	tmp.tu = p1.tu * p2.tu;
	tmp.mau = p1.mau *p2.mau;
	RutGonPhanSo(tmp);
	return tmp;
}
PHANSO TinhThuongHaiPhanSo(PHANSO p1, PHANSO p2)
{
	PHANSO tmp;
	tmp.tu = p1.tu * p2.mau;
	tmp.mau = p1.mau *p2.tu;
	RutGonPhanSo(tmp);
	return tmp;
}
int KiemTraToiGian(PHANSO P)
{
	for (int i = 2; i <= P.tu; i++)
	if (P.tu % i == 0 & P.mau %i == 0)
		return 0;
	return 1;
}
int KiemTraPhanSoDuong(PHANSO P)
{
	float tmp = (float)((float)P.tu / P.mau);
	if (tmp > 0) //khong co float la FAIL do
		return 1;
	return 0;
}
int SoSanhHaiPhanSo(PHANSO p1, PHANSO p2) // tra ve 1,0,-1
{
	float tmp = (float)p1.tu / p1.mau - (float)p2.tu / p2.mau;
	if (tmp > 0) return 1;
	else if (tmp < 0) return -1;
	return 0;
}

