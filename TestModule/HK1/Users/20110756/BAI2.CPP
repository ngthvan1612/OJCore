#include< stdio.h>
#include <string.h>
#include <math.h>
#define size 100
void nhap (char Str[],char Str2[]);
long tong (char Str[],char Str2[]);
void xuat (long kq);
void main ()
{
	char Str[size],Str2[size];
	nhap(Str,Str2);
	long kq=tong(Str,Str2);
	xuat (kq);
}
void nhap(char Str[],char Str2[])
{
	gets(Str);
	gets(Str2);
}
long tong(char Str[],char Str2[])
{
	
	int len=strlen(Str);
	Str=strrev(Str);
	long kq=0;
	for(int i=0;i<len;i++)
	{
		if(Str[i]>='0' && Str[i]<='9')
			kq=kq+(Str[i]-'0')*(long)pow(16,i);
		else
			kq=kq+(Str[i]-55)*(long)pow(16,i);
	}
	long kq2=0;
	int len2=strlen(Str2);
	Str2=strrev(Str2);
	for(int j=0;j<len2;j++)
	{
		if(Str2[j]>='0' && Str2[j]<='9')
			kq2=kq2+(Str2[j]-'0')*(long)pow(16,j);
		else
			kq2=kq2+(Str2[j]-55)*(long)pow(16,j);
	}
	int kq3;
	kq3=kq+kq2;
	return kq3;
	
}
void xuat (long kq)
{
	printf ("%ld",kq);
}