//Viết chương trình tính bội số chung nhỏ nhất của hai số nguyên dương không qua 7 chữ số.
#include <stdio.h>
#include <conio.h>
#include <limits.h>


int UCLN(int, int);
long long  BCNN(long, long);

int main()
{
	int n = 21111112;
	printf("\nUCLN: %d", UCLN(12, 16));
	printf("\nBCNN: %lld", BCNN(6,9));

	_getch();
	return 0;
}

int UCLN(int a, int b)
{
	while (a != b)
	{
		(a > b) ? a -= b : b -= a;
	}
	return a;
}

long long  BCNN(long a, long b)
{
	return a*b / UCLN(a, b);
}