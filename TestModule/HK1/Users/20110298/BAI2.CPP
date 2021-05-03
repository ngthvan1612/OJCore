#include<stdio.h>
#include<string.h>
#include<math.h>
void nhap( char a[]);
double chuyendoi(char a[]);
double tinh(char a[],char b[]);
void xuat( int x);

void main()
{
	char a[10],b[10];
	nhap(a);
	nhap(b);
	double t=chuyendoi(a);
	double q=chuyendoi(b);
	double k=tinh(a,b);
	xuat(k);
}
void nhap( char a[])
{
	gets(a);
}
double chuyendoi(char a[])
{
	int nA=strlen(a);
	int s[10];
	double p=0;
	for(int i=0;i<nA;i++)
	{
		if(a[i]=='A')s[i]=10;
		if(a[i]=='B')s[i]=11;
		if(a[i]=='C')s[i]=12;
		if(a[i]=='D')s[i]=13;
		if(a[i]=='E')s[i]=14;
		if(a[i]=='F')s[i]=15;
		if(a[i]=='0')s[i]=0;
		if(a[i]=='1')s[i]=1;
		if(a[i]=='2')s[i]=2;
		if(a[i]=='3')s[i]=3;
		if(a[i]=='4')s[i]=4;
		if(a[i]=='5')s[i]=5;
		if(a[i]=='6')s[i]=6;
		if(a[i]=='7')s[i]=7;
		if(a[i]=='8')s[i]=8;
		if(a[i]=='9')s[i]=9;

	}
	for(int j=0;j<nA;j++)
	{
		p=p+s[i]*pow(16,nA-j-1);
	}
	return p;

}
double tinh(char a[], char b[])
{
	int x=chuyendoi(a)+chuyendoi(b);
	return x;
}
void xuat( int x)
{
	printf("%d",x);

}