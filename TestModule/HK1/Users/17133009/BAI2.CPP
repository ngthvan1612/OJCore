#include<stdio.h>
#include<string.h>
#include<math.h>

long doi10(char s[])
{
	long kq=0;
	int l=strlen(s);
	s=strrev(s);
	for(int i=0;i<l;i++)
		if(s[i]>='0' &&s[i]<='9')
			kq+=(s[i]-'0')*(long)pow(16,i);
		else
			kq+=(s[i]-55)*(long)pow(16,i);
	return kq;
}
void main()
{
	char s1[11],s2[11];
	gets(s1);
	gets(s2);
	long n1=doi10(s1);
	long n2=doi10(s2);
	printf("%ld",n1+n2);
}