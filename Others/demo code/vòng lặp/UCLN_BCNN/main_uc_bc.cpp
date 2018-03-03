//9.Viết chương trình tìm USCLN, BSCNN của 2 số.
#include <stdio.h>
#include <conio.h>
void main()
{
 int m,n,t,x;  // BCLN=m*n/ucln

 printf("nhap m=");
 scanf("%d",&m);

 printf("nhap n=");
 scanf("%d",&n);
 x=m*n;
 if(m<n) 
 {
	 t=m;
	 m=n;
	 n=t;
 }
// if (n!=0)

 for(;;)
 {
	 if(n==m) break;
	 t=m;
	 m=n;
	 n=t-n;
 }
 printf("UCLN: %d", m);
 getch();
}