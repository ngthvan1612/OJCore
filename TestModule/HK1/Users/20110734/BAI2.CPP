#include<stdio.h>
#include<string.h>
#include<math.h>
void nhap(char A[], char B[]);
long doisangthapphan(char S[]);
long xuly(char A[], char B[]);
void xuat(long kq);
void main()
{
	char A[11], B[11];
	nhap(A,B);
	long kq=xuly(A,B);
	xuat(kq);
}
void nhap(char A[], char B[])
{
	gets(A);
	gets(B);
}
long doisangthapphan(char S[])
{
	long kq=0;
	int len=strlen(S);
	for (int i=0; i<len; i++)
	{
		if (S[i]>='0' && S[i]<='9')
			kq=kq+(S[i]-'0')*(long)pow(16,len-i-1);
		else
			kq=kq+(S[i]-55)*(long)pow(16,len-i-1);

	}
	return kq;
}
long xuly(char A[], char B[])
{
	long sum=doisangthapphan(A)+doisangthapphan(B);
	return sum;
}
void xuat(long kq)
{
	printf("%ld",kq);
}