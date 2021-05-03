#include<stdio.h>
#include<string.h>
#include<math.h>
double tinh(char A[]);
void xuat(double kq);
double chu(char chu);
void main()
{
	char A[10], B[10];
	gets(A);
	gets(B);
	double S=tinh(A)+tinh(B);
	xuat(S);
}
double tinh(char A[])
{
	double kq=0;
	int len=strlen(A);
	strrev(A);
	for(int i=0; i<len; i++)
	{if(A[i]<'10' && A[i] >='0')
			kq+= (double)(A[i]-48)*pow(16,i);
	else
			kq+=(double)chu(A[i]-7)*pow(16,i);
	}
	return kq;
}
void xuat(double kq)
{
	printf("%.0lf",kq);
}
double chu(char chu)
{
	if(chu=='A')
		return 10;
	if(chu=='B')
		return 11;

	if(chu=='C')
		return 12;
	if(chu=='D')
		return 13;
	
	if(chu=='E')
		return 14;
	return 15;
}
