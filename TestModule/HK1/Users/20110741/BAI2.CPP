#include <stdio.h>
#include <math.h>
#include <string.h>
double Tinh(char A[]);
int main()
{
	char A[20];
	char B[20];
	gets(A);
	gets(B);
	double a=Tinh(A);
	double b=Tinh(B);
	printf("%.0lf",a+b);
	return 0;
}
double Tinh(char A[])
{
	strrev(A);
	int n=strlen(A);
	double kq=0;
	for (int i=0;i<n;i++)
	{
		if (A[i]>='0' && A[i]<='9')
		{
			int k=A[i]-'0';
			kq+=k*pow(16.0,i);
		}
		if (A[i]>='A' && A[i]<='F')
		{
			int k=A[i]-'A'+10;
			kq+=k*pow(16.0,i);
		}
	}
	return kq;
}
