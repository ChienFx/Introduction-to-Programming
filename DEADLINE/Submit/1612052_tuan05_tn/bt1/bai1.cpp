#include "bai1.h"

int chinhphuong(int n)
{
	float tmp = sqrt(n+0.0);
	if (fmod(tmp, 1) == 0) return 1;
	return 0;
}