#include "bai4.h"
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
int DemChu(char *s)
{
	int count = 0;
	if (s[0] != ' ')
		count++;
	
	for (int i = 0; i < strlen(s); i++)
	if (s[i] == ' '&&s[i + 1] != ' ')
		count++;
	return count;
}