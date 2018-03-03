#include "ham.h"
/*Tim trung binh cong cua cac so duong trong mang
input: mang nguyen a voi n phan tu
output: gia tri tbc
*/
float TinhTrungBinhCongPhanTuDuong(int a[], int n)
{
	float tbc = 0;
	int dem = 0;
	for (int i = 0; i < n; i++)
	{
		if (a[i]>0)
		{
			tbc += a[i];
			dem++;
		}
	}
	return tbc / dem;
}