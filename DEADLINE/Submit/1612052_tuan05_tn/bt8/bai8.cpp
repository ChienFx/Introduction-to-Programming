#include "bai8.h"
void RutGonPhanSo(int tu, int mau)
{
	int min = (tu < mau) ? tu : mau;
	for (int i = 2; i <= min; i++)
	{
		if (tu%i == 0 && mau%i == 0)
		{
			tu = tu / i;
			mau = mau / i;
		}
	}
	printf("\nPhan so sau khi rut gon: %d/%d", tu, mau);
}