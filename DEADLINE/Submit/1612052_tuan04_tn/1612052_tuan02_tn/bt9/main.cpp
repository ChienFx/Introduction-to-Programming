#include <stdio.h>
#include <conio.h>
#include <math.h>

int isPrime(int);

int main()
{
	int s = 0;
	for (int i = 1; i < 1000; i++)
	{
		if (isPrime(i))
		{
			s += i;	
		}
	}
	printf("\nTong cac so nguyen to <1000: %d", s);
	_getch();
	return 0;
}

int isPrime(int n)
{
	if (n < 2) return 0;
	if (n == 2)return 1;
	for (int i = 2; i <= sqrt((float)n); i++)
	{
		if (n % i == 0) return 0;
	}
	return 1;
}