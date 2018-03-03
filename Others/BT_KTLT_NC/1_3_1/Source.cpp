/*BAI 1.3.1: PHÉP CỘNG SỐ NGUYÊN LỚN
Viết chương trình cộng hai số nguyên dương bất kỳ (không quá 256 chữ số).
Dữ liệu vào:
Dòng 1 ghi số bộ test. Mỗi bộ test gồm 2 dòng, mỗi dòng ghi một số nguyên dương
Kết quả (ghi ra màn hình):
Với mỗi bộ test ghi ra một số nguyên dương là tổng hai số đã cho (số này cũng
không quá 256 chữ số).
*/
#include <stdio.h>
#include <conio.h>
#include <string.h>
int FillZero(char num1[], char num2[]);
void Tong(char num1[], char num2[], char S[100]);
int main()
{
	char num1[30], num2[30],s[100];
	puts("Nhap so thu nhat:");
	gets_s(num1);
	puts("Nhap so thu hai:");
	gets_s(num2);

	printf("\nLength max: %d\n",FillZero(num1,num2));
	/*printf("\nAfter fill zero: \n");
	puts(num1);
	puts(num2);*/
	Tong(num1,num2,s);
	_getch();
	return 0;
}

int FillZero(char num1[], char num2[])//return length(num1=num2), the function will fill zero for short num
{
	int x1 = strlen(num1), x2 = strlen(num2);
	int iLen;
	if (x1 >= x2) iLen = x1;
	else iLen = x2;	
	
	if (x1 < x2)
	{
		char temp[100];
		strncpy_s(temp, num1, x1);//copy num1 to temp;
		temp[x1] = '\0';
		for (int i = 0; i < iLen; i++) 
			num1[i] = '0';//create empty string with '0'
		num1[iLen] = '\0';
		int j = 0;
		for (int i = iLen - x1; i < iLen; i++)
		{
			num1[i] = temp[j++];//gan xong roi cong
		}
		num1[iLen] = '\0';
	}
	else if (x1 > x2)
	{
		char temp[100];
		strncpy_s(temp, num2, x2);//copy num1 to temp;
		temp[x2] = '\0';
		for (int i = 0; i < iLen; i++)
			num2[i] = '0';//create empty string with '0'
		num2[iLen] = '\0';
		int j = 0;
		for (int i = iLen - x2; i < iLen; i++)
		{
			num2[i] = temp[j];
			j++;
		}
		num2[iLen] = '\0';
	}
	else return iLen;
	return iLen;
}

void Tong(char num1[], char num2[],char s[100])
{
	int n = strlen(num1),nho = 0;

	for (int i = 0; i < n; i++) 
		s[i] = '0';
	s[n] = '\0';

	for (int i = n - 1; i >= 0; i--)
	{
		if (num1[i] + num2[i] + nho - 48 > 57)//57 la so 9
		{
			s[i] = num1[i] + num2[i] + nho-58;//58 là 9+1
			nho = 1;
		}
		else
		{
			s[i] = num1[i] + num2[i] + nho - 48;
			nho = 0;
		}

	}
	printf("\n\nTong: ");
	if (nho == 1)
	{
		s[n + 1] = '\0';
		for (int i = n; i >= 0; i--)
			s[i] = s[i - 1];
		s[0] = '1';
	}
	puts(s);
}