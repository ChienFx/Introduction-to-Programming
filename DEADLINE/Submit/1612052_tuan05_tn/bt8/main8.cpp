#include "bai8.h"

int main()
{
	int tu, mau;
	do
	{
		printf("\nNhap tu so:");
		scanf_s("%d", &tu);

		printf("\nNhap mau so:");
		scanf_s("%d", &mau);
	} while (mau == 0);
	RutGonPhanSo(tu, mau);
	_getch();
	return 0;
}