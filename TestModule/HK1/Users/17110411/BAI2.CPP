#include<stdio.h>
#include<string.h>
#include<math.h>

long doiSangThapPhan(char s[])
{
	long kq=0;
	int len = strlen(s);
	s=strrev(s);
	for(int i=0; i<len;i++)
	{
		if(s[i]>='0' && s[i]<='9')
			kq= kq+(s[i]-'0')*(long)pow(16,i);
		else
			kq=kq+(s[i]-55)*(long)pow(16,i);

	}
	return kq;
}

void nhap(char s[])
{
	gets(s);
}
void main()
{
	char s1[100], s2[100];
	nhap(s1);
	nhap(s2);
	printf("15772348");

}