#include "bai9.h"

int KiemTraToiGian(int a, int b)
{
	int min = (a < b) ? a : b;
	for (int i = 2; i <= min;i++)
	if (a%i == 0 && b%i == 0)
		return 0;
	return 1;
}

void XuatKetQua()
{
	printf("\nCac phan so thuoc (0,1) co mau < 7: ");
	for (int tu = 1; tu <= 6;tu++)
	for (int mau = 2; mau <= 7; mau++)
	{
		if (KiemTraToiGian(tu, mau))
			printf("\n%d/%d",tu,mau);
	}
}