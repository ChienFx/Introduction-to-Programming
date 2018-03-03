											/* 8 - KỸ THUẬT SẮP XẾP*/
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

//Bài 255: SX mảng tăng
void SXMangTang(int a[], int n)
{
	int temp;
	for( int i = 0; i < n-1; i++)
		for( int j = i+1; j < n; j++)
			if(a[i] > a[j])
			{
				temp = a[i];
				a[i] = a[j];
				a[j] = temp;
			}
}
//Bài 256: SX mảng giảm
//Bài 257: SX các giá trị tại vị trí lẻ trong mảng tăng dần, vtri khác để nguyên.
void SXLeTang(int a[], int n)
{
	int temp;
	for(int i = 1; i < n-1; i+= 2)
		for( int j = i + 2; j < n; j+= 2) // c2: 2 vòng for, điều kiện i,j lẻ
			if(a[i] > a[j])
			{
				temp = a[i];
				a[i] = a[j];
				a[j] = temp;
			}
}
//Bài 258: SX các SNT tăng, giá trị khác để nguyên.
int SNT(int n) 
{
	if(n < 2) return 0;		//n < 2 ko phai SNT, 2 là snt nhỏ nhất
	for(int i = 2; i < n; i++)	//n= 2 thì vòng lặp ko chạy => out 1
		if( n % i == 0) return 0;
	return 1;
}
void SxSNT(int a[], int n)
{
	int temp;
	for(int i = 0; i < n-1; i++)
		for(int j = i+1; j < n; j++)
			if(SNT(a[i]) && SNT(a[j])) 
			{
				temp = a[i];
				a[i] = a[j];
				a[j] = temp;
			}
}
//Bài 259: Sx các số hoàn thiện giảm dần, còn lại để nguyên.
//Bài 260: KT mảng b có phải hoán vị của a ko ?
int KtHoanVi(int a[],int n, int b[], int m)
{
	if( n != m) return 0;
	int mark[MAX],mark2[MAX];

	for( int i = 0 ; i < n; i++) mark[i] = 0;//danh dau a
	for( int i = 0 ; i < n; i++) mark2[i] = 0;//danh dau b

	for(int i = 0; i < n; i++)
		for(int j = 0; j < n; j++)
			if(a[i] == b[j] && mark[i] == 0 && mark2[j] == 0) 
				{
					mark[i] = 1;
					mark2[j] = 1;
					break;   //thoát khỏi vòng for j
				}
	for(int i = 0; i < n; i++)
		if(mark[i] != 1 || mark2[i] != 1) return 0;
	return 1;
}
//Bài 261: SX các số dương tăng dần, số âm giữ nguyên
//Bài 262: SX các số chẵn tăng dần, số lẻ cũng tăng nhưng vị trí tương đối giữ nguyên
void SXChanLe( int a[], int n)
{
	int temp;
	for( int i = 0; i < n-1; i++)
		for(int j = i+1; j < n; j++)
			if(a[i] % 2 == 0 && a[j] % 2 == 0)
			{
				temp = a[i];
				a[i] = a[j];
				a[j] = temp;
			}
			else if( a[i] % 2 != 0 && a[j] % 2 != 0)
			{
				temp = a[i];
				a[i] = a[j];
				a[j] = temp;
			}
}
//Bài 263: SX các số chẵn tăng dần, số lẻ giảm nhưng vị trí tương đối giữ nguyên --> giống 262
//Bài 264: SX các số chẵn dương tăng dần, số âm giảm nhưng vị trí tương đối giữ nguyên--> giống 262
//Bài 265: Cho 2 mảng tăng dần, trộn 2 mảng lại thành 1 mảng giảm dần--->dễ thôi

int main()
{
	int a[MAX],b[MAX], n, m;
	float f[MAX];
MrC:
	NhapMangNguyen(a,n);
	//NhapMangNguyen(b,m);
	XuatMangNguyen(a,n);
	//XuatMangNguyen(b,m);
	
	//printf("%d",KtHoanVi(a,n,b,m));
	SXChanLe(a,n);
	XuatMangNguyen(a,n);

	printf("\nCo tiep ko (C) ? : ");
	char tiep = getch();
	if(tiep == 'c' || tiep == 'C') goto MrC;
	return 0;
}