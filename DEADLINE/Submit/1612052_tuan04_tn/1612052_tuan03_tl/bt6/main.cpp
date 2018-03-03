/*bai 06. Kiểm tra 1 số có phải là số nguyên tố không.*/
#include <stdio.h>
#include <conio.h>
#include <math.h>

int isPrime(int);
int main()
{
	int n;
	printf("\nnhap n:");
	scanf_s("%d", &n);

	if (isPrime(n))
	{
		printf("%d la SO NGUYEN TO",n);
	}
	else printf("%d la KHONG phai so nguyen to",n);
	_getch();
	return 0;
}
int isPrime(int n)
{
	if (n < 2) return 0;
	if (n == 2) return 1;
	for (int i = 2; i <= sqrt(n+0.0); i++)
	if (n%i==0)
	{
		return 0;
	}
	return 1;
}