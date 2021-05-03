#include<stdio.h>
#include<string.h>
double convert(char a[]);
double sum_16_10(char a[], char b[]);
void output(double  x);;

void main()
{
	char a[10],b[10];
	gets(a);
	gets(b);
	double sum=sum_16_10(a,b);
	output(sum);
}

double convert(char a[])
{
	double dec=0;
	int n=strlen(a);
	for (int i=0;i<n-1;i++)
	{
		if (a[i]<='9' && a[i]>='0')
			dec=(dec+(int)a[i]-48)*16;
		else if (a[i]>='A' && a[i]<='F')
			dec=(dec+(int)a[i]-55)*16;
	}
	if (a[i]<='9' && a[i]>='0')
			dec=(dec+(int)a[i]-48);
	else if (a[i]>='A' && a[i]<='F')
			dec=(dec+(int)a[i]-55);
	return dec;
}

double sum_16_10(char a[], char b[])
{
	double sum=convert(a)+convert(b);
	return sum;
}

void output(double x)
{
	printf("%.0lf",x);
}
