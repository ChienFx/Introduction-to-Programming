#include <stdio.h>
#include <conio.h>

int fibo(int n);//so fibonacy thu n

int main()
{
	int n;
	printf("\nNhap so thu tu n:");
	scanf_s("%d", &n);
	printf("\nSo fibonaxy f(%d) = %d", n, fibo(n));

	_getch();
	return 0;
}

int fibo(int n)
{
	int f = 0;
	if (n < 0) return -1;
	if (n == 0) f = 0;
	else if (n == 1) f = 1;
	else if (n == 2) f = 1;
	else f = fibo(n-1) + fibo(n-2);
	return f;
}