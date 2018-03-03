#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include "demostruct.h"

void nhapds(nhanvien list[], int n)
{
	for (int i = 0; i < n; i++)
	{
		printf("\nMsnv:");
		gets_s(list[i].msnv);
		printf("Ten:");
		gets_s(list[i].ten);
	}
}
void xuatds(nhanvien list[], int n)
{
	printf("MSVS   TEN\n");
	for (int i = 0; i < n; i++)
	{
		printf("%s    %s\n", list[i].msnv, list[i].ten);
	}
}

nhanvien setnv()
{
	nhanvien nv;
	printf("\nMSNV:");
	gets_s(nv.msnv);
	printf("\Ten:");
	gets_s(nv.ten);
	return nv;
}