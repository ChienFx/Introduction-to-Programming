#include <stdio.h>
#include <conio.h>
#include <math.h>
#define PI 3.141593
int main()
{
	float n, x, tam = 1;
	double s;
MrC:
	printf("\nnhap x:");
	scanf_s("%f", &x);
	printf("\nnhap n:");
	scanf_s("%f", &n);

	if (n < 0 || fmod(n, 1) != 0)
	{
		printf("\nNhap so n nguyen duong.");
		goto MrC;
	}
	
	s = 0;
	for (int i = 0; i <= n; i++)
	{
		s = s + pow(-1.0, i)*pow(x, 2 * i + 1) / (2 * i + 1);

	}
	s = PI/2 - s;

	printf("\nTong: %0.3f", s);

	_getch();
	return 0;

}
