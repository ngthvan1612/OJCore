#include<iostream>
#include<string.h>
#include<math.h>
long findSum(char A[], char B[]);
void main()
{
	char A[256];
	char B[256];
	gets(A);
	gets(B);
	long result = findSum(A, B);
	std::cout << result;
}
long decTobi(char X[])
{
	long result = 0;
	int length = strlen(X);
	for (int i = 0; i < length; i++)
	{
		if (X[i] > '0' && X[i] < '9')
			result += (X[i] - '0') * (long)pow(16, length - i - 1);
		else result += (X[i] - 55) * (long)pow(16, length - i - 1);
	}
	return result;
}
long findSum(char A[], char B[])
{
	return decTobi(A) + decTobi(B);
}