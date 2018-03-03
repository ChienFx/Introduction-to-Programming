#include <stdio.h>
#include <conio.h>
#include <math.h>
int main()
{
	float n, x, mau,tu, tam,s;
MrC:
	printf("\nnhap x:");
	scanf_s("%f", &x);
	printf("\nnhap n:");
	scanf_s("%f", &n);
	if (n < 0 || fmod(n, 1) != 0)
	{
		printf("\nNhap so nguyen duong!!");
		goto MrC;
	}
	s = 1;
	mau = 1;
	tam = n + 1;
	tu = 1;
	for (int i = 1; i <= n; i++)
	{
		tam = tam - 1;
		tu = tu * tam * x;
		mau = mau*i;
		s = s + tu / mau;
	}

	printf("\nTong: %0.3f", s);

	_getch();
	return 0;

}
