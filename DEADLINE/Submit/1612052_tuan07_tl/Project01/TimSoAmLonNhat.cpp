#include "ham.h"
//Tìm Số âm lớn nhất
//Input mang so nguyen a co n phan tu
//ouput phan tu am lon nhat.
int amlonnhat(int a[], int n)
{
	int am = 0;
	for (int i = 0; i < n; i++)
	if (a[i] < 0)
	{
		am = a[i];
		break;
	}
	for (int i = 0; i < n; i++)
	if (a[i] > am && a[i] <0) am = a[i];
	return am;
}