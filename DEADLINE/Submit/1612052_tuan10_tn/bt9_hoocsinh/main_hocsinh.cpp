#include "hocsinh.h"

void main()
{
	hs a[MAX];
	int n;
	do
	{
		printf("\nNhap so hoc sinh: ");
		scanf_s("%d", &n);
	} while (n<1 || n>MAX);
	//NhapHS(p, "*Nhap thong tin hoc sinh:\n");
	//XuatHS(p, "*HOC SINH*");
	NhapMangHS(a,n, "*Nhap DS hoc sinh*\n");
	XuatMangHS(a,n, "\n*HOC SINH\n*");
	_getch();
}