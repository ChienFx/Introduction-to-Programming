#include "bai5.h"

void NhapChuoi(char *s, char *thongBao)
{
	printf("%s", thongBao);
	fflush(stdin);
	//scanf_s("%s", s);
	int i = 0, ch;
	for (i = 0; (i < 255) && ((ch = getchar()) != EOF) && (ch != '\n'); i++)
	{
		s[i] = (char)ch;
	}
	s[i] = '\0';
}
void XuatChuoi(char *s, char *thongBao)
{
	printf("%s%s", thongBao, s);
}

void XoaKhoangTrangThua(char *s)
{

	int len = strlen(s);
	
	for (int i = 0; i < len;i++)
	if (s[i] == ' '||s[i]=='\t')
	{
		for (int j = i; j < len-1; j++)
		{
			s[j] = s[j + 1];
		}
		i--;
		len--;
	}
	s[len] = '\0';

}