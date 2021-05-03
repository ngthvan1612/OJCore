#include<stdio.h>
#include<string.h>
#include<math.h>

long tinh(char A[], char B[]);

int main()
{
	char A[100], B[100];
	gets(A);
	gets(B);
	tinh(A, B);
	return 0;
}

long tinh(char A[], char B[])
{
	long sumA = 0;
	long sumB = 0;
	int nA = strlen(A);
	int nB = strlen(B);
	for(int iA = 0; iA < nA; iA++)
	{
		if(A[iA] >= '0' && A[iA] <= '9')
			sumA = sumA + (A[iA] - '0')*(long)pow(16, nA - 1);
		else
			sumA = sumA + (A[iA] - 55)*(long)pow(16, nA - 1);
	}
	for(int iB = 0; iB < nB; iB++)
	{
		if(B[iB] >= '0' && B[iB] <= '9')
			sumB = sumB + (B[iB] - '0')*(long)pow(16, nB - 1);
		else
			sumB = sumB + (B[iB] - 55)*(long)pow(16, nB - 1);
	}
	long sum = 0;
	sum = sumA + sumB;
	printf("%d", sum);
	return 0;
}