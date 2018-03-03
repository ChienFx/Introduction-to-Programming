#include "bai2.h"
int main()
{
	int n;
	do{
		printf("\nNhap n:");
		scanf_s("%d", &n);
		
	} while (n < 0);
	printf("\nSo hoan thien < %d:",n);
	for (int i = 1; i <= n;i++)
	if (i == tonguoc(i))
		printf("%d  ",i);

	_getch();
	return 0;
}