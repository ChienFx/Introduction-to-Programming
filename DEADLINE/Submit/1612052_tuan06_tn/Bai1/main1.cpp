#include "bai1.h"

int main()
{
	int n, dem, tong;
	printf("\nNhap n:");
	scanf_s("%d", &n);

	XuLiUoc(n, tong, dem);
	printf("\nSo Uoc: %d", dem); 
	printf("\nTong cac  Uoc: %d", tong);


	_getch();
	return 0;
}