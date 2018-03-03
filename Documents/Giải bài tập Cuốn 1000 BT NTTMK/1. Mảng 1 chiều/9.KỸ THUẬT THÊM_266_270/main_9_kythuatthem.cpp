													/* 9 - KỸ THUẬT THÊM */
#include <stdio.h>
#include <conio.h>
#include <time.h>
#include <stdlib.h>
#define MAX 100

void NhapMangNguyen(int a[], int &n)// 2 kiểu: nhập tay và random
{
	do
	{
		printf("\n\nSo phan tu mang: ");
		scanf("%d",&n);
	}while( n < 0 || n > MAX);
	srand(time(0));
	for( int i = 0; i < n; i++)
		a[i] = rand() % 100 - 15;
	/*{
		printf("nhap a[%d]: ",i);
		scanf("%d",&a[i]);
	}*/
}
void XuatMangNguyen(int a[], int n)
{
	printf("\nMang:\n");
	for( int i = 0; i < n; i++)
		printf("%4d ",a[i]);
	printf("\n");
}

void NhapMangThuc(float f[], int &n)
{
	srand(time(NULL));
	do
	{
		printf("\n\nSo phan tu cua mang THUC: ");
		scanf("%d",&n);
	}while( n < 0 || n > MAX);
	for(int i = 0; i < n; i++)
	{
		f[i] = (float)(10 + rand() % (10 + 300 - 1))/10 - 15; //random số thực trong khoang [10/10 - 15; 300/10 - 15], cho ra cả số âm
		//printf("Nhap a[%d]: ",i);
		//scanf("%f",&f[i]);
	}
}
void XuatMangThuc(float f[], int n)
{
	printf("\nMang THUC: \n");
	for( int i = 0; i < n; i++)
		printf("%5.1f  ",f[i]);
	printf("\n");
}
//Bài 266: Thêm 1 phần tử có giá trị x vào mảng tại vị trí k.
void themvitri(int a[],int n) // vị trí = trị số mảng + 1.
{
	int x,k;
	printf("\nThem gia ti x: ");
	scanf("%d",&x);

quaylai:
	printf("\nVao vi tri k: ");
	scanf("%d",&k);
	if(k > n || k < 1) goto quaylai;

	for( int i = n; i >= k; i--)
		a[i] = a[i-1];
	a[k-1] = x;

	printf("\nThem:\n");
	for(int i = 0; i < n+1; i++)
		printf("%4d ",a[i]);
}
//Bài 267: Viết hàm nhập mảng các số thực sao cho khi nhập xong mảng được xếp tăng dần( ko xếp sau khi nhập );
//Bài 268, 269, 270===> ok
int main()
{
	int a[MAX], n;
	float f[MAX];
MrC:
	NhapMangNguyen(a,n);
	XuatMangNguyen(a,n);

	//themvitri(a,n);
	

	printf("\nTiep tuc ko (C):");
	char tiep = getch();
	if(tiep == 'c' || tiep == 'C') goto MrC;
	return 0;
}
