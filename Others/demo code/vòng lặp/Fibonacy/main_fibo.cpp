/*13.Viết chương trình tính số hạng thứ n của dãy Fibonaci.
Dãy Fibonaci là dãy số gồm các số hạng p(n) với:
p(n) = p(n-1) + p(n-2) với n>2 và p(1) = p(2) = 1
Dãy Fibonaci sẽ là: 1 1 2 3 5 8 13 21 34 55 89 144… */

#include <stdio.h>
#include <conio.h>
void main()
{
 
 int i,a1=1,a2=2,s=a1+a2,n;
 printf("So Fibonacy thu: ");
 scanf("%d",&n);
 if(n==1||n==2) s=1;

 for(i=4;i<=n-1;i++)// đã biết 3 số đầu rồi nên chạy từ st 4
 {
	 a1=a2;
	 a2=s;
	 s=a1+a2;
 }
 printf("la %d",s);
 getch();
}