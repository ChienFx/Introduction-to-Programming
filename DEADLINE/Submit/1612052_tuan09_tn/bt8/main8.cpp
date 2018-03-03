#include "bai8.h"
void main()
{
	int a[MaxDong][MaxCot];
	int dong, cot, k;
	do
	{
	printf("\nDong:");
	scanf_s("%d", &dong);
	printf("\nCot:");
	scanf_s("%d", &cot);
	} while (dong<1 || dong>MaxDong || cot<1 || cot>MaxCot);
	NhapMang2Chieu(a, dong, cot, "Nhap mang A.");
	XuatMang2Chieu(a, dong, cot, "Mang A:\n");

	//bai8
	do
	{
		printf("\nnhap dong k:");
		scanf_s("%d", &k);
	} while (k > dong || k < 0);
	printf("\n vi tri phan tu duong nho nhat dong k: a[%d][%d]", k, TimDuongNhoNhatDongK(a, dong, cot, k));

	do
	{
		printf("\nnhap cot k:");
		scanf_s("%d", &k);
	} while (k > cot || k < 0);
	printf("\n vi tri phan tu duong nho nhat cot k: a[%d][%d]", TimDuongNhoNhatCotK(a, dong, cot, k), k);

	_getch();
}