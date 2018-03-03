#include "ham.h"
void LietKeCacViTriCuaPhanTuLonNhat(int a[], int n)
{
	int max = TimMaxMang(a, n);
	printf("\nCac VI TRI dat GTLN: ");
	for (int i = 0; i < n; i++)
	if (a[i] == max) printf("a[%d]  ", i);
	printf("\n");
}
