#include<stdio.h>
#include<string.h>

void nhap(char a[10])
{
	gets(a);
}

void xuat(int kq)
{
	printf("%d",kq);
}

int doi(char a[10])
{
	int t=strlen(a);
	int s=0;
	for(int i=0;i<t;i++)
	{
		if (a[i]>='0' && a[i] <='9')
			s=s+a[i]-'0';
		if (a[i]>='A' && a[i] <='F')
			s=s+a[i] - 'A' + 10;
		if (i+1<t)
			s=s*16;
	}
	return s;
}

int main()
{
	char a[10],b[10];
	nhap(a);
	nhap(b);
	int kq=doi(a)+doi(b);
	xuat(kq);
	return 0;
}