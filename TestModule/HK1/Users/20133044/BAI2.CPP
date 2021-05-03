#include<stdio.h>
#include<string.h>
#include<math.h>
int central(char A[],char B[]);
void xuat(int kq);
void main()
{
	char A[12],B[12];
	gets (A);
	gets (B);
	int kq=central(A,B);
	xuat (kq);
}
 int central(char A[],char B[])
{
	int kq1=0;
	int len1=strlen(A);
	for (int i=0;i<len1;i++)
	{
		if(A[i] >='0' && A[i] <='9')
			kq1 += (A[i] - '0')*pow(16 ,len1-i-1);
		else 
		    kq1 += (A[i] - 55) *pow(16 ,len1-i-1);
	}
	int kq2=0;
	int len2=strlen(B);
	for (int j=0;j<len2;j++)
	{
		if(B[j] >='0' && B[j] <='9')
			kq2 += (B[j] - '0')*pow(16 ,len2-j-1);
		else 
		    kq2 += (B[j] - 55) *pow(16 ,len2-j-1);
	}
	int kq=0;
	kq=kq1+kq2;
	return kq;
 }
 void xuat(int kq)
 {
	 printf("%d",kq);
 }
		


		