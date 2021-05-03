#include<stdio.h>
#include<string.h>
void input(char A[], char B[]);
int tinh(char A[], char B[], int lenA, int lenB);
int xuli1(int soA, int K, int i, int lenA);
int xuli2(int soA, int K, int i, int lenA);
void main()
{
	char A[10], B[10];
	input(A, B);
	int lenA = strlen(A), lenB = strlen(B);
	int value = tinh(A, B, lenA, lenB);
	printf("%d", value);
}
void input(char A[], char B[])
{
	scanf("%s", A);
	scanf("%s", B);
}
int tinh(char A[], char B[], int lenA, int lenB)
{
	int soA = 0, soB = 0;
	for (int i=0; i< lenA; i++)
	{
		if (A[i] >= 'A' && A[i] <= 'F')
			soA += xuli1(soA, A[i], i, lenA);
		else
			soA += xuli2(soA, A[i], i, lenA);
	}
	for (i=0; i< lenB; i++)
	{
		if (B[i] >= 'A' && B[i] <= 'F')
			soB += xuli1(soB, B[i], i, lenB);
		else
			soB += xuli2(soB, B[i], i, lenB);
	}
	int tong = soA + soB;
	return tong;
}
int xuli1(int soA, int K, int i, int lenA)
{
	int x = K - 'A' + 10;
	for (int t = lenA-i-1; t >= 1; t--)
		x *= 16;
	return x;
}
int xuli2(int soA, int K, int i, int lenA)
{
	int x = K - '0';
	for (int t = lenA-i-1; t >= 1; t--)
		x *= 16;
	return x;
}