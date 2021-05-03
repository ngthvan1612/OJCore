#include<stdio.h>
#include<string.h>
long doisangcoso(char s[]);
void main()
{
	char s1[100],s2[100];
	gets(s1);
	gets(s2);
	long kq1=doisangcoso(s1);
    long kq2=doisangcoso(s2);
	printf("%d",kq1+kq2);

}

long doisangcoso(char s[])
{
	long kq=0;
	int len=strlen(s);
	s= strrev(s);
	for(int i=0;i<len;i++)
		if (s[i]>='0'&& s[i]<='9')

			kq=kq+(s[i]-'0')*((long)pow(16,i));
		else kq=kq+(s[i]-55)*((long)pow(16,i));
	return kq;
}