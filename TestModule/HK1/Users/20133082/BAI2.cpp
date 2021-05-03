#include<stdio.h>
#include<string.h>
#include<math.h>
#define N 10
void nhap(char A[N],char B[N]);

void main()
{
	char A[N],B[N];
	nhap(A,B);
}
void nhap(char A[N],char B[N])
{
	gets(A);
	gets(B);
	int a=0;
	int b=0;
	for(int i=0;i<strlen(A);i++)
	{
		if(A[i]>=48&&A[i]<=57)
		{
			a=a+(A[i]-48)*pow(16,strlen(A)-i-1);	
		}
		if(A[i]>=65&&A[i]<=70)
		{
			a=a+(A[i]-55)*pow(16,strlen(A)-i-1);
		}

	}
	
	for(int j=0;j<strlen(B);j++)
	{
		if(B[i]>=48&&B[i]<=57)
		{
			b=b+(B[j]-48)*pow(16,strlen(B)-j-1);	
		}
		if(B[j]>=65&&B[j]<=70)
		{
			b=b+(B[j]-55)*pow(16,strlen(B)-j-1);
		}

	}
	printf("%d",a+b);
}