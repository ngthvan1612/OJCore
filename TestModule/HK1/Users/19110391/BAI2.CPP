#include<stdio.h>
#include<iostream>
#include<string.h>
#include<math.h>


using namespace std;

void main()
{
	char A[101], B[101];
	gets(A);
	gets(B);
	int l1=strlen(A);
	int l2=strlen(B);
	double dec1=0;
	double dec2=0;
	for(int i=0; i<l1; i++)
	{
		//double mu=0;
		if(A[i]>=48 && A[i]<=57)
			A[i]=A[i]-48;
		if(A[i]>=65 && A[i]<=70)
			A[i]=A[i]-55;
		//cout<<double(A[i])+2<<" ";
		//mu=l1-i+1;
		dec1=dec1+double(A[i])*pow(16,l1-1-i);
		//printf("%.0f ",pow(16,l1-1-i));
	}
	for(int j=0; j<l2; j++)
	{
		if(B[j]>=48 && B[j]<=57)
			B[j]=B[j]-48;
		if(B[j]>=65 && B[j]<=70)
			B[j]=B[j]-55;
		dec2=dec2+double(B[j])*pow(16,l2-1-j);
	}
	printf("%.0f",dec1+dec2);
}