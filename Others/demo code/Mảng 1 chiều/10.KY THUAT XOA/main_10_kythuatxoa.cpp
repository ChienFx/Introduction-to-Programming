										/* 10 - KỸ THUẬT XÓA */
#include <stdio.h>
#include <conio.h>
#include "kythuatxoa.h"

#define MAX 100

int main()
{
	int a[MAX], n;
	float f[MAX];
MrC:
	NhapMangNguyen(a,n);
	XuatMangNguyen(a,n);

	//xoaphantu(a,n);
	//XoaLonNhat(a,n);
	//XoaSoAm(a,n);
	//xoasochan(a,n);
	//XoaChinhPhuong(a,n);
	//xoaSNT(a,n);
	XoaTrung(a,n);

	printf("\nCo tiep tuc ko (C): ");
	char tiep = getch();
	if(tiep == 'c' || tiep == 'C') goto MrC;
	return 0;
}