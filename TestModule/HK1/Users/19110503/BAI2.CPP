#include<stdio.h>
#include<string.h>
#include<math.h>
void nhap(char s1[],char s2[])
{
	gets(s1);
	gets(s2);
}
long doi(char s[])
{
	long kq=0;
	int slen=strlen(s);
	for(int i=0;i<slen;i++)
	{
		if(s[i]>='0'&& s[i]<='9')
			kq=kq+(s[i]-'0')*(long)pow(16,slen-i-1);
		else kq=kq+(s[i]-55)*(long)pow(16,slen-1-i);
	}
	return kq;
}
long kq(long a,long b)
{
	return a+b;
}
int main()
{
	char s1[11],s2[11];
	nhap(s1,s2);
	long kq1=doi(s1);
	long kq2=doi(s2);
	long tong=kq(kq1,kq2);
	printf("%ld",tong);
	return 0;
}