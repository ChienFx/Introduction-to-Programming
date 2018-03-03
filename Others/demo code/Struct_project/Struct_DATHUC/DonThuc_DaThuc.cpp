#include "func.h"

DATHUC TichDonThucVaDaThuc(DONTHUC T, DATHUC P)
{
	DATHUC tmp;

	tmp.n = P.n + T.n;
	int dem = tmp.n;

	for (int i = P.n; i >= 0; i--)
	{
		if (dem >= 0)
		{
			tmp.a[dem] = T.a * P.a[i];
			dem--;
		}
	}
	//Con lai cho bang khong
	for (int j = dem; j >= 0; j--)
		tmp.a[j] = 0;
	return tmp;
}