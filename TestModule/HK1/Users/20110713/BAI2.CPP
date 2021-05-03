#include <stdio.h>
#include <string.h>
#include <math.h>

double xuli(char s[]);
void xuat(double kq1,double kq2);

int main()
{
	char a[20];
	gets(a);
	char b[20];
	gets(b);
	double kq1=xuli(a);
	double kq2=xuli(b);
	xuat(kq1,kq2);
	return 0;
}
void xuat(double kq1,double kq2)
{
	printf("%.0lf",kq1+kq2);
}
double xuli(char s[])
{
	strrev(s);
	long len=strlen(s);
	double kq=0;
	for(int i=0;i<len;i++)
		if(s[i]>='0'&&s[i]<='9')
			kq+=(s[i]-'0')*pow(16,i);
		else
			kq+=(s[i]-'A'+10)*pow(16,i);
	return kq;
}
