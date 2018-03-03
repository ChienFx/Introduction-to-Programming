#include "ham.h"
int TimGiaTriXaXNhat(int a[], int n,float x)
{
	int kcach = 0, vt = 0;
	for (int i = 0; i < n; i++)
	if (abs(a[i] - x) > kcach)
	{
		kcach = abs(a[i] - x);
		vt = i;
	}
	return a[vt];
}