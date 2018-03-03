//Chuong trinh in ra tam giac can.
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
 //for(i=1;i<=n;i++)
 //{
 // for(j=1;j<=n-i;j++)
 // {
 //  printf(" ");
 // } // Thoat khoi vong lap thi j dang o vi tri n-i+1

 // for(j=1;j<=2*i-1;j++)
 // {
 //  printf(".");
 // }

 // printf("\n");
 //}

 // CODE 2
 for(i=1;i<=n;i++)
 {
	 for(j=-10;j<=2*n;j++)
		 if (j>=n-i+1 && j<=n-i+1+2*i-1-1)
			 printf(".");
		 else printf(" ");
	 printf("\n");
 }
 getch();
}