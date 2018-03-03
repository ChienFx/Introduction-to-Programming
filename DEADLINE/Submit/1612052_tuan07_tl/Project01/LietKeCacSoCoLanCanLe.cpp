#include "ham.h"
void LietKeSoCoLanCanLe(int a[], int n)
{
	printf("\nCac so chan co it nhat 1 lan can le la: ");
	if (a[1] % 2 != 0) printf("%4d", a[0]);	// Kiểm tra riêng a[0]

	for (int i = 1; i <= n - 2; i++)
	if (a[i - 1] % 2 != 0 || a[i + 1] % 2 != 0)
		printf("%4d", a[i]);

	if (a[n - 2] % 2 != 0)
		printf("%4d", a[n - 1]);	//Kiểm tra riêng a[n-1] 
	printf("\n");
}
