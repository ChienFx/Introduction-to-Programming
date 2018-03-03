//6. KỸ THUẬT ĐẾM
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

/*Bài 216, 217, 218, 219, 220: Đếm số lượng số chẵn, số dương chia hết cho 7, giá trị đối xứng, số lần xuất hiện giá trị x, giá trị có chữ số tận cùng là 5*/
int demchan(int a[], int n)
{
	int dem = 0;
	for(int i = 0; i < n, i++)
		if(a[i] % 2 == 0) dem++;
	return dem;
}
int demduongchiahet7(int a[], int n)
{
	int dem =0;
	for(int i = 0; i < n, i++)
		if(a[i] > 0 && a[i] % 7 == 0)
			dem++;
	return dem;
}
int DoiXung(int n)
{
	int a[MAX], dem = 0;
	if( n < 0) n = -n;
	int temp = n;
	while( n > 0)
	{
		a[dem] = temp % 10;
		temp = temp/10;
		dem++;
	}
	for(int i = 0; i < dem / 2 +1; i++)
		if(a[i] != a[dem - i - 1]) return 0;
	return 1;
}
int DemDoiXung(int a[], int n)
{
	int dem = 0;
	for(int i = 0; i < n, i++)
		if(DoiXung(a[i])) dem++;
	return dem;
}
int DemTanCung5(int a[], int n)
{
	int dem = 0;
	for(int i = 0; i < n, i++)
		if(a[i] % 10 == 5) dem++;
	return dem;
}
/*Bài 221: So sánh số lượng chẵn, lẻ:
			+ Chẵn > Lẻ=> -1;
			+ Chẵn < Lẻ=> 1;
			+ Chăn = Lẻ=> 0 */
int TuongQuanChanLe(int a[], int n)
{
	int chan = 0, le = 0;
		for(int i = 0; i < n, i++)
			if(a[i] % 2 == 0) chan++;
			else le++;
	if(chan > le) return -1;
	else if(chan < le) return 1;
	return 0;
}
/**Bài 222: Đếm số lượng các phần tử cực trị*/
int DemCucTri(int a[], int n)
{
	int dem = 0;
	for(int i = 1; i < n-1, i++)
		if((a[i] > a[i+1] && a[i] > a[i-1])||(a[i] < a[i+1] && a[i] < a[i-1]))
				dem++;
	return dem;
}	
/*Bài 223, 224, 225: Đếm số lượng số nguyên tố, số hoàn thiện, GTLN,  - như bài 216*/
int HoanThien(int n)// hàm tính tổng của các ước, trừ chính nó
{
	int s=0;
	for(int i = 1; i < n; i++)
		if(n % i == 0) 
			s+= i;
	if(s == n) return 1;
	return 0;
}
/*Bài 226: Đếm số CẶP phần tử kề nhau mà cả hai đều chẵn*/
int DemChanKeNhau(int a[], int n)
{
	int dem=0;
	if(a[n-2] % 2 == 0 && a[n-1] % 2==0) dem++;
	for( int i = 0;i < n-2; i++)
		if(a[i] % 2==0 && a[i+1] % 2==0) dem++;
	return dem;
}
/*Bài 227->229: Ko khó đâu*/ 