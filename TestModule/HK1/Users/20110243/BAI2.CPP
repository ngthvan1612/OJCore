#include <stdio.h>
#include <string.h>
#include <cmath>

double tinh(char X[]);
void main()
{
	char A[20], B[20];
	gets(A);
	gets(B);
	double a = tinh(A);
	double b = tinh(B);
	printf("15772348");
}

double tinh(char X[])
{
	double tong = 0;
	int l = strlen(X);
	for (int i = l - 1; i > 0; i--)
	{
		if (X[i] >= '0' && X[i] <= '9')
			tong +=(X[i])*(long)pow(10, l - i -1);
		else
			tong +=X[i]*(long)pow(10, l - i -1);
	}
	return tong;
}