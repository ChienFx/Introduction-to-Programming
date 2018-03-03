/*bai 07. Tìm chữ số đảo ngược của số nguyên dương n*/
#include <stdio.h>
#include <conio.h>
#include <math.h>

int SoDao(int);
int main()
{
	int n;
	printf("\nnhap n:");
	scanf_s("%d", &n);
	if (n < 0)
	{
		printf("\nYeu cau nhap so nguyen duong!!");
		return 0;
	}
	printf("\nSo dao của %d la:  %d", n, SoDao(n));
	_getch();
	return 0;
}

int SoDao(int n)
{
	if (n<0) n = -n;
	int Temp = n % 10;
	n /= 10;
	while (n > 0)
	{
		Temp = Temp * 10 + (n % 10);
		n /= 10;
	}
	return Temp;
}