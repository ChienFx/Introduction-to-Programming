#include <stdio.h>
#include <conio.h>
#include <math.h>
int main()
{
	float n, x, tam = 1;
	double s;
MrC:
	printf("\nnhap x:");
	scanf_s("%f", &x);
	printf("\nnhap n:");
	scanf_s("%f", &n);

	if (n < 0 || fmod(n, 1) != 0 || x<-1 || x>1)
	{
		printf("\nNhap so n nguyen duong va -1 < x < 1.");
		goto MrC;
	}
	s = 0;

	for (int i = 1; i <= n; i++)
	{
		s = s + pow(-1.0, i + 1)*pow(x, 2 * i - 1) / (2 * i + 1);
	}

	printf("\nTong: %0.3f", s);

	_getch();
	return 0;

}
