#include "bai9.h"
void NhapMang1Chieu(int a[MAX], int &n, char chuoi[255])
{
	do
	{
		printf("\n%s", chuoi);//
		scanf_s("%d", &n);
	} while (n<1 || n>MAX);

	srand((unsigned int)time(0));
	for (int i = 0; i < n; i++)
		a[i] = rand() % 90 - 80;

}
void XuatMang1Chieu(int a[MAX], int n, char chuoi[255])
{
	printf("\n%s", chuoi);
	for (int i = 0; i < n; i++)
		printf("%-3d  ", a[i]);
	printf("\n");
}

int KiemTraAmLienTiep(int a[MAX], int Dau, int Cuoi)//kiem tra tu vi tri dau den cuoi co tang hay khong, tra ra tong 
{

	for (int i = Dau; i <= Cuoi; i++)
	if (a[i] > 0)
		return 0;
	return 1;
}
int TinhTongDoan(int a[MAX], int Dau, int Cuoi)//kiem tra tu vi tri dau den cuoi co tang hay khong, tra ra tong 
{
	int sum = 0;
	for (int i = Dau; i <= Cuoi; i++)
		sum += a[i];
	return sum;
}
int TimDoanConAmCoTongLonNhat(int a[MAX], int n)//xuat ra so phan tu tang dai nhat
{
	int max = -999999999;
	int cout = 0;
	for (int i = 0; i < n - 1; i++)
	for (int j = i+1; j < n; j++)
	if (KiemTraAmLienTiep(a, i, j))
	{
		int tmp = TinhTongDoan(a, i, j);
		if (tmp > max)
		{
			cout = j - i + 1;//so phan tu thoa man
			max = tmp;
		}
	}
	return cout;
}