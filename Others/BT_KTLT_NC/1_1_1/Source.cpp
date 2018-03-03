//Viết chương trình tính tổng chữ số của một số không quá 9 chữ số.
#include <stdio.h>
#include <conio.h>

int Sum(int);

int main()
{
	int n = 11111111;
	printf("\nTong cac chu so: %d", Sum(n));


	_getch();
}

int Sum(int n)
{
	int s = 0;
	while (n > 0)
	{
		s += n % 10;
		n /= 10;
	}
	return s;
}