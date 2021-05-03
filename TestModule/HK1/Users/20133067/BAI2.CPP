#include<stdio.h>
#include<string.h>
#include<math.h>
int Chuyendoi(char A[],int lenA);
void main()
{
	char A[100],B[100];
	gets(A);
	gets(B);
	int lenA=strlen(A);
	int lenB=strlen(B);
	int a=Chuyendoi(A,lenA);
	int b=Chuyendoi(B,lenB);
	int t=a+b;
	printf("%d", t);
}
int Chuyendoi(char A[],int lenA)
{
	A=strrev(A);
	int sum=0;
	for (int i=0;i<lenA;i++)
	{
		int x=0;
		if (A[i]>='0' && A[i]<='9')
		{
			int h=A[i]-'0';
			sum=sum+h*pow(16,x);
			x++;
		}
		else 
		{
			sum=sum+(A[i]-55)*pow(16,x);
			x++;
		}
	}
	return sum;
}
			
			
