#include "HoanViNhiPhan.h"

void main()
{
	int a[MAX], n;
	do
	{
		printf("\n-Nhap do dai chuoi bit:");
		scanf_s("%d", &n);
	} while (n < 1);
	XuatHoanVi(a, n);

	_getch();
}