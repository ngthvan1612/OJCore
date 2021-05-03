#include<stdio.h>
#include<string.h>
#include<math.h>
void nhap(char A[], char B[]);
long doiSangHe10(char A[], char B[]);
void xuat(long kq);

void main()
{
	char A[100], B[100];
	nhap(A,B);
	long kq=doiSangHe10(A,B);
	xuat(kq);
}
void nhap(char A[], char B[])
{
	gets(A);
	gets(B);
}
long doiSangHe10(char A[], char B[])
{
	long kq=0;
	int len1=strlen(A);
	int len2=strlen(B);
	A=strrev(A);
	for(int i=0;i<len1;i++)
	{
		if(A[i]>='0'&&A[i]<='9')
			kq=kq+(A[i]-'0')*(long)pow(16,i);
		else
			kq=kq+(A[i]-55)*(long)pow(16,i);
	}
	B=strrev(B);
	for(int j=0;j<len2;j++)
	{
		if(B[j]>='0'&&B[j]<='9')
			kq=kq+(B[j]-'0')*(long)pow(16,j);
		else
			kq=kq+(B[j]-55)*(long)pow(16,j);
	}
	return kq;
}
void xuat(long kq)
{
	printf("%ld",kq);
}




