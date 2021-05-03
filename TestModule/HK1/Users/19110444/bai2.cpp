#include <stdio.h>
#include <string.h>
int tinhtoan(char s1[],char s2[]);
int chuyenso(char s[]);
void main()
{
	char s1[100],s2[100];
	gets(s1);
	gets(s2);
	int kq=tinhtoan(s1,s2);
	printf("%d",kq);
}
int chuyenso(char s[])
{
	int kq=0;
	int ns=strlen(s);
	strrev(s);
	for (int i=0;i<ns;i++)
	{
		int kq1=1;
		for (int j=1;j<=i;j++)
			kq1=kq1*16;
		if (s[i]>='0' && s[i]<='9')
			kq=kq+kq1*(s[i]-'0');
		else
			kq=kq+kq1*(s[i]+10-'A');
	}
	return kq;
}
int tinhtoan(char s1[],char s2[])
{
	int a=chuyenso(s1);
	int b=chuyenso(s2);
	int t=a+b;
	return t;
}