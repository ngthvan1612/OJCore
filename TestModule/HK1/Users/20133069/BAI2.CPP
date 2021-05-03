#include<stdio.h>
#include<string.h>

void xuat(int kq);
int chuyenhe(char s[]);
int tong(char a[], char b[]);

int main()
{
	char a[11],b[11];
	gets(a);
	gets(b);
	int kq=tong(a,b);
	xuat(kq);
	return 0;
}
void xuat(int kq)
{
	printf("%d", kq);
}
int chuyenhe(char s[])
{
	int a[10];
	int heso=0;
	int n=strlen(s);
	for (int i=0; i<n; i++)
	{
		if (s[i]>='0' && s[i]<='9')
			a[i]=s[i]-'0';
		else if (s[i]=='A')
				a[i]=10;
		else if (s[i]=='B')
				a[i]=11;
		else if (s[i]=='C')
				a[i]=12;
		else if (s[i]=='D')
				a[i]=13;
		else if (s[i]=='E')
				a[i]=14;
		else if (s[i]=='F')
				a[i]=15;
	}
	int h=16;
	int l=n;
	for (int k=0; k<n; k++);
	{
		for (int mu=1; mu<l-1; l--)
			h*=h;
		heso=heso+a[k]*h;
		h=16;
	}
	return heso;
}
int tong(char a[], char b[])
{
	int t=chuyenhe(a)+chuyenhe(b);
	return t;
}
