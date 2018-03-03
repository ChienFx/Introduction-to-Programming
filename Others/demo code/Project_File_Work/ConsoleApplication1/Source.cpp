#include <stdio.h>
#include <conio.h>
#include <string.h>

struct hs
{
	char ms[10];
	char ten[30];
	char diachi[40];
};
void main()
{
	hs p;
	/*printf("\nNhap ms:");
	gets(p.ms);
	printf("\nNhap ten:");
	gets(p.ten);
	printf("\nNhap dc:");
	gets(p.diachi);*/
	FILE *f = fopen("dm.txt", "r");
	if (f != NULL)
	{
		fscanf(f, "%[^\t]\t\t%[^\t]\t\t%[^\t]\t\t", &p.ms,&p.ten,&p.diachi);
		fclose(f);
	}

	f = fopen("dm2.txt", "w");
	if (f != NULL)
	{
		fprintf(f, "%s\t\t%s\t\t%s\t\t", p.ms, p.ten, p.diachi);
		fclose(f);
	}
	
	//FILE* f = fopen("abc.txt", "rt");
	//if (f != NULL)
	//{
	//	char s[10];
	//	while (fgets(s, 10, f) != NULL)
	//	{
	//		printf("%s", s);
	//	}
	//	fclose(f);
	//}
	//
	//FILE* f = fopen("d:\\abc.txt", "rt");
	//if (f != NULL)
	//{
	//char c;
	//while ((c = fgetc(f)) != EOF)
	//{
	//printf("%c", c);
	//}
	//fclose(f);
	//}

	//FILE* f = fopen("d:\\abc.txt", "wt");
	//if (f != NULL)
	//{
	//putc('A', f);//fprintf(f,"%c",'A');
	//fputs("Toi di hoc", f);
	//fclose(f);
	//}
	//
	//FILE* f = fopen("abc.txt", "r+");
	//int N = 2,m;
	//char ch[255];
	//int A[3] = { 100,200,300};
	//if (f != NULL)
	//{
	//	fprintf(f, "%d\n", N);
	//	for (int i = 0; i < N; i++)
	//	{
	//		fprintf(f, "%5d", A[i]);
	//	}
	//	fprintf(f, "\nMRC");
	//	fscanf(f, "%d", &m);

	//	fclose(f);
	//}
	//printf("%d", m + 1);
	////
	////FILE* f = fopen("abc.txt", "wt");
	////int N = 3;
	////int A[3] = { 10,20,30 };
	////if (f != NULL)
	////{
	////	//tien hanh doc/ghi
	////	fprintf(f, "%d\n", N);
	////	for (int i=0;i<N;i++)
	////	fprintf(f, "%5d", A[i]);
	////	fclose(f);
	////}


	
	_getch();

}