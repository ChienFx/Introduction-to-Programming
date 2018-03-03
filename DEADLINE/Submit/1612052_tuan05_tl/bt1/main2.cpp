#include "bai2.h"
int main()
{
	int n,k;
	printf("\nNhap n:");
	scanf_s("%d", &n);

	printf("\nNhap k:");
	scanf_s("%d", &k);
	long s = TinhGiaiThua(n) / (TinhGiaiThua(k)*TinhGiaiThua(n - k));
	printf("\nKet qua: %ld", s);
	_getch();
	return 0;
}