#include<stdio.h>
#include<string.h>
int doi(char S[]);
int Tinh(char A[],char B[]);
void xuat(int x);
void main()
{
	char A[11],char B[11];
	gets(A);
	gets(B);
	int kq=Tinh(A,B);
	xuat(kq);
}
int doi(char S[])
{
	int L=strlen(S);
	int heso=1;
	int tong=0;
	for(int i=L-1;i>=0;i--)
	{
		if(S[i]>='0' && S[i]<='9')
		{
			tong=tong+(S[i]-'0')*heso;
		}
		else
			tong=tong+(S[i]+10-'A')*heso;
		heso=heso*16;
	}
	return tong;
}
int Tinh(char A[],char B[])
{
	int x=doi(A);
	int y=doi(B);
	return (x+y);
}
void xuat(int x)
{
	printf("%d",x);
}