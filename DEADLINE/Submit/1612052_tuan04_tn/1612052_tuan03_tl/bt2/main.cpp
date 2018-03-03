#include <stdio.h>
#include <conio.h>

int ToanLe(int);
int ToanChan(int);
int SoDao(int);

int main()
{
	int n;
	printf("\nnhap n:");
	scanf_s("%d", &n);
	if (n < 0)
	{
		printf("\nYeu cau nhap so nguyen duong!!");
		return 0;
	}
	if (SoDao(n) == n)
	{
		if (ToanChan(n))
			printf("\nSo vua DOI XUNG vua toan so CHAN");
		else if(ToanLe(n))
			printf("\nSo vua DOI XUNG vua toan so LE");
		else printf("\nSo DOI XUNG.");
	}
	else
	{
		if (ToanChan(n))
			printf("\nSo TOAN CHAN");
		else if (ToanLe(n))
			printf("\nSo TOAN LE");
		else printf("\nKHONG CO TINH CHAT GI.");
	}
	
	_getch();
	return 0;

}
int ToanLe(int n)
{
	if (n<0) n = -n;
	while (n>0)
	{

		if (n % 2==0) return 0;
		n /= 10;
	}
	return 1;
}
int ToanChan(int n)
{
	if (n<0) n = -n;
	while (n>0)
	{

		if (n % 2 != 0) return 0;
		n /= 10;
	}
	return 1;
}
int SoDao(int n)
{
	if (n<0) n = -n;
	int Temp = n%10;
	n /= 10;
	while (n > 0)
	{
		Temp = Temp * 10 + (n % 10);
		n /= 10;
	}
	return Temp;
}