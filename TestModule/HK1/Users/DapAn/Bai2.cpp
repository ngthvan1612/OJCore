#include<stdio.h>
#include<string.h>
#include<math.h>
double hecToDec(char S[]);
double tinhTong(char A[], char B[]);

void main()
{
	char A[11], B[11];
	gets(A);
	gets(B);
	double kq = tinhTong(A,B);
//	double kq = hecToDec(A);
	printf("%.0lf",kq);
}
double hecToDec(char S[])
{
	double t=0;
	strrev(S);
	for (int i=0;i<strlen(S);i++)
		if (S[i]>='0' && S[i]<='9')
			t = t + (S[i]-'0')*pow(16,i);
		else
			t = t + (S[i]-'A'+10)*pow(16,i);
	return t;
}
double tinhTong(char A[], char B[])
{
	double a = hecToDec(A);
	double b = hecToDec(B);
	return a+b;
}