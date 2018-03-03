#include <stdio.h>
#include <conio.h>

void main()
{
	int x1, x2, x3, x4,Sum_x;
	
	printf("\nNhap x1 = ");
	scanf_s("%d", &x1);

	printf("\nNhap x2 = ");
	scanf_s("%d", &x2); 
	
	printf("\nNhap x3 = ");
	scanf_s("%d", &x3);

	printf("\nNhap x4 = ");
	scanf_s("%d", &x4);

	Sum_x = x1 + x2 + x3 + x4;
	printf("%d + %d + %d + %d = %d\n", x1, x2, x3, x4, Sum_x);

	_getch();

}