#include "ham.h"
void lietKeCacPhanTuCoItNhatMotLanCanLe(int a[],int n)
{
	for (int i = 0; i < n; i++)
	{
		if ((a[i + 1] % 2 != 0) || (a[i - 1] % 2 != 0))
		{
			printf("%d  ", a[i]);
		}
	}
}