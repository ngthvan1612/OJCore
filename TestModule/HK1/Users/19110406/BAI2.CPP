#include <stdio.h>
#include <math.h>
#include <string.h>
char A[16]={'0','1','2','3','4','5','6','7','8','9','A','B','C','D','E','F'};
int toDecimal(char B[])
{
	int n=strlen(B);
	int sum=0;
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<16;j++)
		{
			if(B[i]==A[j])
				sum=sum+j*pow(16,n-1-i);
		}
	}
	return sum;
}
void input(char B[],char C[])
{
	fgets(B,10,stdin);
	fgets(C,10,stdin);
}
int Sum(char B[],char C[])
{
	return toDecimal(B)+toDecimal(C);
}
int main()
{
	char B[10],C[10];
	input(B,C);
	printf("%d",Sum(B,C));
	return 0;
}