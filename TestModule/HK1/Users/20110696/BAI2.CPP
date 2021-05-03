#include<stdio.h>
#include<string.h>
#include<math.h>
long int solve(char A[],char B[]);
long int doisanghe10(char A[]);
void xuat(long int kq);

void main()
{
	char A[30];
	gets(A);
	char B[30];
	gets(B);
	long int kq=solve(A,B);
	xuat(kq);
}
long int solve(char A[],char B[])
{
	long int A_10=doisanghe10(A);
	long int B_10=doisanghe10(B);
	return A_10 + B_10;


}
long int doisanghe10(char A[])
{
	long int kq=0;
	int nA=strlen(A);
	for (int i=0;i<nA;i++)
	{
		if (A[i]>='0' && A[i]<='9')
		 kq+=(A[i]-'0')*pow(16,i);
		else 
			if (A[i]>='A' && A[i]<='F')
			kq+=(A[i] - 'A' +10)*pow(16,i);

	}
	return kq;
}
void xuat(long int kq)
{
	printf("%ld",kq);
}

