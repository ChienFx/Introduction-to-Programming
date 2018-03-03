#include "bai7.h"
int DemSoChuSo(int n)
{
	int count = 0;
	while (n > 0)
	{
		count++;
		n /= 10;
	}
	return count;
}
int TinhTongAmstrong(int n)
{
	int s = 0;
	int SoChuSo = DemSoChuSo(n);
	while (n > 0)
	{
		s = s + pow(n % 10, SoChuSo + 0.0);
		n /= 10;
	}
	return s;
}
int KiemTraSoAmstrong(int n)
{
	if (n < 0) return 0;
	if (n == TinhTongAmstrong(n)) return 1;
	return 0;
}
void LietKeAmstrongNhoHonN(int n)
{
	printf("\nCac so Amstrong nho hon %d: ", n);
	for (int i = 0; i <= n;i++)
	if (KiemTraSoAmstrong(i))
		printf("%3d ", i);
}