#include<stdio.h>
#include<string.h>
#include<math.h>
void nhap(char A[],char B[]);
int tinhtong(char A[],char B[]);
void xuat(int kq);
int main()
{
	char A[30];
	char B[30];
	nhap(A,B);
	int kq=tinhtong(A,B);
	xuat(kq);
	return 0;
}
void nhap(char A[],char B[])
{
	gets(A);
	gets(B);
}
int tinhtong(char A[],char B[])
{
	int lA=strlen(A);
	A=strrev(A);
	int a=0;
	for(int i=0;i<lA;i++)
	{
		if(A[i]>='0'&&A[i]<='9')
			a=a+(A[i]-'0')*pow(16,i);
		else
			a=a+(A[i]-55)*pow(16,i);
	}
	int lB=strlen(B);
	B=strrev(B);
	int b=0;
	for(i=0;i<lB;i++)
	{
		if(B[i]>='0'&&B[i]<='9')
			b=b+(B[i]-'0')*pow(16,i);
		else
			b=b+(B[i]-55)*pow(16,i);
	}
	int p=a+b;
	return p;
}
void xuat(int kq)
{
	printf("%d",kq);
}