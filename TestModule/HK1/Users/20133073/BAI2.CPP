#include<stdio.h>
#include<string.h>
#include<math.h>
void nhap(char A[], char B[]);
long Tong(char A[], char B[]);
void xuat(long kq);

void main()
{
	char A[100];
	char B[100];
	nhap (A,B);
	long kq=Tong(A,B);
	xuat(kq);
}
void nhap(char A[], char B[])
{
	gets(A);
	gets(B);
}
void xuat(long kq)
{
	printf("%ld",kq);
}
long Tong(char A[], char B[])
{
	strrev(A,B);
	int lena=strlen(A);
	int lenb=strlen(B);
	long C=0;
	long D=0;
	for(int i=0;i<lena;i++)
	{	
		if(A[i]>='0' && A[i]<='9')
			A[i]=A[i]-'0';
		else
			A[i]=A[i]-'A'+10;
		C=C+(long)(A[i]*pow(16,i));
	}
	for(int j=0;j<lenb;j++)
	{	
		if(B[j]>='0' && B[j]<='9')
			B[j]=B[j]-'0';
		else
			B[j]=B[j]-'A'+10;
		D=D+(long)(B[j]*pow(16,i));
	}
	return C+D;
}	















