#include<stdio.h>
#include<string.h>
#include<math.h>


long xuly(char s1[], char s2[])
{
	long kq1=0,kq2=0;
	int len1=strlen(s1);
	int len2=strlen(s2);
	s1=strrev(s1);
	s2=strrev(s2);
	for(int i=0; i<len1; i++)
		if(s1[i]>='0' && s1[i]<='9')
			kq1=kq1+(s1[i]-'0')*(long)pow(16,i);
		else
			kq1=kq1+(s1[i]-55)*(long)pow(16,i);
	for(int j=0; j<len2; j++)
		if(s2[j]>='0' && s2[j]<='9')
			kq2=kq2+(s2[j]-'0')*(long)pow(16,j);
		else
			kq2=kq2+(s2[j]-55)*(long)pow(16,j);
	long kq=kq1+kq2;  
	return kq;
}
void xuat(long kq)
{
	printf("%ld ", kq);
}
void main()
{
	char s1[100],s2[100];
	scanf("%s", s1);
	scanf("%s", s2);
	long kq=xuly(s1,s2);
	xuat(kq);
}