#include "bai5.h"

int main()
{ 
	int n, k;
	do
	{
		printf("\nNhap n:");
		scanf_s("%d", &n);
		printf("\nNhap k:");
		scanf_s("%d", &k);
	} while (k <= 0);
	printf("\nXuat qua la: %d", TimChuSoThuK(n, k));
	_getch();
	return 0;
}