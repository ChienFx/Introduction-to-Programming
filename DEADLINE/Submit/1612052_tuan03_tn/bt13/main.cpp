#include <stdio.h>
#include <conio.h>
#include <math.h>
int main()
{
	float n, x, tam = 1;
	double s;
	int j = 1,temp=1;

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
	s = x;

	for (int i = 1; i <= n; i++)
	{
		j++;
		temp = temp*j*(j+1);
		j++;
		s = s + pow(-1.0, i)*pow(x, 2 * i + 1) / temp;
	}

	printf("\nTong: %0.3f", s);

	_getch();
	return 0;

}
