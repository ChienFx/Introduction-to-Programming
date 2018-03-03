//22.Viết chương trình tìm các số nguyên gồm 3 chữ số sao cho tích của 3 chữ số bằng tổng 3 chữ số. Ví dụ: 1*2*3 = 1+2+3.
#include <stdio.h>
#include <conio.h>
void main()
{
 int n,i,a,b,c; // a,b,c lần lượt là chữ số hàng trăm, hàng chục, hàng đơn vị
 
 for (n=100;n<=999;n++)
 { 
	 i=n;
	 a=i/100;
	 i=i%100;
	 b=i/10;
	 c=i%10;
	 if (a+b+c==a*b*c) printf("%d  ",n); 
 }

 //printf(" %d %d %d",a,b,c);
 getch();
}