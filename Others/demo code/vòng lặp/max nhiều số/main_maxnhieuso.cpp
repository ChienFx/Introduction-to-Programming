//7.Viết chương trình nhập vào N số nguyên, tìm số lớn nhất, số nhỏ nhất.
#include <stdio.h>
#include <conio.h>
void main()
{
	int n,i,so,max=0,min=9999; 
	printf("Nhap n=");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		printf("So hang thu %d: ",i);
		scanf("%d",&so);
		if (so>= max) max=so;
		if (so<= min) min=so;
	}
	printf("Max: %6d\nMin: %6d",max,min);
	getch();
}
