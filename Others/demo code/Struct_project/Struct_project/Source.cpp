#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include "demostruct.h"

int main()
{
	int n = 5;
	nhanvien snv[100];
	for (int i = 0; i < n; i++)
	{
		snv[i] = setnv();
	}
	//nhapds(snv, n);
	xuatds(snv, n);
	/*struct giacanh
	{
		char vc[30];
		int con;
	};
	struct nhanvien
	{
		char msnv[10];
		char ten[30];
		giacanh canhan;
	};
	nhanvien list[100];
	char temp[30];
	int n;
	printf("\nNhap so nhan vien:");
	gets_s(temp);
	n = atoi(temp);
	for (int i = 0; i < n; i++)
	{
		printf("\nmsnv: ");
		gets_s(list[i].msnv);
		

		printf("ten: ");
		gets_s(list[i].ten);
		printf("ten v/c: ");
		gets_s(list[i].canhan.vc);
		printf("so con: ");
		gets_s(temp);
		list[i].canhan.con = atoi(temp);
	
	}
	printf("\n\nLIST OF OFFICER:\n");

	for (int i = 0; i < n; i++)
	{
		printf("%s   %s    %s    %d\n", list[i].msnv, list[i].ten,list[i].canhan.vc,list[i].canhan.con);
	}

	/*struct province
	{
		int ma;
		char tinh[30];
	};
	province list[6] = { { 60, "Dong Nai" }, { 61, "Binh Duong" }, { 62, "Long An" },{ 63, "Tien Giang" }, { 64, "Vinh Long" }, { 65, "Can Tho" } };
	printf("\nNUM:");
	char temp[20];
	gets_s(temp);
	int test = atoi(temp);

	for (int i = 0; i < 6; i++)
	{
		if (test == list[i].ma)
		{
			printf("\n=> Tinh %s", list[i].tinh);
			break;
		}
			
	}
	//struct nhanvien
	//{
	//	char id[10];
	//	char name[24];
	//	int age;
	//};
	//nhanvien list[100];
	//int num=3;
	///*printf("\nInput number of officer:");
	//scanf_s("%d", &num);*/
	////Nhap danh sach nv

	//for (int i = 0; i < num; i++)
	//{
	//	printf("ID: ");
	//	gets_s(list[i].id);

	//	printf("Name: ");
	//	gets_s(list[i].name);
	//	printf("Age: ");
	//	char temp[10];
	//	gets_s(temp);
	//	list[i].age = atoi(temp);
	//}

	/*printf("\n\nLIST OF OFFICER:\n");

	for (int i = 0; i < num;  i++)
	{
		printf("%s\t%s\t%d\n", list[i].id, list[i].name, list[i].age);
	}*/
	_getch();
	return 0;
}
