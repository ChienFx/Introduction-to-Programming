#include <stdio.h>
#include <conio.h>
#include <time.h>
#include <stdlib.h>
#include <amp_graphics.h>
#include "xulimangcon.h"
#define MAX 100


int main()
{
	int a[MAX],n;
//	float f[MAX];
MrC:
	NhapMangNguyen(a,n);
	XuatMangNguyen(a,n);
	//lietkecon(a,n);
	//conlonhon2(a,n);
	daycontang(a,n);

	printf("\nTiep tuc khong ? : ");
	char tiep = getch();
	if( tiep == 'c' || tiep == 'C') goto MrC;
	return 0;
}