#include "Bai3.h"

int main()
{
	int n;
	float x, tong;
	do
	{
		printf("\nNhap so nguyen duong n:");
		scanf_s("%d", &n);
		printf("\nNhap so thuc x:");
		scanf_s("%f", &x);
	} while (n <= 0);
	tong = TinhTong(x, n);
	printf("\nTong : %f", tong);
	_getch();
	return 0;
}