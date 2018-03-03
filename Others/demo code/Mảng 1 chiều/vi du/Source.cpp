//CÁC ví dụ về mảng
#include <stdio.h>
#include <conio.h>
#define MAX 100


//Khai báo Prototype
void NhapMang(int a[],int&);
void Xuatmang(int a[],int);

void NhapMang(int a[],int &n) // mảng a[] với n phần tử
{
	int i;
	do 
	{
		printf("So phan tu mang: ");
		scanf("%d",&n);
	}while (n<0 || n>100);

	for (i=0;i<n;i++)
	{
		printf("Nhap a[%d]: ",i);
		scanf("%d",&a[i]);
	}
}

void XuatMang(int a[],int n)
{
	int i;
	printf("Mang da nhap: ");
	for(i=0;i<n;i++) 
		printf("%d   ",a[i]);
	printf("\n");
}
int TongMang(int a[],int n)
{
	int i,sum=0;
	for(i=0;i<n;i++)
		sum+=a[i];
	return sum;
}
int MaxMang(int a[],int n)
{
	int i,max=-99999;
	for(i=0;i<n;i++)
		if (a[i]>=max) max=a[i];
	return max;
}
void MangTang(int a[],int n) // Hàm xếp theo chiều tăng
{
	int i,j,tam;
	for(i=0;i<n;i++)
		for(j=i+1;j<n;j++)
			if(a[j]<a[i])
			{
				tam=a[i];
				a[i]=a[j];
				a[j]=tam;
			}
}
void MangGiam(int a[],int n) // Hàm xếp theo chiều giảm
{
	int i,j,tam;
	for(i=0;i<n;i++)
		for(j=i+1;j<n;j++)
			if(a[j]>a[i])
			{
				tam=a[i];
				a[i]=a[j];
				a[j]=tam;
			}
}
void XoaMang(int a[],int &n)
{
	int i;
	for(i=0;i<n;i++) 
		a[i]=0;
	n=0;
}
int main()
{
	int n,a[MAX],tong=0;
	NhapMang(a,n);
	XuatMang(a,n);
	tong=TongMang(a,n);
	printf("tong : %d",tong);
	printf("\nmax: %d",MaxMang(a,n));
	MangGiam(a,n);
	XuatMang(a,n);
	XoaMang(a,n);
	XuatMang(a,n);
	getch();
	return 0;
}