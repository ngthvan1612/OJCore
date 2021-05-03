#include <stdio.h>
#include <string>
#include <math.h>

int Doi(char A)
{
	if(A>='0' && A<='9')
		return A-48;
	else if(A=='A')
		return 10;
	else if(A=='B')
		return 11;
	else if(A=='C')
		return 12;
	else if(A=='D')
		return 13;
	else if(A=='E')
		return 14;
	else 
		return 15;

}
double ChuyenDoi(char A[])
{
	double sum=0;
	for(int i=0;i<strlen(A);i++)
		sum += Doi(A[i])*pow(16,i);
	return sum;
}
void xuat(double x)
{
	printf("%.0lf",x);
}

void main()
{
	char A[11],B[11];
	gets(A);
	gets(B);
	strrev(A);
	strrev(B);
	double Kq1=ChuyenDoi(A);
	double Kq2=ChuyenDoi(B);
	double Kq=Kq1+Kq2;
	xuat(Kq);
}