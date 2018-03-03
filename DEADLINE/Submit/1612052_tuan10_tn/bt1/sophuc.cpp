#include "sophuc.h"

void NhapSoPhuc(sophuc &p, char chuoi[255])
{
	printf("%s", chuoi);
	printf(" - Phan thuc: "); scanf_s("%f", &p.thuc);
	printf(" - Phan ao: "); scanf_s("%f", &p.ao);

}
void XuatSoPhuc(sophuc p, char chuoi[255])
{
	printf("%s", chuoi);
	if (p.thuc == 0 && p.ao == 0)
		printf("0");
	else
	{
		if (p.thuc ==0)
			printf("0");
		else
		printf("%0.3f", p.thuc);
		if (p.ao < 0)
			printf(" %0.3f*i", p.ao);
		else if (p.ao > 0)
			printf(" + %0.3f*i", p.ao);
		else printf("");
	}
}

float TinhModun(sophuc p)
{
	float md = sqrt(pow(p.thuc, 2) + pow(p.ao, 2));
	return md;
}


sophuc operator+(sophuc a, sophuc b)
{
	sophuc tong;
	tong.thuc = a.thuc + b.thuc;
	tong.ao = a.ao + b.ao;
	return tong;
}
sophuc operator-(sophuc a, sophuc b)
{
	sophuc tong;
	tong.thuc = a.thuc - b.thuc;
	tong.ao = a.ao - b.ao;
	return tong;
}
sophuc operator*(sophuc a, sophuc b)
{
	sophuc tich;
	tich.thuc = a.thuc * b.thuc - a.ao*b.ao;
	tich.ao = a.thuc * b.ao + a.ao*b.thuc;
	return tich;
}
sophuc operator/(sophuc a, sophuc b)
{
	sophuc thuong, blienhop;
	blienhop.thuc = b.thuc;
	blienhop.ao = -b.ao;
	float mau = pow(b.thuc, 2) + pow(b.ao, 2);
	sophuc tu = a*blienhop;
	thuong.thuc = tu.thuc / mau;
	thuong.ao = tu.ao / mau;
	return thuong;
}
