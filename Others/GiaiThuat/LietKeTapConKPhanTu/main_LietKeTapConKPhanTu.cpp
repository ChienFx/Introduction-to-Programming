#include "LietKeTapConKPhanTu.h"

void main()
{
	int a[MAX], n, k;
	do
	{
		printf("\nNhap N:");
		scanf_s("%d", &n);

		printf("\nNhap k:");
		scanf_s("%d", &k);
	} while (k > n || k < 1);
	LietKeTapConKPhanTu(a, n, k);

	_getch();
}