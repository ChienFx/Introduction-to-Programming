//Viết hàm tính a^b;_hàm này đã có trong thư viện <math.h>____pow(a,b);
#include <stdio.h>
#include <conio.h>

int power(int,int);   // Khai báo prototype Chỉ có Kiểu dữ liệu

int power(int a,int b)
{
	int i,p=1;
	for(i=1;i<=b;i++)
		p*=a;			//p=p*a;
	return p;
}

void main(void)
{
	printf("4^3= %d",power(4,3));
	getch();
}