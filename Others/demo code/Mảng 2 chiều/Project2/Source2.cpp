#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <time.h>
#define MAX 100
void NhapMang(int a[][MAX],int &n)
{
	srand(time(0));// khởi tạo giá trị random khác nhau theo thời gian
	int i,j;
	do
	{
		printf("Chi so mang vuong: ");
		scanf("%d",&n);
	}while(n < 0 || n > MAX);

	for(i = 0;i < n;i++)
		for(j = 0;j < n;j++)
		{
			//printf("a[%d][%d]:",i,j);
			//scanf("%d",&a[i][j]);
			a[i][j] = rand()%10; // Random trong khoảng [0;10]
		}
}
void XuatMang(int a[][MAX], int n)
{
	int i,j;
	printf("Mang:\n");
	for(i=0;i < n; i++)
	{
		for(j = 0; j < n; j++)
			printf("%3d ",a[i][j]);   // %3d: viết canh phải cho thẳng hàng
		printf("\n\n");
	}
}
/* 
Bài 2: Nhập ma trận A(n,n) có n dòng, n cột gồm các phần tử là số nguyên. Hãy biến đổi ma trận theo qui luật sau:
+ Các phần tử lớn hơn 5 thay bằng số 1
+ Các phần tử nhỏ hơn hoặc bằng 5 thay bằng số 0
Hiện ma trận trước và sau khi biến đổi. Sau biến đổi, nếu coi mỗi phần tử A[i][j] = 1 của ma trận thể hiện có đường
đi tử từ thành phố i đến j. Nhập vào 2 số nguyên dương x,y (1<=x<=n; 1<=y<=n) Hỏi có bao nhiêu đường đi ra từ thành 
phố x, và có bao nhiêu đường đi vào thành. phố y */
// Giải quyết: Bài toán trở thành tìm trên hàng x xem có bao nhiêu số a[x][i] = 1 và tương tự với cột y
void XuLi(int a[][MAX],int n)
{
	int i,j,x,y,dem1=0,dem2=0;
	for(i = 0; i < n; i++)
		for(j = 0;j < n; j++)
			if(a[i][j] > 5 ) 
			{
				a[i][j] = 1;
			}
			else a[i][j] = 0;
	XuatMang(a,n);
	do
	{
		printf("Nhap x=");
		scanf("%d",&x);
		printf("Nhap y=");
		scanf("%d",&y);
	}while(x < 1 || x > n || y < 1 || y > n);

	for(j = 0; j < n; j++)
		if(a[x][j] == 1) dem1++;
	printf("\nCo %d duong ra tu thanh pho %d",dem1,x);
	
	for(i = 0; i < n; i++)
		if(a[i][y] == 1) dem2++;
	printf("\nCo %d duong den thanh pho %d",dem2,y);
}

int main()
{
	int a[MAX][MAX],n;
	NhapMang(a,n);
	XuatMang(a,n);
	XuLi(a,n);
	getch();
	return 0;
}