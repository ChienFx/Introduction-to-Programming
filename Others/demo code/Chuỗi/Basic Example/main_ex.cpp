#include <stdio.h>
#include <conio.h>
#include <string.h>
//Thao tac co ban(làm quen)
void testthu()
{
/////	char name[30];
////	char chao[]="nice to meet you,";
////	printf("\nwhat's your name ?\n- i'm ");
////	scanf("%s",name);
////	printf("\noh! nice to meet you, %s",name);
////
////	puts("my name is: ");
////	gets(name);
////	puts("hello ");
////	puts(name);
////
////	//printf("\nwhat's your name ?\n- i'm ");
////	//gets(name);								// hàm gets() cho phép nhập cả dấu cách ( space )
////	//printf("%s %s.\n",chao,name);
////
////	//char cthang[13][13] = {"january","february", "march", "april", 
////	//						"may", "june", "july", "august", "september",
////	//						"october","november","december"};//mảng chuỗi
////	//int ithang;
////	//printf("\nthang: ");
////	//scanf("%d",&ithang);
////	//printf("\nthang %d la: %s",ithang,cthang[ithang-1]); //cthang là mảng nên chỉ số 0.1.2.3....
}
//Tách tên và tên lót từ chuỗi tên cho trước.
void tachten()
{
	char hoten[50];
	char ten[10],lot[20];
	printf("\nInsert a Full name: ");
	gets(hoten);						//nhập xâu
	int n = strlen(hoten);
	int mark;

	for(int i = n; i >= 0; i--)
		if(hoten[i-1] == ' ') 
			{
				strncpy(ten,hoten+i,n-i);	//Copy n-1 kí tự bắt đầu từ vị trí thứ i của xâu hoten vào xâu ten
				ten[n-i] = '\0';				// end xâu.
				mark = i-1;					//đánh giấu tại i-1 có khoảng trắng.
				break;
			}
	for(int i = 0; i < mark; i++)
		if(hoten[i-1] == ' ')
		{
			strncpy(lot,hoten+i,mark-i);
			lot[mark-i] = '\0';
			break;
		}

	printf("\n\nYour Full name: %s",hoten);
	printf("\nYour name: %s",ten);
	printf("\nYour Middle name: %s",lot);

}

//Cắt bỏ khoảng trắng thừa ở giữa, 2 đầu.
void catkhoangtrang()
{
	char chuoi[1000];
	

	printf("\nInsert the String:");
	gets(chuoi);
	int dem=0,n = strlen(chuoi);

	//Xóa đầu.
	while(chuoi[0] == ' ')
	{
		dem++;
		for(int i = 0; i < n-1; i++)
			chuoi[i] = chuoi[i+1];
	}
	//Xóa ở giữa
	for(int i = 0; i < n-dem; i++)
		if(chuoi[i] ==' ' && chuoi[i+1] ==' ')
		{
			dem++;
			for(int j = i; j < n-1; j++)
				chuoi[j] = chuoi[j+1];
			i--;//xóa xong phải nhảy lại 
		}

	//Xóa đuôi cách 2:
	while(chuoi[n-1] == ' ')
			dem++;

	chuoi[n-dem] = '\0';
	printf("\nChuoi dep ne:%s",chuoi);

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
	for(int i = 0; i < n; i++)
		if(chuoi[i] == ' ')
			chuoi[i+1] = chuoi[i+1] - 32;

	printf("\nGood String: %s",chuoi);
}
----------int main()
{
	
MrC:
	
	//tachten();
	//catkhoangtrang();
	TitleCase();

	printf("\n\nCo tiep tuc ko? :");
	char tiep = getch();
	if(tiep == 'c' || tiep =='C') goto MrC;
	return 0;
}