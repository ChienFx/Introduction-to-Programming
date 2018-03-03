/*BAI 1.3.3: CHUẨN HÓA XÂU HỌ TÊN
Một xâu họ tên được coi là viết chuẩn nếu chữ cai đầu tiên mỗi từ được viết hoa, các
cái khác viết thường. Các từ cach nhau đúng một dấu cách và không có khoảng trống t
ở đầu và cuối xâu. Hãy viết chương trình đưa cac xâu họ tên về dạng chuẩn.
Dữ liệu vào:
Dòng 1 ghi số bộ test. Mỗi bộ test ghi trên một dòng xâu ký tự họ tên, không quá
ký tự.
Kết quả (ghi ra màn hình):
Với mỗi bộ test ghi ra xâu ký tự họ tên đã chuẩn hóa.*/

//Cắt bỏ khoảng trắng thừa ở giữa, 2 đầu.
#include <stdio.h>
#include <conio.h>
#include <string.h>
void catkhoangtrang()
{
	char chuoi[1000];


	printf("\nInsert the String:");
	gets(chuoi);
	int dem = 0, n = strlen(chuoi);

	//Xóa đầu.
	while (chuoi[0] == ' ')
	{
		dem++;
		for (int i = 0; i < n - 1; i++)
			chuoi[i] = chuoi[i + 1];
	}
	//Xóa ở giữa
	for (int i = 0; i < n - dem; i++)
	if (chuoi[i] == ' ' && chuoi[i + 1] == ' ')
	{
		dem++;
		for (int j = i; j < n - 1; j++)
			chuoi[j] = chuoi[j + 1];
		i--;//xóa xong phải nhảy lại 
	}

	//Xóa đuôi cách 2:
	while (chuoi[n - 1] == ' ')
		dem++;

	chuoi[n - dem] = '\0';
	printf("\nChuoi dep ne:%s", chuoi);

}

//Chuyển đổi xâu sang dạng Title Case .
void TitleCase()
{//yêu cầu xóa hết dấu cách thừa như bài trên.
	char chuoi[100];
	printf("\nInsert a String: ");
	gets(chuoi);
	int n = strlen(chuoi);
	strlwr(chuoi);//viết thường tất cả.
	chuoi[0] = chuoi[0] - 32;
	for (int i = 0; i < n; i++)
	if (chuoi[i] == ' ')
		chuoi[i + 1] = chuoi[i + 1] - 32;

	printf("\nGood String: %s", chuoi);
}