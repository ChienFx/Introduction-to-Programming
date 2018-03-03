#include "func.h"
//Bai tap lap struct don thuc p(n) = a.x^n;


DONTHUC nhapdonthuc()
{
	DONTHUC p;
	printf("\nNhap he so a: ");
	scanf_s("%f", &p.a);

	printf("\nNhap so mu n: ");
	scanf_s("%d", &p.n);
	return p;
}

void xuatdonthuc(DONTHUC p)
{
	printf("%0.2fx^%d",p.a,p.n);
}

double tich(DONTHUC p1, DONTHUC p2,float x)//trả về giá trị thực
{
	double s;
	s = (p1.a)*pow(x, p1.n) * (p2.a)*pow(x, p2.n);
	return s;
}

DONTHUC tich2(DONTHUC p1, DONTHUC p2)//tích ra dạng đơn thức
{
	DONTHUC P;
	P.a = p1.a * p2.a;
	P.n = p1.n + p2.n;
	return P;
}
DONTHUC daoham(DONTHUC p)
{
	DONTHUC temp;
	temp.a = p.a*(p.n);
	temp.n = p.n - 1;
	return temp;
}
DONTHUC thuong(DONTHUC p1, DONTHUC p2)
{
	DONTHUC p;
	if (p2.a == 0)
	{
		printf("\nKHONG THE CHIA !!!");
		p.a = 0;
		p.n = 0;
	}
	else
	{
		p.a = p1.a / p2.a;
		p.n = p1.n - p2.n;
	}
	return p;
}
DONTHUC daohamk(DONTHUC p, int k)
{
	DONTHUC temp = p;
	int dem = 1;  
	while (dem <= k)
	{
		temp = daoham(temp);
		dem++;
	}
	return temp;
}