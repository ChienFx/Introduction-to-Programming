#include <stdio.h>
#include <conio.h>
#include <math.h>
int main()
{
	float n;
	float s = 1, mau = 1;
MrC:

	printf("\nNhap n:");
	scanf_s("%f", &n);
	if (n < 0 || fmod(n,1) != 0)
	{
		printf("\nNhap so nguyen duong!!");
		goto MrC;
	}

	for (int i = 1; i <= n; i++)
	{
		mau = mau*i;
		s = s + 1/(mau);
	}

	printf("\nTong: %0.3f", s);

	_getch();
	return 0;

}
