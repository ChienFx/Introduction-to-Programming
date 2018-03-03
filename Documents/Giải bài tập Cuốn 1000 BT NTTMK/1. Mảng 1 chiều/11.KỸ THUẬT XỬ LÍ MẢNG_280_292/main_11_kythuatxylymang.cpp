#include <stdio.h>
#include <conio.h>
#include <time.h>
#include <stdlib.h>
#include <amp_graphics.h>
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
			//a[i] = rand()%10;
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

//Bài 280: Đưa hết số 1 về đầu mảng
void motvedau(int a[],int n)
{
	int temp,dem=0;
	for(int i = 0; i < n; i++)
		if(a[i] == 1)
		{
			temp = a[dem];
			a[dem] = a[i];
			a[i] = temp;
			dem++;
		}
}

//Bài 281: Đưa các phần tử chẵn về đầu mảng, lẻ về cuối mảng, số 0 ở đầu.
void dauchanlecuoi(int a[], int n)
{
	int temp, dau = 0, cuoi = n -1;
	for( int i = 0; i < n; i++)
		if(a[i] % 2 == 0 && a[i] != 0)
		{
			temp = a[dau];
			a[dau] = a[i];
			a[i] = temp;
			dau++;
		}
	for( int i = n-1; i >= 0; i--)				//chạy ngược để khỏi tráo lần 2
		if(a[i] % 2 != 0 && a[i] != 0)
		{
			temp = a[cuoi];
			a[cuoi] = a[i];
			a[i] = temp;
			cuoi--;
		}
}

//Bài 282: Đưa các số chia hết cho 3 về đầu mảng.
void chiahetcho3(int a[], int n)
{
	int temp, dau =0;
	for( int i = 0; i < n; i++)
	{
		if(a[i] % 3 == 0)
		{
			temp = a[dau];
			a[dau] = a[i];
			a[i] = temp;
			dau++;
		}
	}
}

//Bài 283: Đảo ngược mảng ban đầu.
void daonguoc(int a[], int n)
{
	int temp,dau = 0, cuoi = n-1;
	while( cuoi > dau)
	{
		temp = a[dau];
		a[dau] = a[cuoi];
		a[cuoi] = temp;
		dau++;
		cuoi--;
	}
}

//Bài 284: Đảo ngược thứ tự các số chẵn trong mảng.
void daosochan(int a[], int n)
{
	int temp,dau = 0, cuoi = n-1;

	for(int i = dau; i < n; i++)
		if(a[i] % 2 == 0)
		{
			for( int j = cuoi; j >=0; j--)
				if( a[j] % 2 == 0 && i < j)
				{
					temp = a[i];
					a[i] = a[j];
					a[j] = temp;
					dau = i+1;
					cuoi = j-1;
					break;
				}
		}
}

//Bài 285: Đảo ngược vị trí cac số dương có trong mảng => Khác bài trên mới vui :))
void daoduong(int a[], int n)
{
	int temp, dau = 0, cuoi = n-1;
	for( int i = 0; i < cuoi; i++)
		if( a[i] > 0)
			for(int j = cuoi; j > dau; j--)
				if(a[j] > 0)
				{
					temp = a[i];
					a[i] = a[j];
					a[j] = temp;
					dau = i+1;
					cuoi = j-1;
					break;

				}
}

//Bài 286, 287: KO hiểu :((
//Bài 288: Xuất các mảng theo yêu cầu các phần tử chẵn màu vàng, lẻ màu xanh.

int main()
{
	int a[MAX],n;
	float f[MAX];
MrC:
	//NhapMangNguyen(a,n);
	//XuatMangNguyen(a,n);

	//motvedau(a,n);
	//dauchanlecuoi(a,n);
	//chiahetcho3(a,n);
	//daonguoc(a,n);
	//daosochan(a,n);
	//daoduong(a,n);
	//XuatMangNguyen(a,n);

	
	printf("\nTiep tuc ko (C): ");
	char c=getch();
	if(c=='c' || c=='C') goto MrC;
	return 0;
}