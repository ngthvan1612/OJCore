#include<stdio.h>
#include<string.h>
#include<math.h>
int main()
{
	char s[1000],k[1000];
	gets(s);
	gets(k);
	unsigned long kq=0;
	int n=strlen(s);
	strrev(s);
	for(int i=0;i<n;i++)
		if(s[i]>='0'&&s[i]<='9')
			kq=kq+(s[i]-0);
		else
			kq=kq+(s[i]-55);
	int m=strlen(s);
	strrev(k);
	for(int i=0;i<m;i++)
		if(k[i]>='0'&&k[i]<='9')
			kq=kq+(k[i]-0);
		else
			kq=kq+(k[i]-55);
		printf("%d",kq);
		return kq;
}
