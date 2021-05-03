#include<stdio.h>
#include<string.h>
#include<math.h>
long doisangsotp(char A[])
{
	long x=0;
	int y=strlen(A);
	for(int i=0;i<y;i++)
	{
		if(A[i]>'0' && A[i]<'9')
			x=x+(A[i]-'0')*(long)pow(16,y-i-1);
		else
			x=x+(A[i]-55)*(long)pow(16,y-i-1);
	}
	return x;
}
long doisangsotp2(char B[])
{
	long x=0;
	int y=strlen(B);
	for(int i=0;i<y;i++)
	{
		if(B[i]>'0' && B[i]<'9')
			x=x+(B[i]-'0')*(long)pow(16,y-i-1);
		else
			x=x+(B[i]-55)*(long)pow(16,y-i-1);
	}
	return x;
}
long tong(long x,long y)
{
	long S= x+y;
	return S;
}
void xuat(long kq)
{
	printf("%d",kq);
}
void main()
{
	char A[50],B[50];
	gets(A);
	gets(B);
	long x=doisangsotp(A);
	long y=doisangsotp2(B);
	long kq=tong(x,y);
	xuat(kq);
}