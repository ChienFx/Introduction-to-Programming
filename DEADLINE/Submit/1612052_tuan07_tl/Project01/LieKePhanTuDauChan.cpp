#include "ham.h"
int KiemTraDauChan(int n)
{
	int temp, dem = 0, chusodau;
	if (n < 0) n = -n;
	temp = n;
	while (temp > 0)
	{
		temp = temp / 10;
		dem++;
	}
	chusodau = n / ((int)(pow((float)10, dem - 1)));
	if (chusodau % 2 == 0) return 1;
	return 0;
}
void LietKePhanTuCoChuSoDauChan(int a[], int n)
{
	printf("\nCac gia tri co chu so dau tien CHAN: ");
	for (int i = 0; i < n; i++)
	if (KiemTraDauChan(a[i]))
		printf("%4d ", a[i]);
}