#include<stdio.h>
#include<string.h>
#include<math.h>

long chuyen_16_ve_10(char A[], char B[]);
void xuat(long kq);

void main()
{
	char A[20], B[20];
	gets(A);
	gets(B);
	long kq=chuyen_16_ve_10(A, B);
	xuat(kq);
}

long chuyen_16_ve_10(char A[], char B[])
{
	long S1=0;
	int la=strlen(A);
	strrev(A);
	for(int i=0; i<la; i++)
		if(A[i]>='0' && A[i]<='9')
			S1=S1+(A[i]-'0')*pow(16, i);
		else
			S1=S1+(A[i]-'A'+10)*pow(16, i);
	int lb=strlen(B);
	strrev(B);
	long S2=0;
	for(int j=0; j<lb; j++)
		if(B[j]>='0' && B[j]<='9')
			S2+=(B[j]-'0')*pow(16, j);
		else
			S2+=(B[j]-'A'+10)*pow(16, j);
	long s;
		s=S1+S2;
	return s;
}

void xuat(long kq)
{
	printf("%ld", kq);
}
