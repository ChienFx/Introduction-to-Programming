#include <stdio.h>
#include <conio.h>
#include <time.h>
#include <stdlib.h>
#include <amp_graphics.h>
#include "xulimangcon.h"
#define MAX 100

void NhapMangNguyen(int a[], int &n)// 2 kiểu: nhập tay và random
{
	do
	{
		printf("\n\nSo phan tu mang: ");
		scanf("%d", &n);
	} while (n < 0 || n > MAX);
	srand(time(0));
	for (int i = 0; i < n; i++)
		//a[i] = rand() % 100 - 15;
		a[i] = rand() % 10;
	/*{
	printf("nhap a[%d]: ",i);
	scanf("%d",&a[i]);
	}*/
}
void XuatMangNguyen(int a[], int n)
{
	printf("\nMang:\n");
	for (int i = 0; i < n; i++)
		printf("%4d ", a[i]);
	printf("\n");
}

void NhapMangThuc(float f[], int &n)
{
	srand(time(NULL));
	do
	{
		printf("\n\nSo phan tu cua mang THUC: ");
		scanf("%d", &n);
	} while (n < 0 || n > MAX);
	for (int i = 0; i < n; i++)
	{
		f[i] = (float)(10 + rand() % (10 + 300 - 1)) / 10 - 15; //random số thực trong khoang [10/10 - 15; 300/10 - 15], cho ra cả số âm
		//printf("Nhap a[%d]: ",i);
		//scanf("%f",&f[i]);
	}
}
void XuatMangThuc(float f[], int n)
{
	printf("\nMang THUC: \n");
	for (int i = 0; i < n; i++)
		printf("%5.1f  ", f[i]);
	printf("\n");
}
//Bài 293: Liệt kê tất cả mảng con trong mảng 1 chiều các số nguyên.
void lietkecon(int a[], int n)
{
	int sluong = 1;
	printf("\nMang con: \n");
	while (sluong <= n)
	{
		for (int i = 0; i < n; i++)
		{
			if (i + sluong <= n) // i+sluong = n là mảng con cuối cùng có sluong phần tử.
			{
				printf("\n");
				for (int j = i; j < i + sluong; j++)
					printf("%-4d", a[j]);
			}
		}
		sluong++;
	}
}
//Bài 294: Liệt kê tất cả mảng con có độ dài lớn hơn 2 trong mảng 1 chiều các số nguyên.
void conlonhon2(int a[], int n)
{
	int sluong = 1;
	printf("\nManng con lon hon 2 ptu:");
	while (sluong <= n)
	{
		for (int i = 0; i < n; i++)
		{
			if (sluong > 2 && i + sluong <= n)	// i+sluong là phần tử cuối cùng của dãy con có sluong phần tử.
			{
				printf("\n");
				for (int j = i; j <= i + sluong - 1; j++) // biến chạy chỉ số nên j<=i+sluong -1
					printf("%-4d", a[j]);
			}
		}
		sluong++;
	}
}
//Bài 295: Liệt kê các dãy con tăng trong mảng.
int KiemTraTang(int a[], int dau, int cuoi)
{
	for (int i = dau; i <= cuoi - 1; i++)
	if (a[i] >= a[i + 1]) return 0;
	return 1;
}
void daycontang(int a[], int n)
{
	printf("\nDay con tang: ");
	int sluong = 1;
	while (sluong <= n)
	{
		for (int i = 0; i < n; i++)
		if (sluong >= 2 && i + sluong <= n && KiemTraTang(a, i, i + sluong - 1))
		{
			printf("\n");
			for (int j = i; j <= i + sluong - 1; j++)
				printf("%-4d", a[j]);
		}
		sluong++;
	}
}

//Bài 296: Liệt kê tất cả mảng con tăng có chứa GTLN: dễ thôi.
//Bài 297: Tính tổng từng mảng con tăng.
//Bài 298: Đếm sluong mảng con tăng có độ dài lớn hơn 1
//Bài 299: Liệt kê các dãy con toàn dương
//Bài 300: Đếm số lượng mảng con giảm
//Bài 301: Cho mảng a và b, kiểm tra a có phải con của b ko ( dùng hàm kiểm tra vị trí đầu cuối).
//Bài 302: Tìm mảng con toàn dương dài nhất: 1 hàm kt toàn dương, 1 biến giá độ dài MAX
//Bài 304: Tìm các mảng con có tổng bằng M
//Bài 305: Tìm mảng con toàn dương có tổng lớn nhất.
//Bài 306: Tìm mảng con có tổng lớn nhất
