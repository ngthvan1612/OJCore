#include<stdio.h>
#include<string.h>
#include<math.h>
void xuat(long kq);

void nhap(char a[],char b[]);
long HexsangDec(char a[],char b[]);
void main()
{
	char a[20],b[20];
	nhap(a,b);
	long kq=HexsangDec(a,b);
	xuat(kq);
}
void nhap(char a[],char b[])
{
	gets(a);
	gets(b);
}
long HexsangDec(char a[],char b[])
{
	long kq=0;
	int s=strlen(a),n=strlen(b);
	a=strrev(a);
	b=strrev(b);
	for(int i=0;i<s;i++)
		if(a[i]>='0' && a[i]<='9')
			kq+=(a[i]-'0')*long(pow(16,i));
		else
			kq+=(a[i]-55)*long(pow(16,i));
	for(i=0;i<n;i++)
		if(b[i]>='0' && b[i]<='9')
			kq+=(b[i]-'0')*long(pow(16,i));
		else
			kq+=(b[i]-55)*long(pow(16,i));

	return kq;
}
void xuat(long kq)
{
	printf("%ld",kq);
}