#include<iostream>
#include<string.h>
#include<math.h>
#include<stdio.h>

using namespace std;

double doihe(char S[]);

int main()
{
	char A[10], B[10];
	gets(A);
	gets(B);
	double a=doihe(A);
	double b=doihe(B);
	double t=a+b;
	printf("%.0lf",t);
	return 0;
}

double doihe(char S[])
{
	int len=strlen(S);
	strrev(S);
	double k=0;
	for(int i=0;i<len;i++)
	{
		if(S[i]>='0' && S[i]<='9')
			k=k+(S[i]-'0')*pow(16,i);
		else if(S[i]>='A' && S[i]<='Z')
			k=k+(S[i]-'A'+10)*pow(16,i);
	}
	return k;
}