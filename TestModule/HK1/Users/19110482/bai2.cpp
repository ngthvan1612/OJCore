#include<stdio.h>
#include<string.h>
#include<math.h>
long doisangthapphan(char s[]);
void xuat(long kq);
void main()
{
	char s[50];
	gets(s);
	fflush(stdin);
	long kq=doisangthapphan(s);
	xuat (kq);
}
long doisangthapphan(char s[])
{
	long kq=0;
	int l=strlen(s);
	for(int i=0;i<l;i++)
	{
		if(s[i]>'0'&&s[i]<'9')
		kq=kq+(S[i]-'0')*(long)pow(16,l-i-1);
		else
		kq=kq kq+(S[i]-55)*(long)pow(16,l-i-1);
	}
	return kq;
}
void xuat(long kq)
{
	printf("%d",kq);
}
