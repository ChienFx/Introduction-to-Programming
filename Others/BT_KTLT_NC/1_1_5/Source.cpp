/*SỐ ĐẸP 1
Một số được coi là đẹp nếu nó là số thuận nghịch, tổng chữ số là số nguyên tố và tất cả các
chữ số đều lẻ. Bài toan đặt ra là đếm xem trong một đoạn giữa hai số nguyên cho trước có
bao nhiêu số đẹp như vậy
SỐ ĐẸP 2
Một số được coi là đẹp nếu nếu nó có tính chất thuận nghịch và tổng chữ số chia hết cho
10. Bài toan đặt ra là cho trước số chữ số. Hãy đếm xem có bao nhiêu số đẹp với số chữ
số như vậy.*/
#include <stdio.h>
#include <conio.h>
#include <math.h>

int isPrime(int);
int ThuanNghich(int);//So dao
int TongChuSo(int);
int Odd(int);
int BeautyNum1(int);
int BeautyNum2(int);

int main()
{
	/*long dau = 23, cuoi = 199;
	int count = 0;
	for (long i = dau; i <= cuoi;i++)
	if (BeautyNum1(i)) count++;
	printf("%d", count);*/

	int n = 5, dau = (int)pow(10.0, n-1), cuoi = (int)pow(10.0, n) - 1, count = 0;

	for (int i = dau; i <= cuoi; i++) 
	if (BeautyNum2(i)) count++;

	printf("%d", count);
	_getch();
	return 0;
}
int isPrime(int n)
{
	if (n < 2)return 0;
	//if (n == 2)return 1;
	for (int i = 2; i <= sqrt((float)n); i++)
		if (n % i == 0) return 0;
	return 1;
}
int ThuanNghich(int n)
{
	int Temp = n;
	int NumNew = Temp % 10;
	Temp /= 10;
	while (Temp > 0)
	{
		NumNew = NumNew * 10 + Temp % 10;
		Temp /= 10;
	}
	if (n != NumNew) return 0;
	return 1;
}

int TongChuSo(int n)
{
	int s = 0;
	while (n > 0)
	{
		s += n % 10;
		n /= 10;
	}
	return s;
}

int Odd(int n)
{
	int temp = n;
	while (temp > 0)
	{
		if ((temp % 10) % 2 == 0) return 0;
		temp /= 10;
	}
	return 1;
}

int BeautyNum1(int n)
{
	if (ThuanNghich(n) && isPrime(TongChuSo(n))&&Odd(n)) return 1;
	return 0;
}

int BeautyNum2(int n)
{
	if (ThuanNghich(n) && (TongChuSo(n) % 10 == 0)) return 1;
	return 0;
}