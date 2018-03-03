//6. KỸ THUẬT ĐẶT CỜ HIỆU
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
		//a[i] = rand() % 100 - 15;
	{
		printf("nhap a[%d]: ",i);
		scanf("%d",&a[i]);
	}
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
//Bài 240: Kiểm tra mảng có tồn tại giá trị 0 hay không?
int KiemTra0(int a[], int n)
{
	for( int i = 0; i < n; i++)
		if(a[i] == 0) return 1;
	return 0;
}
//Bài 241: KT mảng có tồn tại 2 giá trị 0 liên tiếp hay không ?
int KhongLienTiep(int a[], int n)
{
	for( int i = 0; i < n-1; i++)
		if(a[i]==0 && a[i+1]==0) return 1;
	return 0;
}
//Bài 242: KT có giá trị chẵn ko ?
int KTChan(int a[], int n)
{
	for( int i = 0; i < n; i++)
		if(a[i] % 2 == 0) return 1;
	return 0;
}
//Bài 243: KT xem có tồn tại số nguyên tố hay không ?
int SNT(int n)
{
	if( n < 2) return 0;
	for(int i = 2; i < n-1; i++)
		if( n % i == 0) return 0;
	return 1;
}
int TonTaiSNT(int a[], int n)
{
	for( int i = 0; i < n; i++)
		if(SNT(a[i])) return 1;
	return 0;
}

//Bài 244: KT mảng thỏa tính chất: Ko tồn tại số hoàn thiện
int HoanThien(int n)// hàm tính tổng của các ước, trừ chính nó
{
	int s=0;
	for(int i = 1; i < n; i++)
		if(n % i == 0) 
			s+= i;
	if(s == n) return 1;
	return 0;
}
int TonTaiSoHoanThien(int a[],int n)
{
	for(int i = 0; i < n; i++)
		if(HoanThien(a[i])) 
			return 1;
	return 0;
}

//Bài 245: Kt tồn tại số chẵn ko
//Bài 246: Kt Mảng có đối xứng ko
int MangDoiXung(int a[], int n)
{
	for(int i = 0; i < n / 2 + 1; i++)
		if(a[i] != a[n-i-1]) return 0;
	return 1;
}
/*Bài 257: Ta đinh nghĩa mảng có tính chất lẻ nếu tổng của 2 phần tử liên tiếp luôn là số lẻ. Kiểm tra mảng a có lẻ ko?*/
int KTMangLe(int a[], int n)
{
	for ( int i = 0; i < n-1; i++)
		if((a[i] + a[i+1]) % 2 == 0) return 0;
	return 1;
}

/*Bài 258: Kt Mảng a có tăng dần ko?*/
int KtTangDan(int a[], int n)
{
	for(int i = 0; i < n-1; i++)
		if(a[i] > a[i+1]) return 0;
	return 1;
}
//Bài 249: Kt mảng có giảm dần ko ? 
/*Bài 250: Cho biết mảng a có lập thành cấp số cộng không, nếu có hãy chỉ ra công sai d.*/
void KTCapSoCong(int a[], int n)
{
	if(n < 2) printf("\nKo");
	else
	{
		int d = a[1] - a[0];
		for( int i = 1; i < n-1; i++)
			if((a[i+1] - a[i]) != d) 
				{
					printf("\nKo");
					goto OUT2;
				}
		OUT1: printf("\nCo, cong sai: %d",d);
		OUT2:;
	}
}
//Bài 251: KT các phần tử có bằng nhau ko?
//Bài 252: KT mảng sóng: (a[i] > a[i-1] && a[i] > a[i+1]) || (a[i] < a[i-1] && a[i] < a[i+1])
//Bài 253, 254: Nghe nói dễ :))
int main()
{
	int a[MAX],n;
	float f[MAX];
MrC:
	NhapMangNguyen(a,n);
	XuatMangNguyen(a,n);

	/*if(KtTangDan(a,n)) printf("\nCo");
	else printf("\nKo");*/
	KTCapSoCong(a,n);

	printf("\n\nTiep tuc khong, Nhan \"C\" de tiep tuc: ");
	char c = getch();
	if(c == 'c' || c == 'C') goto MrC;
	return 0;
}