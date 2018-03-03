#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <time.h>
#define MAX 10
void NhapMang(int a[][MAX],int &m,int &n )// m dòng, n cột
{
	srand(time(0));// khởi tạo giá trị random khác nhau theo thời gian
	int i,j;
	do
	{
		printf("Nhap so hang: ");
		scanf("%d",&m);
		printf("Nhap so cot: ");
		scanf("%d",&n);
	}while(n < 0 || n > MAX || m < 0 || m > MAX);

	for(i = 0;i < m;i++)
		for(j = 0;j < n;j++)
		{
			//printf("a[%d][%d]:",i,j);
			//scanf("%d",&a[i][j]);
			a[i][j] = 2+rand()%(7-2+1); // Random trong khoảng [1;5]
		}
}
void XuatMang(int a[][MAX], int m,int n)
{
	int i,j;
	printf("\nMang:\n");
	for(i = 0; i < m; i++)
	{
		for(j = 0; j < n; j++)
			printf("%3d ",a[i][j]);   // %3d: viết canh phải cho thẳng hàng
		printf("\n\n");
	}
}
/* Bài 4 :Cho ma trận số thực A(M,N) . Tìm các phần tử x có giá trị tuyệt đối lớn nhất của 
ma trận ( nêu rõ chỉ số hàng và chỉ số cột của nó ) . Lập ma trận B(M-1,N-1) bằng cách từ 
ma trận A(M,N) bỏ đi hàng và cột chứa 1 phần tử x tìm được có tổng chỉ số hàng và cột 
nhỏ nhất. */

int MaxMang(int a[MAX][MAX], int dong,int cot)
{
	int i,j,max = -99999;
	for(i = 0; i < dong; i++)
		for(j = 0; j < cot; j++)
			if(a[i][j] > max) max=a[i][j];
	return max;
}


void XuLi(int a[][MAX],int b[MAX][MAX], int m, int n) // m dòng, n cột
{
	int i,j,max, tongchiso=99999, maxdong,maxcot;
	max = MaxMang(a,m,n);
	for(i = 0; i < m; i++)
		for(j = 0; j < n; j++)
			if(a[i][j] == max)
			{
				if( i + j < tongchiso) 
				{
					tongchiso = i+j;
					maxdong = i;
					maxcot = j;
				} 
			}
	printf("\nMax: %d",max);
	printf("\nMax dong: %d",maxdong);
	printf("\nMax cot: %d",maxcot);
	// Tiếp theo phải xóa các phần tử ở dong maxdong,cột maxcot
	//Xóa hàng trước
	for( i = maxdong; i < m; i++)
			for(j = 0; j < n; j++)
				a[i][j] = a[i+1][j];
	//Xóa cột
	for(i = 0; i < m; i++)
		for(j = maxcot; j < n; j++)
			a[i][j] = a[i][j+1];
	printf("\nSau khi xoa hang va cot a[%d][%d]",maxdong,maxcot);
	XuatMang(a,m-1,n-1);
}

int main()
{
	int a[MAX][MAX],b[MAX][MAX],dong,cot;
	NhapMang(a,dong,cot);
	XuatMang(a,dong,cot);
	XuLi(a,b,dong,cot);
	getch();
	return 0;
}