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

/*Bài 204: Tính tổng các giá trị lớn hơn giá trị trước nó.*/
float Tong204(float f[], int n)
{
	float s=0.0;
	for (int i = 1; i < n; i++)
		if(f[i] > f[i-1]) s+= f[i];
	return s;
}

/*Bài 205: */
float tong205(float f[], int n)
{
	float s=0.0;
	for(int i = 0; i < n-1; i++)
		if(f[i] > abs(f[i+1])) s+= f[i];
	return s;
}

/*Bài 206: */
float tong206(float f[], int n)
{
	float s=0.0;
	for(int i = 0; i < n; i++)
		if(f[i] > f[i+1] && f[i] > f[i-1])
			s+= f[i];
	return s;
}

/*Bài 207: Tổng các giá trị lớn hơn hoặc nhỏ hơn các giá trị xung quanh.*/
int tong207(int a[], int n)
{
	int s = a[0] + a[n-1];
	for(int i =1; i < n-1; i++)
		if((a[i] > a[i-1] && a[i] > a[i+1]) || (a[i] < a[i-1] && a[i] < a[i+1]))
			s+= a[i];
	return s;
}
	
/*Bài 208: Tổng các số chính phương.*/
int ChinhPhuong(int n)
{
//	if ( n == 1) return 1;
	for(int i =1; i <= 1 + n/3; i++) // i<=i+n/3 để phòng trường hợp n=1 thì chạy từ 1->1 vẫn ok
		if( n == i*i) return 1;
	return 0;
}
int tong208(int a[], int n)
{
	int s = 0;
	for( int i = 0; i< n; i++)
		if(ChinhPhuong(a[i])) s+= a[i];
	return s;
}

/*Bài 209: Tổng các số gánh*/
int Ganh(int so)
{
	int a[MAX],n = 0,dem =0;
	if (so <= 10) return 0;
	while( so > 0 )
	{
		a[n] = so % 10; // lưu ngược và mảng a vd: 12345 -> a={5;4;3;2;1}, nếu muốn lưu đúng a={1;2;3;4;5} thì tìm số chữ số xong lưu a[i] = so/pow(10,n-1) với n là số phần tử
		n++;
		so = so / 10;
	}// out ra n = so chu so cua "so"

	for( int i = 0; i <= n/2; i++)
		if( a[i] != a[n-i-1] ) return 0;// chỉ cần khác 1 phần tử là sai ngay
	return 1;
}
int tong209(int a[], int n)
{
	int s=0;
	for( int i = 0; i < n; i++)
		if(Ganh(a[i])) s+= a[i];
	return s;
}
/*Bài 210: Tổng các giá trị có chữ số đầu tiên chẵn.*/
int DauChan(int n) // có thể xài lại hàm DauLe, vd: !(DauLe(22)) = 1 
{
	int temp,dem = 0,chusodau;
	if ( n < 0) n = -n;
	temp = n;
	while( temp > 0)
	{
		temp = temp / 10;
		dem++;
	}
	chusodau = n / ((int)(pow((float)10,dem-1)));
	if (chusodau % 2 == 0) return 1;
	return 0;
}
int tong210(int a[], int n)
{
	int s =0;
	for( int i = 0; i < n; i++)
		if(DauChan(a[i]))
			s+= a[i];
	return s;
}

/*Bài 211: Tính trung bình cộng các số nguyên tố.*/
int SNT(int n)  // trả về 1 là phải, 0 là ko phải
{
	if(n < 2) return 0; //n < 2 ko phai SNT, 2 là snt nhỏ nhất
	for(int i = 2; i < n; i++)
		if( n % i == 0) return 0;
	return 1;
}
float tong211(int a[], int n)
{
	int s=0,dem=0;
	for(int i = 0; i < n; i++)
		if(SNT(a[i]))
		{
			s+= a[i];
			dem++;
		}
	return (float)s/dem;
}

/*Bài 212:Trung bình cộng các số dương của mảng 1 chiều các số thực. */
float tong212(float f[], int n)
{
	float s=0.0;int dem=0;
	for(int i = 0; i < n; i++)
		if(f[i] > 0) 
		{
			s+= f[i];
			dem++;
		}
	return (float)s/dem;
}

/*Bài 213: Trung bình cộng các giá trị lớn hơn x trong mảng 1 chiều các số thực...GIỐNG 212*/
/*Bài 214: Trung bình nhân các số lớn hơn 0 trong mảng 1 chiều các số thực*/
float tong214(float f[], int n)
{
	float s=1;
	int dem = 0;
	for (int i = 0; i <n; i++)
		if(f[i] > 0)
		{
			s*= f[i];
			dem++;
		}
	return (float)pow(s,(float)1/dem);
}

/*Bài 215: Tình khoảng cách trung bình giữa các giá trị.*/
float tong215(float f[], int n)
{
	float s=0.0;
	int dem=0;
	for(int i =0; i< n-1; i++)
		for(int j = 1; j < n; j++)
		{
			dem++;
			s+= abs(f[i] - f[j]);
		}
	return (float)s/dem;
}

int main()
{
	int a[MAX], n;
	float f[MAX];
MrC:
	/*NhapMangNguyen(a,n);
	XuatMangNguyen(a,n);
*/
	NhapMangThuc(f,n);
	XuatMangThuc(f,n);

	//printf("\nTong gia tri cua mang: %d", TongGiaTri(a,n));	//Bài 200
	//printf("\nTong gia tri duong : %5.1f",TongDuong(f,n));	//Bài 201
	//printf("\nTong gia tri cco chu so dau LE: %d", TongDauLe(a,n));	//Bài 202
	//printf("\nTong cac gia tri co chu so hang chuc la 5: %d", TongChuc5(a,n));	//Bài 203
	printf("\nTrung binh nhan: %5.1f", tong214(f,n));
	//printf("\nKhoang cach trung binh: %5.1f", tong215(f,n));	//Bài 215
	
	printf("\n\nTiep tuc ko? Bam \"C\" de tiep tuc: ");
	char tieptuc = getch();
	if(tieptuc == 'C' || tieptuc == 'c') goto MrC;
	return 0;
}
