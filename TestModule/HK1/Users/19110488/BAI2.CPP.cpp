#include<stdio.h>
#include<string.h>
#include<math.h>
long tong(char a[], char b[]);
long doi(char s[]);
void nhap(char a[], char b[]);

int main()
{
	char a[10],b[10];
	nhap(a,b);
	printf("%d",tong(a,b));
	return 0;
}
void nhap(char a[], char b[])
{
	gets(a);
	gets(b);
}
long doi(char s[])
{
	long kq=0;
	int len= strlen(s);
	for(int i=0;i<len;i++)
	{
	if(s[i]>='0'&&s[i]<='9')
		kq=kq+(s[i]-'0')*(long)pow(16,len-i-1);
	else
		kq=kq+(s[i]-55)*(long)pow(16,len-i-1);
	}
	return kq;
}
long tong(char a[], char b[])
{
	return doi(a)+doi(b);
}
