//10.Viết chương trình vẽ một tam giác cân rỗng bằng các dấu *.
#include <stdio.h>
#include <conio.h>
void main()
{
// clrscr();
 int n,i,j; /*n: tong so dong
	     i: bien chay tung dong
	     j: bien chay de ve
	     -  o dong thu i se ve (2*i-1) dau"*" bau dau tu vi tri thu
		n-i+1;
		*/
 printf("Chuong trinh in ra tam giac can.\nNhap so dong:");
 scanf("%d",&n);
 // CODE 2 code dở, rebuild từ bài in tam giác
 for(i=1;i<=n;i++)
 {
	 if(i==n)					// nếu cuối dòng thì in đủ 2*n-1 "*"
	  for (j=1;j<=2*n-1;j++)
		  printf("*");
	 else 
	 for(j=1;j<=2*n;j++)
		 if (j==n-i+1 || j==n-i+1+2*i-1-1)
			 printf("*");
		     else if(j>n-i+1 && j<n-i+1+2*i-1-1)
				printf(" ");
				   else printf(" ");
	 printf("\n");
 }
 getch();
}