#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <time.h>
#define MAX 100
void NhapMang(int a[MAX][MAX],int &n )
{
	int i,j,dong,cot,s;
	do
	{
		printf("Nhap chi so mang vuong: ");
		scanf("%d",&n);
	}while(n < 0 || n > MAX );

	dong = 0;
	cot = n-1;
	s=0;
	if(n%2 == 1) a[n/2][n/2]=n*n;//với N lẻ ko chạy đc vòng lặp để điền số N^2 nên phải gán giá trị N^2 này vào a[n/2][n/2] - phần tử chính giữa
	while (dong<=cot)			// điều kiện dừng
	{
		
		for(j = dong; j <= cot - 1; j++)
			if (s >= n*n) break;
			else a[dong][j] = ++s;				// ++s tang tuoc

		for(i = dong; i <= cot -1; i++)
			if (s >= n*n) break;
			else a[i][cot] = ++s;

		for(j = cot; j >= dong + 1; j--)
			if (s >= n*n) break;
			else a[cot][j] = ++s;

		for(i = cot; i >= dong + 1; i--)
			if (s >= n*n) break;
			else a[i][dong] = ++s;
		dong++;
		cot--;
	}
}
void XuatMang(int a[MAX][MAX], int n)
{
	int i,j;
	printf("\nMang:\n");
	for(i = 0; i < n; i++)
	{
		for(j = 0; j < n; j++)
			printf("%3d ",a[i][j]);   // %3d: viết canh phải cho thẳng hàng
		printf("\n\n");
	}
}
/* Bài 5 :Hình xoắn ốc . Nhập số tự nhiên N , tạo bảng vuông NxN các số 1,2,3,....N^2 theo hình xoắn ốc */

int main()
{
	int a[MAX][MAX],n;
	NhapMang(a,n);
	XuatMang(a,n);
	getch();
	return 0;
}