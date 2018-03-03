#include "ham.h"

//Ham tim gia tri phần tử nguyên tố cuối cùng trong mang
//input: mang so nguyen a voi n phantu
//ouput: tra ve gia tri phần tử nguyên tố cuối cùng trong mảng
int TimSNTCuoi(int a[], int n)
{
	for (int i = n - 1; i >= 0; i--)
	if (KiemTraSNT(a[i]))
		return a[i];
}