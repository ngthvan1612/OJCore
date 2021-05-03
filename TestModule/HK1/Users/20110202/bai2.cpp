#include<stdio.h>;
#include<string.h>;
#include<math.h>;
void nhap(char A[],char B[]);
void xuat(int kq);
int sang(char S[]);
int kt(char A[],char B[]);

void main()
{
	char A[11],B[11];
	nhap(A,B);
	int kq=kt(A,B);
	xuat(kq);
}
void nhap(char A[],char B[])
{
	gets(A);
	gets(B);
}
void xuat(int kq)
{
	printf("%d",kq);
}
int kt(char A[],char B[])
{
	int x=sang(A);
	int y=sang(B);
	return x+y;
}
int sang(char S[])
{
	int l=strlen(S),kq=0,x=0;
	for(int i=l-1;i>=0;i--)
		if(S[i]>='0' && S[i]<='9')
		{
			kq=kq+(S[i]-'0')*pow(16,x);
			x++;
		}
		else
		{
			kq=kq+(S[i]-55)*pow(16,x);
			x++;
		}
	return kq;
}


