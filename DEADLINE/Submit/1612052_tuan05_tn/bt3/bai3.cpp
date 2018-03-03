#include "bai3.h"

int tongchan(int dau,int cuoi, int&dem)
{
	dem = 0;
	int s = 0;
	for (int i = dau; i <= cuoi;i++)
	if (i % 2 == 0)
	{
		s = s + i;
		dem++;
	}
	return s;
}