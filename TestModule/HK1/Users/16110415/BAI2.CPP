#include<stdio.h>
#include<math.h>
#include<string.h>
long HexToDecA(char A[]);
long HexToDecB(char B[]);
void Nhap(char A[], char B[]);
void main()
{  
	char A[10];
	char B[10];
	Nhap(A, B);
	long X =HexToDecA(A);
	long Y=HexToDecB(B);
	long S = X +Y;

printf("%ld",S);




}
long HexToDecA(char A[])
{
	long DecA = 0;
	int len =strlen(A);
	A = strrev(A);
	for(int i = 0; i < len; i++)
		if(A[i] >='0' && A[i]<='9')
		    DecA = DecA + (A[i] -'0')* (long)pow(16,i);
	    else 
			DecA = DecA + (A[i] -55)* (long)pow(16,i);

		return DecA;

}
long HexToDecB(char B[])
{
	long DecB = 0;
	int len =strlen(B);
	B= strrev(B);
	for(int i = 0; i < len; i++)
		if(B[i] >='0' && B[i]<='9')
		    DecB = DecB + (B[i] -'0')* (long)pow(16,i);
	    else 
			DecB = DecB + (B[i] -55)* (long)pow(16,i);

		return DecB;

}

void Nhap(char A[], char B[])
{
	gets(A);
	gets(B);
	}
