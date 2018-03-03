#include <stdio.h>
#include <conio.h>

int ucln(int, int);
int main()
{
	int a, b,i,j,uc;
	printf("\nNhap a: "); scanf_s("%d", &a);
	printf("\nNhap b: "); scanf_s("%d", &b);
	uc = ucln(a, b);
	printf("\n USCLN(%d,%d) =  %d", a, b, uc);
	printf("\nMot trong nhung bo (x,y) thoa %d*x + %d*y = %d:", a, b, uc);
	for (int i = -2 * a; i <= 2 * a; i++)
	{
		for (int j = -2 * b; j <= 2 * b; j++)
		if ((a*i + b*j) == uc)
		{
			printf("\n  %2d     %2d", i, j);
			i = 2 * a + 1;
			j = 2 * b + 1;//out ra khỏi 2 vòng lặp
		}
	}
	_getch();
	return 0;
}

int ucln(int a, int b)
{
	while (a != b)
		(a > b) ? a -= b : b -= a;
	return a;
}