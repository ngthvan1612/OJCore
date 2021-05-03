#include<stdio.h>
#include<string.h>
#include<math.h>
int TinhTong(char A[],char B[]);


int main()
{
	char A[10],B[10];
	gets(A);
	gets(B);
	int kq=TinhTong(A,B);
	printf("%d",kq);
	return 0;
}
int TinhTong(char A[],char B[])
{
	int s=0;
	unsigned long a=0,b=0;
	int n=strlen(A);
	strrev(A);
	for (int i=0;i<n;i++)
		if (A[i]>='0' && A[i]<='9')
			a=a+(A[i]-'0')*(unsigned long)pow(16,i);
		else
			a=a+(A[i]-55)*(unsigned long)pow(16,i);
	int m=strlen(B);
	strrev(B);
	for (int j=0;j<m;j++)
		if (B[j]>='0' && B[j]<='9')
			b=b+(B[j]-'0')*(unsigned long)pow(16,j);
		else
			b=b+(B[j]-55)*(unsigned long)pow(16,j);
	s=a+b;

	return s;
}