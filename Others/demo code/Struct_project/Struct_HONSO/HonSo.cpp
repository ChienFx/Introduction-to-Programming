#include "HonSo.h"

void NhapHonSo(HONSO&P)
{
	do
	{
		printf("\nNhap Co So:");
		scanf_s("%d", &P.coso);
		printf("\nNhap Tu So:");
		scanf_s("%d", &P.tu);
		printf("\nNhap Mau So:");
		scanf_s("%d", &P.mau);
	} while (P.mau == 0);
}

void XuatHonSo(HONSO P)
{
	printf("%d(%d/%d)", P.coso, P.tu, P.mau);
}
void XuatPhanSo(PHANSO P)
{
	printf("%d/%d", P.tu,P.mau);
}

PHANSO RutGonHonSo(HONSO P)
{
	PHANSO tmp;
	tmp.tu = P.coso*P.mau + P.tu;
	tmp.mau = P.mau;
	return tmp;
}