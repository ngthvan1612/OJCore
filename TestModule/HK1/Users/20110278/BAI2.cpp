#include<stdio.h>
#include<string.h>
#include<math.h>
void nhapchuoi(char A[],char B[]);
long doisangthapphan(char A[]);
void xuat(long kq);
void main()
{ 
	char A[50],B[50];
	nhapchuoi(A,B);
	long S1=doisangthapphan(A);
    long S2=doisangthapphan(B);
	int kq=S1+S2;
	xuat(kq);
}
void nhapchuoi(char A[],char B[])
{
	gets(A);
	gets(B);
}
long doisangthapphan(char A[])
{
	long S1=0;
	int len=strlen(A);
	for (int i=0;i<len;i++)
	{
		if(A[i]>'0' && A[i]<'9')
			S1=S1+(A[i]-'0')*(long)pow(16,len-i-1);
		else
			S1=S1+(A[i]-55)*(long)pow(16,len-i-1);

	}
	return S1;
}
void xuat(long kq)
{
	printf("%d",kq);
}