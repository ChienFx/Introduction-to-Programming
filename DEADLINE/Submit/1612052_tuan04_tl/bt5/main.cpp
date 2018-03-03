#include <stdio.h>
#include <conio.h>

int binhphuong1(int n);// + va -
int binhphuong2(int n);
int main()
{
	int n;
	printf("\nNhap n: "); scanf_s("%d", &n);
	printf("\nChi dung '+' va '-'  : %d^2 = %d", n, binhphuong1(n));
	printf("\nChi dung '+'         : %d^2 = %d", n, binhphuong2(n));
	_getch();
	return 0;
}

int binhphuong1(int n)
{
	int temp = 0;
	for (int i = 1; i <= n; i++)
		temp = temp + n;

	return temp;
}
int binhphuong2(int n)
{
	int temp = 0;
	for (int i = 1; i <= n+1; i++)
		temp = temp + n;

	return temp-n;
}
