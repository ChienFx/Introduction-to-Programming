// BÀI TẬP MẢNG 1 CHIỀU: 143 to 154

#include <stdio.h>
#include <conio.h>
#include <cstdlib>
#include <stdlib.h>
#include <time.h>
#define MAX 100

void NhapMang(int a[], int &n)// 2 kiểu, nhập truyền thống và random
{
	srand(time(0));
	do
	{
	printf("\nSo phan tu mang: ");
	scanf("%d",&n);
	}while( n < 0 || n > MAX);

	for(int i = 0 ; i < n; i++)
		a[i] = rand() % 100;
	/*{
		printf("Nhap a[%d]: ",i);
		scanf("%d",&a[i]);
	}*/
}
void XuatMang(int a[], int n)
{
	printf("\nMang:\n");
	for( int i = 0; i < n; i++)
		printf("%4d",a[i]);
	printf("\n");
}


// Bài 143: Só chẵn đầu tiên
int chandau(int a[],int n)
{
	for(int i = 0; i < n; i++)
		if( a[i] % 2 == 0)
		{
			return a[i];
		}
	return -1;
}
int Xuli_143()
{
	int a[MAX], n;
	NhapMang(a,n);
	XuatMang(a,n);
	printf("\nSo chan dau tien: %d",chandau(a,n));
	getch();
	return 0;
}

//Bài 144: Số nguyên tố đầu tiên
int SNT(int n)  // trả về 1 là phải, 0 là ko phải
{
	if(n <= 2) return 0; //n < 2 ko phai SNT
	for(int i = 2; i < n; i++)
		if( n % i == 0) return 0;
	return 1;
}
int nguyentodau(int a[],int n)
{
	for(int i = 0; i < n; i++)
		if(SNT(a[i])) return a[i];  // Kiem tra SNT = 1 la out
	return -1;		// ko co SNT
}
int XuLi_144()
{
	int a[MAX], n;
	NhapMang(a,n);
	XuatMang(a,n);
	printf("\nSNT dau tien: %d",nguyentodau(a,n));
	getch();
	return 0;
}

// Bài 145: số hoàn thiện đầu tiên
// Số hoàn thiện là số có tổng các ước( trừ chính nó ) bằng chính nó
int TongUoc(int n)// hàm tính tổng của các ước, trừ chính nó
{
	int s=0;
	for(int i = 1; i < n; i++)
		if(n % i == 0) 
			s+= i;
	return s;
}// ko cần thiết
int hoanthien(int n)
{
	if(TongUoc(n) == n) return 1;
	return 0;
}
int hoanthiendau(int a[],int n)
{
	for(int i = 0; i < n; i++)
		if(TongUoc(a[i]) == a[i])
			return a[i];
	return -1;
}
int hoanthiencuoi(int a[],int n)
{
	for(int i = n-1; i >= 0; i--)
		if(TongUoc(a[i]) == a[i])
			return a[i];
	return -1;
}
int hoanthienlonnhat(int a[],int n)
{
	int so = 0;
	
	for(int i = 0; i < n; i++)
		if(hoanthien(a[i]))
			if ( a[i] > so ) so = a[i];
	return so;
}
void XuLi_145()
{
	int a[MAX], n;
	NhapMang(a,n);
	XuatMang(a,n);

	printf("\nSo hoan thien dau tien: %d",hoanthiendau(a,n));
	printf("\nSo hoan thien cuoi cung: %d",hoanthiencuoi(a,n));
	printf("\nSo hoan thien lon nhat: %d",hoanthienlonnhat(a,n));
	printf("\nCac so hoan thien trong mang:");
	for(int i = 0; i < n; i++)
		if(TongUoc(a[i]) == a[i]) printf("%4d  ",a[i]);
	getch();

}

//Bài 146:Giá trị âm đầu
int amdau(int a[],int n)
{
	for(int i = 0; i < n; i++)
		if(a[i] < 0) return a[i];
	return 1;// ko có trong mảng thì trả về 1
}
//Bài 147: Giá trị dương cuối(>0)
int duongcuoi(int a[], int n)
{
	for(int i = n-1; i >=0; i--)
		if( a[i] > 0) return a[i];
	return -1;
}

//Bài 148: Số nguyên tố cuối cùng
int nguyentocuoi(int a[],int n)
{
	for(int i = n-1; i >=0; i--)
		if(SNT(a[i])) return a[i];  // Kiem tra SNT = 1(phai) la out
	return -1;		// ko co SNT
}

//Bài 149:Số hoàn thiện cuối: trong 145 đã có
//Bài 150:Số âm lớn nhất
int amlonnhat(int a[], int n)
{
	int am=0;
	for(int i = 0; i < n; i++)
		if(a[i] < 0) 
		{
			am = a[i];
			break;
		}
	for(int i = 0; i < n; i++)
		if(a[i] > am && a[i] <0) am = a[i];
	return am;
}
void XuLi150()
{
	int a[MAX],n;
	NhapMang(a,n);
	XuatMang(a,n);
	printf("So am lon nhat: %d",amlonnhat(a,n));
}
 
//Bài 151: Số nguyên tố lớn nhất
int nguyentolonnhat(int a[],int n)
{
	int so=0;
	for(int i = 0; i < n; i++)
		if(SNT(a[i]))
			if (a[i] > so) so = a[i];
	return so;
}
void XuLi_148_151()
{
	int a[MAX],n;
	NhapMang(a,n);
	XuatMang(a,n);
	printf("So nguyen to lon nhat: %d",nguyentolonnhat(a,n));
	printf("\nSo nguyen to cuoi cung: %d",nguyentocuoi(a,n));
}
//Bài 152: Số hoàn thiện lớn nhất: trong bài 145
//Bài 153: Số chẵn nhỏ nhất
int channhonhat(int a[],int n)
{
	int so = 999999,dem = 0;
	for(int i = 0; i < n; i++)
		if( a[i] % 2 == 0)
			if( a[i] < so) 
				{
					so = a[i];
					dem++;
				}
	if(dem > 0) return so;
	return -1;
}
int XuLi_153()
{
	int a[MAX],n;
	NhapMang(a,n);
	XuatMang(a,n);
	printf("So chan nho nhat: %d",channhonhat(a,n));
	getch();
	return 0;
}

//Bài 154: Vị trí giá trị âm lớn nhất
int vtamlonnhat(int a[], int n)
{
	int vt = -1;
	for( int i = 0; i < n; i++)  // tìm vị trí âm đầu tiên
		if(a[i] < 0) 
			{
				vt = i;
				break;
			}

	for( int i = 0; i < n; i++)// tìm vị trí âm lớn nhất
		if(a[i] < 0)
			if(a[i] > a[vt]) vt = i;
	return vt;
}
int XuLi_154()
{
	int a[MAX],n;
	NhapMang(a,n);
	XuatMang(a,n);
	printf("\nVi tri so am lon nhat : %d",vtamlonnhat(a,n));
	getch();
	return 0;
}


int main()
{
	XuLi150();
	getch();
	return 0;
}