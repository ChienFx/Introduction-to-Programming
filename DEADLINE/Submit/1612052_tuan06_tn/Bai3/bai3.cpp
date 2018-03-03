#include "Bai3.h"

float LuyThua(float x, int n)
{
	float kq = 1;
	for (int i = 1; i <= n; i++)
		kq *= x;
	return kq;
}

float TinhTong(float x, int n)
{
	float s = LuyThua(1.5, 8);
	for (int i = 1; i <= n; i++)
	{
		s = s + LuyThua(-1, i)*LuyThua(x + i, i) / LuyThua(i, i);
	}
	return s;
}