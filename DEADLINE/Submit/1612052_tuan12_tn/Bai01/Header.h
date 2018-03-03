#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<math.h>
#include<Windows.h>

typedef struct HeSo
{
	float a[1000];
	float b[1000];
	float c[1000];
};

void DocFILE(int &n, HeSo &hs);
int TinhNghiem(HeSo hs, int vt, float &x1, float &x2);
void GhiFILE(int &n, HeSo &hs);
int GhiPT(FILE *f, HeSo hs, int vt);