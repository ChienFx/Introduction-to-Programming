#include "bai3.h"

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
void DaoNguoc(char *s)
{
	char tmp[255];
	strcpy_s(tmp, s);
	int len = strlen(s);
	for (int i = 0; i < len; i++)
		tmp[i] = s[len - i - 1];
	for (int i = 0; i < len; i++)
		s[i] = tmp[i];
}