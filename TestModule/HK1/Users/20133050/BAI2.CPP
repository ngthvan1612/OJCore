#include<stdio.h>
#include<string.h>
#include<math.h>
void xuat(double kq);
double doisangthapphan(char S[]);
void main()
{
	char S1[256];
	char S2[256];
	gets(S1);
	gets(S2);
	double kq1=doisangthapphan(S1);
	double kq2=doisangthapphan(S2);
	double kq=kq1+kq2;
	xuat(kq);
}
void xuat(double kq)
{
	printf("%0.lf", kq);
}
double doisangthapphan(char S[])
{
	double s=0;
	int n=strlen(S);
	S=strrev(S);
	for(int i=0; i<n; i++)
	{
		if(S[i]>='0' && S[i]<='9')
			s=s+(S[i]-'0')*(double)pow(16,i);
		else
			s=s+(S[i]-55)*(double)pow(16,i);
	}
	return s;
}