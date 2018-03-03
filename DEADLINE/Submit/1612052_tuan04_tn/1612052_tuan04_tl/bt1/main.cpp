#include <stdio.h>
#include <conio.h>
#include <math.h>

int isPrime(int);
void thuasoNT(int);
void printLeft(int);
void printRight(int);
int dem(int);
void cau5(int);
int main()
{
	/*int n;
	printf("\nNhap so n:");
	scanf_s("%d", &n);
	if (isPrime(n)) printf("%d la SO NGUEN TO.",n);
	else printf("%d KHONG la so nguyen to.", n);
	thuasoNT(n);
	printLeft(n);
	printRight(n);
	cau5(n);*/
	double m;
	long tmp;
	int k;
	printf("\nNhap so m:");
	scanf_s("%lf", &m);
	printf("\nNhap so k:");
	scanf_s("%d", &k);
	
	tmp = (long)m; //lấy phần nguyên của m;
	double thphan = m - tmp;
	
	for (int i = 1; i <= k;i++)
		thphan *= 10;


	printf("%d", (long)thphan);
	_getch();
	return 0;
}

int isPrime(int n)
{
	if (n < 2) return 0;
	if (n == 2) return 1;
	for (int i = 2; i <= sqrt((float)n);i++)
	if (n%i==0)
	{
		return 0;		
	}
	return 1;
}
void thuasoNT(int n)
{
	int i = 2;
	printf("\nthua so nguyen to: %d = ",n);
	if (n % 2 == 0)
	{
		printf("2");
		n = n / 2;
	}
	if (isPrime(n))
		printf("%d", n);
	else
	for (int i = 2; i <= n; i++)
	{
		while (n % i == 0)
			{
				if (isPrime(i))
				{
					printf("*%d", i);
					n = n / i;
				}
			}	
	}
}
int dem(int n)
{
	int tmp = 0;
	while (n > 0)
	{
		tmp = tmp + 1;
		n = n / 10;
	}
	return tmp;
}
void printLeft(int n)
{
	int sl = dem(n),tmp;
	printf("\nTu trai qua phai: ");
	for (int i = sl; i >= 1; i--)
	{
		tmp = (n / (int)pow(10.0, i-1));
		printf("%d  ", tmp);
		n = n - tmp*pow(10.0,i-1);
	}
}

void printRight(int n)
{
	printf("\nTu phai qua trai: ");
	while (n > 0)
	{
		printf("%d  ", n % 10);
		n /= 10;
	}
}

void cau5(int n)
{
	printf("\nCac bo so thoa a^2 + b^2 < %d (a <> b):", n);
	for (int i = -n; i <= n;i++)
	for (int j = -n; j <= n;j++)
	if (i != j && (i*i + j*j) < n)
		printf("\n%2d   %2d", i, j);
}