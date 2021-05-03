#include<stdio.h>
#include<string.h>
#include<math.h>
void nhap(char a[],char b[]);
int tong10(char a[],char b[]);
void xuat(int kq);

void main()
{
	char a[11],b[11];
	nhap(a,b);
	int kq=tong10(a,b);
	xuat(kq);
}
void nhap(char a[],char b[])
{
	gets(a);
	gets(b);
}
int tong10(char a[],char b[])
{	
	strrev(a);
	strrev(b);
	int l1=strlen(a);
	int l2=strlen(b);
	int n=0,m=0,s;
	for(int i=0;i<l1-1;i++)
	{	
		
		if((a[i]>='0')&&(a[i]<='9'))
		{
			int x=a[i]-48;
			n=n+(int)x*pow(16,i);
		}
		else if((a[i]>='A')&&(a[i]<='F'))
		{
			int x=a[i]-'A'+10;
			n=n+(int)x*pow(16,i);
		}
	}
	for(int j=0;j<l2-1;j++)
	{	
	
		if((b[j]>='0')&&(b[j]<='9'))
		{
			int y=b[j]-'0';
			m=m+(int)y*pow(16,j);
		}
		else if((b[j]>='A')&&(b[j]<='F'))
		{
			int y=b[j]-'A'+10;
			m=m+(int)y*pow(16,j);
		}
	}
	s=n+m;
	return s;
}
		
void xuat(int kq)
{
	printf("%d",kq);
}

