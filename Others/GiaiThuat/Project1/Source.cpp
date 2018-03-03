//#include"bt1.h"
#include<stdio.h>
#include<conio.h>
int ucln(int a, int b);
struct phanso {
	int tu;
	int mau;
};
phanso nhapphanso(char s[100])
{
	phanso a;
	printf("\nNhap tu so: ");
	scanf_s("%d", &a.tu);
	printf("\nNhap mau so: ");
	scanf_s("%d", &a.mau);
	return a;
}
void xuatphanso(phanso a)
{
	if (a.tu == 0)
		printf("\nPhan so:0");
	if (a.mau == 1)
		printf("\nPhan so:%d", a.tu);
	if (a.tu == a.mau)
		printf("\nPhan so:1");
	if (a.tu != a.mau)
		printf("\nPhan so:%d/%d", a.tu, a.mau);
}
phanso rutgon(phanso &a)
{
	int UCLN = ucln(a.tu, a.mau);
	a.tu /= UCLN;
	a.mau /= UCLN;
	return a;
}
int ucln(int a, int b)
{
	while (a != b)
	{
		if (a > b)
		{
			a = a - b;
		}
		if (b > a)
		{
			b = b - a;
		}
	}
	return a;
}

void main()
{
	phanso a;
	a = nhapphanso("phan so a: ");
	xuatphanso(a);
	a = rutgon(a);
	xuatphanso(a);
	_getch();
}