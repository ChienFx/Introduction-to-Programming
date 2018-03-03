#include <stdio.h>
#include <conio.h>
#include <time.h>
#include <stdlib.h>
#define MAX 100

void NhapMangNguyen(int a[][MAX], int &m, int &n) // m dòng, n cột
{
	srand(time(NULL));
QuayLai:
	printf("\nNhap so hang: ");
	scanf("%d",&m);
	printf("\nNhap so cot: ");
	scanf("%d",&n);
	if(m < 0 || m > MAX || n < 0 || n > MAX) goto QuayLai;
	for(int i = 0; i < m; i++)
		for(int j = 0; j < n; j++)
			a[i][j] = rand() % 100;
}
void XuatMangNguyen(int a[][MAX],int m, int n)
{
	printf("\nMang: \n");

	for(int i = 0; i < m; i++)
	{
		for(int j = 0; j < n; j++)
		{
			printf("%4d",a[i][j]);
		}
		printf("\n\n");
	}
}
//Bài 342: Đếm số lượng phần tử cực đại trong mảng. Phần tử cực đại là phần tử lớn hơn các phần tử xung quanh
int DemCucDai(int a[][MAX], int m, int n)
{
	int dem = 0;
	for(int i = 0; i < m; i++)
		for(int j = 0; j < n; j++)
			if(a[i][j] > a[i][j+1] && a[i][j] > a[i][j-1] &&a[i][j] > a[i+1][j] &&a[i][j] > a[i-1][j])
				dem++;
	return dem;
}
//Bài 346: Đếm số lượng giá trị hoàng hậu. Giá trị "Hoàng Hậu": là giá trị lớn nhất trong hàng, cột và 2 đường chéo đi qua nó.
int KTHoangHau(int dong, int cot,int a[][MAX], int m, int n)
{
	//Kiểm tra trên hàng:
	for(int j = 0; j < n; j++)
		if(a[dong][cot] < a[dong][j]) return 0;
	//Kiểm tra trên cột:
	for(int i = 0; i < m; i++)
		if(a[dong][cot] < a[i][cot] ) return 0;
}
int main()
{
	int a[MAX][MAX],m,n;
	float f[MAX][MAX];
MrC:
	NhapMangNguyen(a,m,n);
	XuatMangNguyen(a,m,n);
	printf("\nSo phan tu cuc dai: %d",DemCucDai(a,m,n));

	printf("\nCo tiep tuc ko ?: ");
	char c=getch();
	if( c == 'c' || c=='C') goto MrC;
	return 0;
}