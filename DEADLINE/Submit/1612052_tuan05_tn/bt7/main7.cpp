#include "bai7.h"	

int main()
{
	double n, lamtron;
	int k;
	printf("\nNhap so thuc: ");
	scanf_s("%lf", &n);
	printf("\nNhap so nguyen: ");
	scanf_s("%d", &k);
	lamtron = LamTronSo(n, k);
	printf("\nLam tron %lf voi %d chu so: %lf", n, k, lamtron);
	_getch();
	return 0;
}