#include<stdio.h>
#include<math.h>
#include<string.h>

void nhap(char S1[], char S2[]);
double xuly(char S1[], char S2[]);
void xuat(double kt);

void main()
{
	char S1[11],S2[11];
	nhap(S1,S2);
	double kt=xuly(S1,S2);
	xuat(kt);
}

void nhap(char S1[], char S2[])
{
	gets(S1);
	gets(S2);
}

double xuly(char S1[], char S2[])
{
	double a=0;
	double b=0;
	double sum=0;
	int len1=strlen(S1);
	int len2=strlen(S2);
	for(int i = 0; i < len1; i++)
	{
		if(S1[i] >= '0' && S1[i] <= '9')
			a = a + (S1[i]-'0')*pow(16,len1-i-1);
		else
			a = a + (S1[i]-'0'+10)*pow(16,len1-i-1);
	}
	for(int j = 0; j < len2; j++)
	{
		if(S2[j] >= '0' && S2[j] <= '9')
			b = b + (S2[j]-'0')*pow(16,len2-j-1);
		else
			b = b + (S2[j]-'0'+10)*pow(16,len2-j-1);
	}
	sum = a +b;
	return sum;
}

void xuat(double kt)
{
	printf("%.0lf", kt);
}
