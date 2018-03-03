//Project 1 Mang 2 chiều
#include <stdio.h>
#include <conio.h>
#define MAX 100
void NhapMang(int a[MAX][MAX],int &dong,int &cot)	// THAM BIEN
{
	int i,j;
	do
	{
		printf("Nhap so dong:");
		scanf("%d",&dong);
		printf("Nhap so cot:");
		scanf("%d",&cot);
	}while(cot < 0 || cot > MAX || dong < 0 || dong > MAX);

	for(i=0;i<dong;i++)
		for(j=0;j<cot;j++)
		{
			printf("Nhap a[%d,%d]: ",i,j);
			scanf("%d",&a[i][j]);
		}
}
void XuatMang(int a[MAX][MAX],int dong,int cot)
{
	int i,j;
	printf("Mang:\n");
	for(i=0;i<dong;i++)
	{
		for(j=0;j<cot;j++) printf("%d  ",a[i][j]);
		printf("\n");
	}
	printf("\n");
}
int MinMang(int a[MAX][MAX], int dong,int cot)
{
	int i,j,min=99999;
	for(i=0;i<dong;i++)
		for(j=0;j<cot;j++)
			if(a[i][j]<min) min=a[i][j];
	return min;
}

//Bài 1: Cho ma trận vuông A(N,N) . Lập ma trậnn B là ma trận chuyển vị của ma trận A (nghĩa là B[i,j]=A[j,i], 1<= i,j <= N )
void ChuyenVi(int a[MAX][MAX],int b[MAX][MAX],int &n)
{
	int i,j;
	for(i=0;i<n;i++)
		for(j=0;j<n;j++)
			b[j][i]=a[i][j];
}
/* 
Bài 2: Nhập ma trận A(m,n) có m dòng, n cột gồm các phần tử là số nguyên. Hãy biến đổi ma trận theo qui luật sau:
+ Các phần tử lớn hơn 5 thay bằng số 1
+ Các phần tử nhỏ hơn hoặc bằng 5 thay bằng số 0
Hiện ma trận trước và sau khi biến đổi. Sau biến đổi, nếu coi mỗi phần tử A[i][j] = 1 của ma trận thể hiện có đường
đi tử từ thành phố i đến j. Nhập vào 2 số nguyên dương x,y (1<=x<=m; 1<=y<n) Hỏi có bao nhiêu đường đi ra từ thành 
phố x, và có bao nhiêu đường đi vào thành. phố y */


int main()
{
	int a[MAX][MAX],b[MAX][MAX],dong,cot,n; 
	NhapMang(a,dong,cot);

	//printf("dong: %d\ncot: %d",dong,cot);
	XuatMang(a,dong,cot);
	//printf("\nMin: %d",MinMang(a,dong,cot));
	ChuyenVi(a,b,dong);
	printf("\nMang chuyen vi:\n");
	XuatMang(b,dong,dong);
	getch();
	return 0;
}
