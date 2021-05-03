# include <stdio.h>
# include <string.h>
# include <math.h>
long hextodec(char S[]);
void nhap( char S[]);
void xuat( long kq);
void main()
{
	char A[30],B[30];
	nhap(A);
	nhap(B);
	long kq1=hextodec(A);
	long kq2=hextodec(B);
	xuat(kq1+kq2);
}
long hextodec(char S[])
{
	long kq=0;
	int len=strlen(S);
	S=strrev(S);
	for( int i=0;i<len; i++)
		if (S[i] >='0' && S[i] <='9')
			kq=kq+(S[i]-'0')*(long)pow(16,i);
		else 
			kq=kq +(S[i]-55)*(long)pow(16,i);

	return kq;
}
void nhap(char S[])
{
	gets(S);
}
void xuat(long kq)
{
	printf("%ld",kq);
}