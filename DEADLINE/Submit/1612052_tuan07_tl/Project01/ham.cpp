//#include "ham.h"
//void NhapMang(int a[], int n)
//{
//	for (int i = 0; i < n; i++)
//	{
//		printf("\nA[%d]: ",i);
//		scanf_s("%d", &a[i]);
//	}
//}
//void XuatMang(int a[], int n)
//{
//	printf("\nMang:");
//	for (int i = 0; i < n; i++)
//		printf("%d  ", a[i]);
//}
//int TimMinMang(int a[], int n)
//{
//	int min = a[0];
//	for (int i = 0; i < n; i++)
//	if (a[i] < min)
//		min = a[i];
//	return min;
//}
//int TimMaxMang(int a[], int n)
//{
//	int max = a[0];
//	for (int i = 0; i < n; i++)
//	if (a[i]>max)
//	{
//		max = a[i];
//	}
//	return max;
//}
//int TimGiaTriNhoNhi(int a[], int n)
//{
//	int NhoNhat = TimMinMang(a,n);
//	int NhoNhi = TimMaxMang(a, n);
//	for (int i = 0; i < n; i++)
//	if (a[i] != NhoNhat && a[i] < NhoNhi)
//		NhoNhi = a[i];
//	return NhoNhi;
//}////
//int TimGiaTriLonNhi(int a[], int n)
//{
//	int LonNhat = TimMaxMang(a, n);
//	int LonNhi = TimMinMang(a, n);
//	for (int i = 0; i < n; i++)
//	if (a[i] != LonNhat && a[i] > LonNhi)
//		LonNhi = a[i];
//	return LonNhi;
//}//
//int TimViTriDuongCuoi(int a[], int n)
//{
//	for (int i = n-1; i >=0; i--)
//	if (a[i]>0)
//		return i;
//	return -1;
//}
//int TimSoChanDauTien(int a[], int n)
//{
//	for (int i = 0; i < n; i++)
//	if (a[i] % 2 == 0)
//		return a[i];
//	return -1;
//}
//int TimViTriGiaTriNhoNhat(int a[], int n)
//{
//	int tmp = TimMinMang(a, n);
//	for (int i = 0; i < n; i++)
//	if (a[i] == tmp)
//		return i;
//	return -1;
//}
//int TimSNTCuoi(int a[], int n)
//{
//	for (int i = n-1; i >= 0; i--)
//	if (KiemTraSNT(a[i]))
//		return a[i];
//}
//int KiemTraSNT(int n)
//{
//	if (n < 2) return 0;
//	for (int i = 2; i <= sqrt(n+0.0);i++)
//	if (n%i == 0) return 0;
//	return 1;
//}