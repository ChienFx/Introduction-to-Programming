#include "bai9.h"
void main()
{
	int a[MaxDong][MaxCot];
	int N,k,dong,cot;
	
	do
	{
		printf("\nDong:");
		scanf_s("%d", &dong);
		printf("\nCot:");
		scanf_s("%d", &cot);
	} while (dong<1 || dong>MaxDong || cot<1 || cot>MaxCot);
	NhapMang2Chieu(a, dong, cot, "Nhap mang A.");
	XuatMang2Chieu(a, dong, cot, "Mang A:\n");
	//bai 9
	do
	{
	printf("\nNhap dong K:");
	scanf_s("%d", &k);
	} while (k > dong || k < 0);
	printf("\n Vi tri phan tu Duong nho nhat dong k: A[%d][%d]", k, TimAmLonNhatDongK(a, dong, cot, k));

	do
	{
	printf("\nNhap cot K:");
	scanf_s("%d", &k);
	} while (k > cot || k < 0);
	printf("\n Vi tri phan tu Duong nho nhat cot k: A[%d][%d]", TimAmLonNhatCotK(a, dong, cot, k), k);
	
	_getch();
}