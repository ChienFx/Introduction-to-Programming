#include "bai5.h"
int main()
{
	int a[MAX][MAX];
	int dong, cot;
	int k;
	printf("\nNhap so dong:");
	scanf_s("%d", &dong);
	printf("\nNhap so cot:");
	scanf_s("%d", &cot);
	NhapMang2Chieu(a, dong, cot);
	XuatMang2Chieu(a, dong, cot);
	do
	{
		printf("\nNhap dong k:");
		scanf_s("%d", &k);
	} while (k<0 || k>dong - 1);


	printf("\nSo phan tu doi xung dong %d: %d",k, DemSoDuongDoiXungDongK(a, dong, cot,k));
	printf("\nSo phan tu la so nguyen to dong %d: %d", k,DemSoSNTDongK(a, dong, cot,k));
	printf("\nSo phan tu la so chinh phuong dong %d: %d",k, DemSoChinhPhuongDongK(a, dong, cot,k));
	printf("\nSo phan tu la so hoan thien dong %d: %d",k, DemSoHoanThienDongK(a, dong, cot,k));

	_getch();
	return 0;
}