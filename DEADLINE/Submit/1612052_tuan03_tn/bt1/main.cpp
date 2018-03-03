#include <stdio.h>
#include <conio.h>
#include <math.h>
int main()
{
	float n;
	float s = 0;
MrC:

	printf("\nNhap n:");
	scanf_s("%f", &n);
	if (n < 0 || fmod(n, 1) != 0)
	{
		printf("\nNhap so nguyen duong!!");
		goto MrC;
	}
	for ( int i = 0; i <= n; i++)
	{
		s = sqrt(2 * i + s);
	}

	printf("\nTong: %0.3f", s);

	_getch();
	return 0;

}
