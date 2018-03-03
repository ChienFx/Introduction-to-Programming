#include "bai5.h"
void NhapMang1Chieu(int a[MAX], int &n, char chuoi[255])
{
	do
	{
		printf("\n%s", chuoi);//
		scanf_s("%d", &n);
	} while (n<1 || n>MAX);

	srand((unsigned int)time(0));
	for (int i = 0; i < n; i++)
		a[i] = rand() % 100 - 50;
		//scanf_s("%d", &a[i]);

}
void XuatMang1Chieu(int a[MAX], int n, char chuoi[255])
{
	printf("\n%s", chuoi);
	for (int i = 0; i < n; i++)
		printf("%-3d  ", a[i]);
	printf("\n");
}

int TimPhanTuNhoThuK(int a[MAX], int n, int k)
{
	int tmp = 1;
	int minIndex = 0;
	bool c[MAX] = { false };
	while (tmp < k)
	{
		for (int i = 0; i < n; i++)
		if (a[i]<a[minIndex]&&c[i]==false)
			minIndex =i;

		for (int i = 0; i < n; i++)
		if (a[i]==a[minIndex])
			c[i]=true;//danh dau thang min thu TMP
		for (int i = 0; i < n; i++)
		if (c[i] == false)
		{
			minIndex = i;
			break;
		}
		tmp++;
	}
	
		
	int min;
	for (int i = 0; i < n;i++)
	if (c[i] == false)
	{
		min = a[i];
		break;
	}
	for (int i = 0; i < n;i++)
	if (c[i] == false && a[i] < min)
		min = a[i];
	return min;
}