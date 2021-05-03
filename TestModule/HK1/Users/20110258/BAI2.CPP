#include <stdio.h>
#include <string.h>
#include <math.h>
void nhap(char a[],char b[]);
double kiemtra(char a[],char b[]);
void xuat(double kq);
void main ()
{
	char a[100],b[100];
	nhap(a,b);
	double kq=kiemtra(a,b);
	xuat(kq);
}
void nhap(char a[],char b[])
{
	gets(a);
	gets(b);
}
double kiemtra(char a[],char b[])
{
	
	int chieudai1=strlen(a);
	int chieudai2=strlen(b);
	strrev(a);
	strrev(b);
	double tong1=0;
	for (int i=0;i<chieudai1;i++)
	{
		if (a[i]>='0' && a[i]<='9')
			tong1=tong1+ (long)(a[i]-'0')*pow(16,i);
		if (a[i]>='A' && a[i]<='F')
			tong1=tong1+ (long)(a[i]-55)*pow(16,i);
	}
	double tong2=0;
	for (int j=0;j<chieudai2;j++)
			{
		if (b[j]>='0' && b[j]<='9')
			tong2=tong2+ (long)(b[j]-'0')*pow(16,j);
		if (b[j]>='A' && b[j]<='F')
			tong2=tong2+ (long)(b[j]-55)*pow(16,j);
	}
	double kq;
	kq=tong1+tong2;
	return kq;

}
void xuat(double kq)
{
	
	printf("%.0lf",kq);
}