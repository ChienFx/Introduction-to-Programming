/*BAI 1.3.2: DANH SÁCH ĐIỆN THOẠI NHẤT QUÁN
Cho một danh sách các số điện thoại, hãy xac định danh sách này có số điện thoại nào là
phần trước của số khác hay không? Nếu không thì danh sach này được gọi là nhất quán.
Giả sử một danh sách có chứa các số điện thoại sau:
- Số khẩn cấp: 911
- Số của alice: 97 625 999
- Số của Bob: 91 12 54 26
Trong trường hợp này, ta không thể gọi cho Bob vì tổng đài sẽ kết nối bạn với đường dây
khẩn cấp ngay khi bạn quay 3 số đầu trong số của Bob, vì vậy danh sách này là không nhất
quán.*/

#include <stdio.h>
#include <conio.h>
#include <math.h>
#include <string.h>
int TestSeem(char ch1[], char ch2[]);
int main()
{
	int n=5;
	char list[100][15];
	/*printf("\nNhap so luong PhoneNumber: ");
	scanf_s("%d", &n);*/

	for (int i = 0; i < n; i++)
	{
		printf("Num[%d]: ",i);
		gets_s(list[i]);
	}

	bool check = false;
	for (int i = 0; i < n - 1;i++)
		for (int j = i + 1; j < n;j++)
		if (TestSeem(list[i],list[j]))
		{
			check = true;
			break;
		}
		if (check)
		{
			printf("\nTrung !!");
		}
		else printf("\nKhong Trung!!");
	
	_getch();
	return 0;
}

int TestSeem(char ch1[], char ch2[])
{
	int x1 = strlen(ch1);
	int x2 = strlen(ch2);
	if (x1 <= x2)
	{
		for (int i = 0; i < x1;i++)
		if (ch1[i] != ch2[i]) return 0;
	}
	else
	{
		for (int i = 0; i < x2; i++)
		if (ch1[i] != ch2[i]) return 0;
	}
	return 1;
}