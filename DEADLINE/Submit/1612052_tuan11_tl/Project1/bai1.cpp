#include "bai1.h"

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
	printf("%s%s", thongBao,s);
}
void VietHoa(char *s)
{
	for (int i = 0; i < strlen(s); i++)
	if (s[i] >= 'a' && s[i] <= 'z')
		s[i] -= 32;
}
void VietThuong(char *s)
{
	for (int i = 0; i < strlen(s); i++)
	if (s[i] >= 'A' && s[i] <= 'Z')
		s[i] += 32;
}
void vietTitleCase(char *s)
{
	VietThuong(s);
	if (s[0] != ' ')
		s[0] -= 32;
	for (int i = 0; i <= strlen(s);i++)
	if (s[i] == ' ' && s[i + 1] != ' ')
		s[i + 1] -= 32;
}

char *DaoNguoc(char *s)
{
	char *tmp="";
	int len = strlen(s);
	for (int i = 0; i < len; i++)
		tmp[i] = s[len - i - 1];
	return tmp;
}
bool KiemTraDoiXung(char *s)
{
	char *tmp = DaoNguoc(s);
	for (int i = 0; i < strlen(s);i++)
	if (s[i] != tmp[i])
		return false;
	return true;
}