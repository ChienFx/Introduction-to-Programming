#include <stdio.h>
#include <conio.h>
#include <math.h>

int doixung(int);
int gandoixung(int);
int suadoixung(int);
int  tongnhohon10(int);
int MaxN(int);
int MinN(int);

int main()
{
	int n;
	printf("\nnhap n:");
	scanf_s("%d", &n);
	if (doixung(n)) printf("\n%d la so doi xung.",n);
	else
	{
		if (gandoixung(n)) printf("\n%d la so doi xung.",n);
		printf("\nSua lai de dc so doi xung: %d\n", suadoixung(n));
	}
	printf("\nTong cac chu so tu TRAI qua Phai nho hon 10 cau %d la: %d",n, tongnhohon10(n));

	printf("\nchu so lon nhat trong %d : %d ", n, MaxN(n));
	printf("\nchu so nho nhat trong %d : %d ", n, MinN(n));
	_getch();
	return 0;
}

int doixung(int n)
{
	int Temp = n % 10,t2=n;
	n /= 10;
	while (n > 0)
	{
		Temp = Temp * 10 + (n % 10);
		n /= 10;
	}
	if (t2 == Temp) return 1;
	return 0;
}
int gandoixung(int n)
{
	
		int a[100], dem = 0;
		if (n < 0) n = -n;
		int temp = n;

		while (temp > 0)
		{
			a[dem] = temp % 10;
			temp = temp / 10;
			dem++;
		}

		for (int i = 0; i < dem / 2 + 1; i++)
		if (a[i] == a[dem - i - 1])
		{
			return 1;
		}
		return 0;
}
int suadoixung(int n)
{

	int a[100], dem = 0,s = 0;
	if (n < 0) n = -n;
	int temp = n;

	while (temp > 0)
	{
		a[dem] = temp % 10;
		temp = temp / 10;
		dem++;
	}

	for (int i = 0; i < dem / 2 + 1; i++)
	if (a[i] != a[dem - i - 1])
	{
		a[i] = a[dem - i - 1];
	}
	for (int i = 0; i < dem; i++)
	{
		s = s * 10 + a[i];
	}
	return s;
}
int tongnhohon10(int n)
{

	int a[100], dem = 0, s = 0;
	if (n < 0) n = -n;
	int temp = n;

	while (temp > 0)
	{
		a[dem] = temp % 10;
		temp = temp / 10;
		dem++;
	}

	int i = dem-1;
	while (i >=0 && (s + a[i] < 10))//chay nguoc
	{
		s = s + a[i];
		i--;
	}
	return s;
}



int MaxN(int n)
{
	if (n < 0)n = -n;
	int Max = 0;
	while (n > 0)
	{
		int temp = n % 10;
		if (temp > Max) Max = temp;
		n /= 10;
	}
	return Max;
}
int MinN(int n)
{
	if (n < 0) n = -n;
	int Min = 9;
	while (n > 0)
	{
		int temp = n % 10;
		if (temp < Min) Min = temp;
		n /= 10;
	}
	return Min;
}