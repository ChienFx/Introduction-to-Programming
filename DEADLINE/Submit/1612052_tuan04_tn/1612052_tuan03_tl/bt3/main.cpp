#include <stdio.h>
#include <conio.h>

int MaxN(int);
int MinN(int);

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
	printf("\nchu so lon nhat trong %d : %d ", n, MaxN(n));
	printf("\nchu so nho nhat trong %d : %d ", n, MinN(n));
	_getch();
	return 0;
}

int MaxN(int n)
{
	if (n < 0)n = -n;
	int Max = 0;
	while (n > 0)
	{
		int temp = n % 10;
		if (temp > Max) Max = temp;
		n /= 10;
	}
	return Max;
}
int MinN(int n)
{
	if (n < 0) n = -n;
	int Min = 9;
	while (n > 0)
	{
		int temp = n % 10;
		if (temp < Min) Min = temp;
		n /= 10;
	}
	return Min;
}