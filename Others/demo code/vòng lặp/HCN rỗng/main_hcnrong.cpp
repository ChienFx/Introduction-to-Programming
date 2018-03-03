//11.Viết chương trình vẽ hình chữ nhật rỗng bằng các dấu *.
#include <stdio.h>
#include <conio.h>
void main()
{
 int dai,rong,i,j;
 printf("nhap chieu dai:");
 scanf("%d",&dai);
 printf("nhap chieu rong:");
 scanf("%d",&rong);

 for (i=1;i<=rong;i++)
 {
	 if (i==1 || i==rong) 
		 for (j=1;j<=dai;j++) printf("*");
	 else 
	     for (j=1;j<=dai;j++)
		 {
			 if(j==1 || j==dai) printf("*");
			 else printf(" ");
		 }
		 printf("\n");
 }
 getch();
}