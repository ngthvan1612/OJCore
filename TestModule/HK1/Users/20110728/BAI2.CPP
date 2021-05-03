#include <Stdio.h>
#include <string.h>
#include <math.h>
double tinhtong(char *s);
void main()
{
	char s1[10], s2[10];
	gets(s1);
	gets(s2);
	double tong = 0;
	tong += tinhtong(s1);
	tong += tinhtong(s2);
	printf("%.0lf", tong);

}
double tinhtong(char *s)
{
	int length = strlen(s);
	double tong = 0;
	int t = length - 1;
	for(int i = 0; i < length; i++)
	{
		if(s[i] >= '0' && s[i] <= '9')
		{
			tong += (s[i] - 48)*pow((float)16,t);
		}
		if(s[i] >= 'A' && s[i] <= 'F')
		{
			tong += (s[i] - 65 + 10)*pow((float)16,t);
		}
		t--;
	}
	return tong;
}