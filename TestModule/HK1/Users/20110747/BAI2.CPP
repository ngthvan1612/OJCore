#include<stdio.h>
#include<string.h>
long doisangthapphan(char S[]);
void nhap(char S[]);
void xuat(long kq);
void main()
{
	char S[30];
	nhap(S);
	long kq=doisangthapphan(S);
	xuat(kq);
}
long doisangthapphan(char S[])
{
	long kq=0;
	int len=strlen(S);
	for(int i=0;i<len;i++)
		if(S[i]>='0'&&S[i]<='9')
			kq=kq+(S[i]-'0')*(long)pow(16,len-i-1);
		else
			kq=kq+(S[i]-55)*(long)pow(16,len-i-1);
	return kq;
}
void nhap(char S[])
{
	gets(S);
}
void xuat(long kq)
{
	printf("%ld",kq);
}


