#include "bai1.h"

int main()
{
	float a, b, c;
	printf("\nNhap a:");
	scanf_s("%f", &a);

	printf("\nNhap b:");
	scanf_s("%f", &b);
	printf("\nNhap c:");
	scanf_s("%f", &c);

	printf("\nso lon nhat : %0.3f", max(max(a, b), c));
	_getch();
	return 0;
}
