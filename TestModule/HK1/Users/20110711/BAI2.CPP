#include<stdio.h>
#include<string.h>
#include<math.h>
unsigned long doi16sang10(char s[]);
void xuat(unsigned long kq1,unsigned long kq2);
void main()
{
	char s[11]="";
	char t[11]="";
	gets(s);
	gets(t);
	unsigned long kq1=doi16sang10(s);
	unsigned long kq2=doi16sang10(t);
	xuat(kq1,kq2);
}
unsigned long doi16sang10(char s[])
{
	strrev(s);
	int l=strlen(s);
	unsigned long kq3=0;
	for(int i=0;i<l;i++)
		if(s[i]>='0'&&s[i]<='9')
			kq3=kq3+(s[i]-'0')*pow(16,i);
		else
			kq3=kq3+((s[i]-'A')+10)*pow(16,i);
	return kq3;
}
void xuat(unsigned long kq1,unsigned long kq2)
{
	printf("%d",kq1+kq2);
}

