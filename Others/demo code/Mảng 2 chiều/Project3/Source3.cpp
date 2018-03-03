#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <time.h>
#define MAX 10
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
	for(i=1;i <= n; i++)
	{
		for(j = 1; j <= n; j++)
			printf("%3d ",a[i][j]);   // %3d: viết canh phải cho thẳng hàng
		printf("\n\n");
	}
}
/*Bài 3:Lập chương trình nhập danh sách các con đường đi từ mỗi thành phố i tới các 
thành phố j ( 1<= i <= M ; 1 <= j <= N ) theo qui cách : mỗi lần nhập số i trước , tiếp 
theo là nhập các số j . Nếu nhập j=0 thì coi nhưnhập xong các đường từ i tới j . Nếu nhập 
i=0 thì coi nhưnhập xong toàn bộ danh sách . 
Nhập xong hãy hiện ma trận kề của đồ thị các con đường này : nếu có con đường đi từ 
thành phố i tới thành phố j thì A[i,j]=1, ngược lại nếu không có thì A[i,j]=0 
*/
void XuLi(int a[MAX][MAX],int &n)
{
	int i,j;
	do
	{
		printf("Chi so mang vuong: ");
		scanf("%d",&n);
	}while(n < 0 || n > MAX);

	for(i = 1; i <= n; i++)
		for(j = 1; j <= n; j++) 
			a[i][j]=0;
	do
	{
		printf("Nhap dinh i = ");
		scanf("%d",&i);
		if( i == 0 || i > n) break;
		do
		{
			printf("j= ");
			scanf("%d",&j);
			a[i][j] = 1;
		}while( j != 0 );

	}while(i != 0);
	XuatMang(a,n);
}

int main()
{
	int a[MAX][MAX],n;
	XuLi(a,n);
	getch();
	return 0;
}