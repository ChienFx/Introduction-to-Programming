#include "bai6.h"

//int main()
//{
//	int n;
//	long Giaithua;
//	do{
//		printf("\nNhap n:");
//		scanf_s("%d", &n);
//	} while (n <= 0);
//	Giaithua = TinhGiaiThuaChanLe(n);
//	printf("\n %d!! = %ld", n, Giaithua);
//	_getch();
//	return 0;
//}
#include<stdio.h>
#include<conio.h>
void main()
{
	char x;
	int tong = 0, number;
	do 
	{
		printf("nhap number: ");
		scanf_s("%d", &number);
		tong = tong + number;
		fflush(stdin);
		printf("ban co muon nhap (y/n):");
		scanf_s("%c", &x);
	} while (x == 'y');
	_getch();


}