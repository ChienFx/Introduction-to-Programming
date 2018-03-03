#include "Bai2.h"


int isPrime(int n)
{
	if (n < 2) return 0;
	if (n == 2)return 1;
	for (int i = 2; i <= sqrt(n + 0.0);i++)
	if (n%i == 0) return 0;
	return 1;
}
int findPrime(int n)
{
	for (int i = n; i >= 0;i--)
	if (isPrime(i))
		return i;
	return -1;
}