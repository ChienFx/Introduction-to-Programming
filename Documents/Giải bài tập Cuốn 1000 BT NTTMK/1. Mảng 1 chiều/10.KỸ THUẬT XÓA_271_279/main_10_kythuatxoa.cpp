														/* 10 - KỸ THUẬT XÓA */
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
//Bài 271: Xóa phần tử chỉ số k
void xoaphantu(int a[], int n)
{
	int k;
QuayLai:
	printf("\nNhap chi so k: ");
	scanf("%d",&k);
	if( k > n-1 || k < 0) goto QuayLai;
	for(int i = k; i < n-1; i++)
		a[i]=a[i+1];
	printf("\nMang Sau Xoa: ");
	for(int i = 0; i < n-1; i++)
		printf("%4d ",a[i]);
}
//Bài 272: Xóa tất cả các số lớn nhất.
void XoaLonNhat(int a[], int n)
{
	int max = -9999999,dem = 0;
	for(int i = 0; i < n; i++)
		if(a[i] > max) max = a[i];
	for(int i = 0; i < n; i++)
		if(a[i] == max)
		{
			dem++;
			for(int j = i; j < n-dem; j++)
			a[j] = a[j+1];
			i--;				//xóa xong i thụt vào
		}

	printf("\nMang Sau Xoa:\n ");
	for(int i = 0; i < n-dem; i++)
		printf("%4d ",a[i]);
}
//Bài 273: Xóa tất cả các số âm
void XoaSoAm(int a[], int n)
{
	int dem=0;
	for(int i = 0; i < n; i++)
		if(a[i] < 0)
		{
			dem++;
			for(int j = i; j < n-dem; j++)
			a[j] = a[j+1];
			i--;			//Xóa xong thì a[i+1] -> a[i]
		}

	printf("\nMang Sau Xoa:\n ");
	for(int i = 0; i < n-dem; i++)
		printf("%4d ",a[i]);
}
//Bài 274: Xóa các số chẵn
void xoasochan(int a[],int n)
{
	int dem=0;
	for(int i = 0; i < n; i++)
		if(a[i] % 2 == 0)
		{
			dem++;
			for(int j = i; j < n-dem; j++)
			a[j] = a[j+1];
			i--;			//Xóa xong thì a[i+1] -> a[i]
		}

	printf("\nMang Sau Xoa:\n ");
	for(int i = 0; i < n-dem; i++)
		printf("%4d ",a[i]);
}
//Bài 275: Xóa tất cả số chính phương
int ChinhPhuong(int n)
{
//	if ( n == 1) return 1;
	for(int i =1; i <= 1 + n/3; i++) // i<=i+n/3 để phòng trường hợp n=1 thì chạy từ 1->1 vẫn ok
		if( n == i*i) return 1;
	return 0;
}
void XoaChinhPhuong(int a[],int n)
{
	int dem=0;
	for(int i = 0; i < n; i++)
		if(ChinhPhuong(a[i]))
		{
			dem++;
			for(int j = i; j < n-dem; j++)
			a[j] = a[j+1];
			i--;			//Xóa xong thì a[i+1] -> a[i]
		}

	printf("\nMang Sau Xoa:\n ");
	for(int i = 0; i < n-dem; i++)
		printf("%4d ",a[i]);
}
//Bài 276: Xóa tất cả số nguyên tố
int SNT(int n)  
{
	if(n < 2) return 0;		//n < 2 ko phai SNT, 2 là snt nhỏ nhất
	for(int i = 2; i < n; i++)	//n= 2 thì vòng lặp ko chạy => out 1
		if( n % i == 0) return 0;
	return 1;
}
void xoaSNT(int a[], int n)
{
	int dem=0;
	for(int i = 0; i < n; i++)
		if(SNT(a[i]))
		{
			dem++;
			for(int j = i; j < n-dem; j++)
			a[j] = a[j+1];
			i--;			//Xóa xong thì a[i+1] -> a[i]
		}

	printf("\nMang Sau Xoa:\n ");
	for(int i = 0; i < n-dem; i++)
		printf("%4d ",a[i]);
}
//Bài 278: Xóa phần tử bị trùng, chỉ giữ lại 1 giá trị đại diện
void XoaTrung(int a[], int n)
{
	int dem=0;
	for(int i = 0; i < n-1; i++)
		for(int j = i+1; j < n; j++)
			if(a[i] == a[j]) a[j] = -9999;
	for(int i = 0; i < n; i++)
		if(a[i] == -9999)
		{
			dem++;
			for(int j = i; j < n-dem; j++)
				a[j] = a[j+1];
			i--;
		}
			

	printf("\nMang Sau Xoa:\n ");
	for(int i = 0; i < n-dem; i++)
		printf("%4d ",a[i]);
}
//Bài 279: Same 278
int main()
{
	int a[MAX], n;
	float f[MAX];
MrC:
	NhapMangNguyen(a,n);
	XuatMangNguyen(a,n);

	//xoaphantu(a,n);
	//XoaLonNhat(a,n);
	//XoaSoAm(a,n);
	//xoasochan(a,n);
	//XoaChinhPhuong(a,n);
	//xoaSNT(a,n);
	XoaTrung(a,n);

	printf("\nCo tiep tuc ko (C): ");
	char tiep = getch();
	if(tiep == 'c' || tiep == 'C') goto MrC;
	return 0;
}