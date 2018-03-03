#include "ham.h"
void LietKeGiaTriTrongDoan(int a[], int n, int x, int y)
{
	printf("\nCac so thuoc doan [%d ; %d]: ", x, y);
	for (int i = 0; i < n; i++)
	if (a[i] >= x && a[i] <= y)
		printf("%5.1f", a[i]);
	printf("\n");
}
