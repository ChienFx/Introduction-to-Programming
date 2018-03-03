//5. KỸ THUẬT TÍNH TỔNG
#include <stdio.h>
#include <conio.h>
#include <time.h>
#include <stdlib.h>
#include <cstdlib>
#include <math.h>
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

/*Bài 200: Tính tổng giá trị của mảng nguyên.*/
int TongGiaTri(int a[], int n)
{
	int S = 0;
	for(int i = 0; i < n; i++)
		S+= a[i] ;
	return S;
}

/*Bài 201: Tính tổng các gia trị dương trong mảng 1 chiều các số thực.*/
float TongDuong( float f[], int n)
{
	float s= 0;
	for( int i = 0; i < n; i++)
		if(f[i] > 0) s+= f[i];
	return s;
}

/*Bài 202: Tính tổng các giá trị có chữ số đầu tiên là chữ số lẻ trong mảng 1 chiều các số nguyên.*/
int DauLe(int n)
{
	int dem = 0, temp,chusodautien;
	if ( n < 0) n = -n;
	temp = n;
	while( temp > 0 )
	{
		temp = temp / 10;
		dem++;
	}
	chusodautien = n/((long)pow((float)10,dem - 1));
	if(chusodautien % 2 == 0) return 0;
	return 1;
}
int TongDauLe( int a[], int n)
{
	int s=0;
	for(int i = 0; i < n; i++)
		if(DauLe(a[i])) s+= a[i];
	return s;
}

/*Bài 203: Tính tổng các giá trị có chữ số hàng chục là chữ số 5 trong mảng số nguyên.*/
int Chuc5(int n)
{
	int dem = 0, temp;
	if( n < 0 ) n= -n;
	temp = n;
	if(n<10) return 0;
	temp = temp /10;
	if( temp % 10 ==5) return 1;
	return 0;
}
int TongChuc5(int a[], int n)
{
	int s=0;
	for( int i = 0; i < n; i++)
		if(Chuc5(a[i])) s+= a[i];
	return s;
}

/*CÁC BÀI CÒN LẠI CỰC KÌ ĐƠN GIẢN, tất cả chỉ cần lồng điều kiện (đã làm ở phần 3) là ok.*/
int main()
{
	int a[MAX], n;
	float f[MAX];
MrC:
	NhapMangNguyen(a,n);
	XuatMangNguyen(a,n);

	/*NhapMangThuc(f,n);
	XuatMangThuc(f,n);*/

	//printf("\nTong gia tri cua mang: %d", TongGiaTri(a,n));	//Bài 200
	//printf("\nTong gia tri duong : %5.1f",TongDuong(f,n));	//Bài 201
	//printf("\nTong gia tri cco chu so dau LE: %d", TongDauLe(a,n));	//Bài 202
	//printf("\nTong cac gia tri co chu so hang chuc la 5: %d", TongChuc5(a,n));	//Bài 203
	
	printf("\n\nTiep tuc ko? Bam \"C\" de tiep tuc: ");
	char tieptuc = getch();
	if(tieptuc == 'C' || tieptuc == 'c') goto MrC;
	return 0;
}
