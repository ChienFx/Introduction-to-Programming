#include "bai7.h"
float LamTronSo(double n, int k)
{
	double tmp = n;
	int i = 1;
	while (i <= k+1)
	{
		tmp = tmp * 10;
		i++;
	}//out with i=5, nhan voi k+1 chu so

	int nguyen = (int)tmp;//ep kieu
	if (nguyen % 10 >= 5)
		nguyen = nguyen / 10 + 1;
	else
		nguyen = nguyen / 10;

	float thapphan = 0.0;
	i = 1;
	while (i <= k)
	{
		int tmp = nguyen % 10;
		thapphan = thapphan*pow(10.0, -1) + pow(10.0, -1)*tmp;
		nguyen = nguyen / 10;
		i++;
	}
	return nguyen+thapphan;

}