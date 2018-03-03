/*bai 04. Liệt kê tất cả các ước số của số nguyên dương n. 
Cho biết có bao nhiêu ước số và tìm tổng của tất cả các số ước số đó.*/
#include <stdio.h>
#include <conio.h>

int main()
{
	int n, dem = 0,s=0;
MrC:

	printf("\nnhap n:");
	scanf_s("%d", &n);
	if (n < 0)
	{
		printf("\nYeu cau nhap so nguyen duong!!");
		goto MrC;
	}
	printf("\nCac uoc: ");
	for (int i = 1; i <= n; i++)
	{
		if (n%i == 0)
		{
			printf("%3d ", i);
			dem++;
			s += i;
		}
	}
	printf("\nSo uoc: %d", dem);
	printf("\nTong cac uoc: %d", s);
	_getch();
	return 0;

}