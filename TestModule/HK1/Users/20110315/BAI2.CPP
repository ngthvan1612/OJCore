#include<stdio.h>
#include<string.h>
#include<math.h>
long doi(char s[]);

void main()
{
	char a[30],b[30];
	gets(a);
	gets(b);
	long d1=doi(a);
	long d2=doi(b);
	long tong=d1+d2;
	printf("%ld",tong);
}
long doi(char s[])
{
	long kq=0;
	int n=strlen(s);
	s=strrev(s);
	for(int i=0;i<n;i++)
		if(s[i]>='0'&&s[i]<='9')
			kq=kq+(s[i]-'0')*(long)pow(16,i);
		else
			kq=kq+(s[i]-55)*(long)pow(16,i);
		return kq;
}


