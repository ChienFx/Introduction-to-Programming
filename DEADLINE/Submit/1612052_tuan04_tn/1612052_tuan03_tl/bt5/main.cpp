/*bai 05. Tìm BSCNN của 2 số nguyên dương a, b.*/
#include <stdio.h>
#include <conio.h>
int UCLN(int, int);
int BSCNN(int, int);
int main()
{
	int a,b;
	printf("\nnhap a:");
	scanf_s("%d", &a);
	printf("\nnhap b:");
	scanf_s("%d", &b);
	if (a < 0 || b < 0)
	{
		printf("\nYeu cau nhap so nguyen duong!!");
		return 0;
	}
	printf("BSCNN cua %d va %d la: %d",a,b, BSCNN(a,b));
	_getch();
	return 0;
}
int UCLN(int a, int b)
{
	if (a<0) a = -a; if (b<0) b = -b;
	while (a != b)
	{
		(a > b) ? a = a - b : b = b - a;
	}
	return a;
}
int BSCNN(int a, int b)
{
	if (a<0) a = -a; if (b<0) b = -b;
	return  (a*b)/UCLN(a, b);
}