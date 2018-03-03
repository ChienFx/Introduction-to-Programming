#include "bai10.h"
void NhapMang1Chieu(int a[MAX], int &n, char chuoi[255])
{
	do
	{
		printf("\n%s", chuoi);//
		scanf_s("%d", &n);
	} while (n<1 || n>MAX);

	srand((unsigned int)time(0));
	for (int i = 0; i < n; i++)
		a[i] = rand() % 100 - 10;

}
void XuatMang1Chieu(int a[MAX], int n, char chuoi[255])
{
	printf("\n%s", chuoi);
	for (int i = 0; i < n; i++)
		printf("%-3d  ", a[i]);
	printf("\n");
}
int KiemTraGiamLienTiep(int a[MAX], int Dau, int Cuoi)//kiem tra tu vi tri dau den cuoi co tang hay khong
{

	for (int i = Dau; i <= Cuoi-1; i++)
	if (a[i] <=a[i+1])
		return 0;
	return 1;
}

int DemGiamDaiNhat(int a[MAX], int n)//xuat ra so phan tu tang dai nhat
{
	int cout = 0;
	for (int i = 0; i < n - 1; i++)
	for (int j = i + 1; j < n; j++)
	if (KiemTraGiamLienTiep(a, i, j))
	{
		if (j - i + 1 >cout)
			cout = j - i + 1;
	}
	return cout;
}