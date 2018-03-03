//8.Viết chương trình nhập vào N rồi tính giai thừa của N.
#include <stdio.h>
#include <conio.h>
void main()
{
	int n,i,gthua=1; 
	printf("Nhap n=");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
		gthua=gthua*i;
	printf("%d!= %d",n,gthua);
	getch();
}
