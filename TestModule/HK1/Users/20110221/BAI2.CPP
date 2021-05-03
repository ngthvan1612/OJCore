#include <stdio.h>
#include <math.h>
#include <string.h>
#include <stdlib.h>

void nhap(char* A,char* B)
{
	gets(A);
	gets(B);
}

void xuat(double kq)
{
	printf("%.0lf",kq);
}

int val(char ch)
{
	if(ch>='A' && ch<='F')
		return(int(ch)-int('A')+10);
	return(int(ch)-int('0'));
}
	
double calc(char* S)
{
	strupr(S);
	double q=1;
	double kq=0;
	int n=strlen(S);
	for(int i=n-1;i>=0;i--)
		{
		kq+=q*val(S[i]);
		q=q*16;
		}
	return kq;

}

void main()
{
	char A[100];
	char B[100]; 
	nhap(A,B);
	double res=calc(A)+calc(B);
	xuat(res);
}