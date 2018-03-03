#include <stdio.h>
#include <conio.h>
#include <math.h>
int main()
{
	float n, x, mau = 1;
	float tu, s = 0;
	int j = 0;
MrC:

	printf("\nNhap n:");
	scanf_s("%f", &n);
	printf("\nNhap x:");
	scanf_s("%f", &x);

	if (n < 0 || fmod(n, 1) != 0)
	{
		printf("\nNhap so nguyen duong!!");
		goto MrC;
	}
	s = 1;
	for (int i = 1; i <= n; i++)
	{
		tu = pow(-1.0, i) * pow(x, 2 * i);
		mau = mau*(j + 1)*(j + 2);
		j += 2;
		s = s + tu / mau;
	}

	printf("\nTong: %0.3f", s);

	_getch();
	return 0;

}
