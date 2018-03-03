#include "bai1.h"

int main()
{
	int dau, cuoi;
	do
	{
		printf("\nNhap gia tri dau:");
		scanf_s("%d", &dau);
		printf("\nNhap gia tri cuoi:");
		scanf_s("%d", &cuoi);
	} while (dau > cuoi || dau < 0 || cuoi < 0);
	printf("\nCac so chinh phuong trong khoang tren: \n");
	for (int i = dau; i <= cuoi;i++)
	if (chinhphuong(i)) printf("%3d  ", i);

	_getch();
	return 0;
}