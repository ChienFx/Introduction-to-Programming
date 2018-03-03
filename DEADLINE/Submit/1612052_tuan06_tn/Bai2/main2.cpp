#include "Bai2.h"

int main()
{
	int n;
	printf("\nNhap n:");
	scanf_s("%d", &n);

	if (isPrime(n)==1) 
		printf("%d la so nguyen to.",n);
	else
	{
		printf("%d la KHONG la so nguyen to.",n);
		printf("\nso nguyen to gan %d nha la: %d",n,findPrime(n));
	}
	_getch();
	return 0;
}