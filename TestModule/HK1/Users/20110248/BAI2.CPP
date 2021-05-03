#include<stdio.h>
#include<string.h>
#include<math.h>
double doi16sang10(char a[]);
void main()
{
	char a[100],b[100];
	gets(a);
	gets(b);
	strrev(a);
	strrev(b);
	double a1=doi16sang10(a);
	double b1=doi16sang10(b);
	double s=a1+b1;
	printf("%.0lf",s);
}
double doi16sang10(char a[])
{
	double s=0;
	int n=strlen(a);
	for(int i=0;i<n;i++)
		if(a[i]>='0' && a[i]<='9')
			s=s+(a[i]-'0')*pow(16,i);
		else
			s=s+(a[i]-'A'+10)*pow(16,i);
	return s;
}
