#include<stdio.h>
#include<string.h>
#include<math.h>
void nhapchuoi(char S[], char Y[]);
long Doi_Sang_thapphan( char S[]);
long Doi_Sang_thapphan2( char Y[]);
void xuat( long kq, long kq2);
void Main()
{
	int T;
	char S[50];
	char Y[50];
	nhapchuoi(S,Y);
	long kq=Doi_Sang_thapphan(S);
	long kq2=Doi_Sang_thapphan2(Y);
	xuat(kq,kq2);
	T = kq +kq2;
	printf("%d",T);
	
}
void nhapchuoi(char S[],char Y[])
{
	gets(S);
	gets(Y);
}
long Doi_Sang_thapphan( char S[])
{
	long kq=0;
	int len=strlen(S);
	for(int i=0;i<len;i++)
	{
		if(S[i]>'0' && S[i]<'9')
			kq= kq+ (S[i]-'0')*(long)pow(16,len-i-1);
		else
			kq = kq + (S[i]-55)*(long)pow(16,len-i-1);
	}
	return kq;
}
long Doi_Sang_thapphan2( char Y[])
{
	long kq2=0;
	int len=strlen(Y);
	for(int i=0;i<len;i++)
	{
		if(Y[i]>'0' && Y[i]<'9')
			kq2= kq2+ (Y[i]-'0')*(long)pow(16,len-i-1);
		else
			kq2 = kq2 + (Y[i]-55)*(long)pow(16,len-i-1);
	}
	return kq2;
}
void xuat( long kq, long kq2)
{
	printf("%d",kq);
	printf("%d",kq2);
}