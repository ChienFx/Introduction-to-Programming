#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <math.h>
#include "struct_header.h"	
//Bai tap lap struct don thuc p(n) = a.x^n;
int Tinhgiaithua(int a);
int Tinhgiaithua(int a)
{
	int GT = 1;
	for (int i = 1; i <= a; i++)
	{
		GT = GT*i;
	}
	return GT;
}
int main()
{
	DONTHUC p1,p2,P,dham;
	p1 = nhapdonthuc();
	p2 = nhapdonthuc();

	P = tich2(p1, p2);
	dham = daoham(P);
	printf("\nP1:");
	xuatdonthuc(p1);
	printf("\nP2:");
	xuatdonthuc(p2);
	printf("\nP = P1 * P2 = ");
	xuatdonthuc(P);
	printf("\nP = P1 / P2 = ");
	xuatdonthuc(thuong(p1, p2));
	printf("\nP dao ham = ");
	xuatdonthuc(dham);
	printf("\nP dao ham cap 3 = ");
	xuatdonthuc(daohamk(P, 3));
	/*double t = tich(p1, p2,5);
	printf("\n Tich cua 2 don thuc tren la: %0.5f", t);*/


	_getch();
	return 0;
}