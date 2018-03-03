#include <stdio.h>
#include <conio.h>
#include <math.h>

typedef struct sophuc
{
	float thuc;
	float ao;
} SOPHUC;

void NhapSoPhuc(sophuc &p, char chuoi[255]);
void XuatSoPhuc(sophuc p, char chuoi[255]);
float TinhModun(sophuc p);

sophuc operator+(sophuc a, sophuc b);
sophuc operator-(sophuc a, sophuc b);
sophuc operator*(sophuc a, sophuc b);
sophuc operator/(sophuc a, sophuc b);

