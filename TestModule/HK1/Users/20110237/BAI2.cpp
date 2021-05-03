#include<stdio.h>
#include<string.h>
void xuat(int x);
int doi(char s[]);
int tinh(char a[], char b[]);

int main()
{
	char a[11],b[11];
	gets(a);gets(b);
	int kq=tinh(a,b);
	xuat(kq);
	return 0;
}
void xuat(int x)
{
	printf("%d", x);
}
int doi(char s[])
{
	int l=strlen(s);
	int heSo=1,tong=0;
	for(int i=l-1;i>=0;i--)
	{
		if (s[i] >= '0' && s[i] <= '9')
		{
			tong+=(s[i]-'0')*heSo;
		}
		else 
			tong+=(s[i]+10-'A')*heSo;
		heSo=heSo*16;		
	}
	return tong;
}
int tinh(char a[], char b[])
{
	int x=doi(a);
	int y=doi(b);
	return (x+y);	
}
