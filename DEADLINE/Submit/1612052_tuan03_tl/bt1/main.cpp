#include <stdio.h>
#include <conio.h>

int Tang(int);
int Giam(int);
int main()
{
	int n;
MrC:

	printf("\nnhap n:");
	scanf_s("%d", &n);
	if (n < 0)
	{
		printf("\nYeu cau nhap so nguyen duong!!");
		goto MrC;
	}
	if (n<10 && n>-10) printf("%d la so Vua Tang Vua giam!!",n);
	else

	if (Tang(n))
		printf("%d la so TANG tu trai qua phai",n);
	else if (Giam(n))
		printf("%d la so GIAM tu trai qua phai",n);
	else 
		printf("%d la so Khong tang cung Khong giam!!!",n);
	_getch();
	return 0;
}

int Tang(int n)
{
	int temp = n % 10;
	n /= 10;
	while (n>0)
	{
		
		if ( n % 10 >= temp) return 0;
		temp = n % 10;
		n /= 10;
	}
	return 1;
}

int Giam(int n)
{
	int temp = n % 10;
	n /= 10;
	while (n>0)
	{

		if (n % 10 <= temp) return 0;
		temp = n % 10;
		n /= 10;
	}
	return 1;
}