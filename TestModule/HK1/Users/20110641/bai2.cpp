#include <stdio.h>
#include <string.h>
#include <math.h>
void nhap (char A[], char B[]);
void xulyxuat (char A[], char B[]);
void main ()
{
	char A[100];
	char B[100];
	nhap (A ,B);
	xulyxuat(A, B);
}
void nhap (char A[], char B[])
{
	gets (A);
	gets (B);
}
void xulyxuat (char A[], char B[])
{
	int len1=strlen(A);
	int len2=strlen(B);
	double m=0;
	int s=0;
	for (int i=0; i<len1; i++)
	{
		if (A[i]>='0' && A[i]<='9')
			m+=(A[i]-'0')*pow(10, len1-i);
		else
			m+=(A[i]-'A'+10)*pow(10, len1-i);
	} 
	for (int j=0; j<len1; j++)
	{
		if (B[j]>='0' && B[j]<='9')
			m+=(B[j]-'0')*pow(10, len1-j);
		else
			m+=(B[j]-'A'+10)*pow(10, len1-j);
	}
	printf ("%.0lf",m);
}