#include<stdio.h>
#include<math.h>
#include<string.h>
double layso(char A[]);
void xuat(double kq);
void main()
{
	char A[20],B[20];
	gets(A);
	gets(B);
	double kq=layso(A)+layso(B);
	xuat(kq);
}
double layso(char A[])
{
	double kq=0;
	int n=strlen(A);
	A=strrev(A);
	for (int i=0;i<n;i++)
		if (A[i]<='9' && A[i]>='0')
			kq=kq+(A[i]-'0')*(double)pow(16,i);
		else
			kq=kq+(A[i]-55)*(double)pow(16,i);
	return kq;
}
void xuat(double kq)
{
	printf("%.0lf",kq);
}


