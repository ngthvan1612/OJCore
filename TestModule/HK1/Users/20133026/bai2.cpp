#include<stdio.h>
#include<string.h>
#include<math.h>
void nhap(char A[30],char B[30]);
void xuly(char A[30],char B[30]);
void main()
{
	char A[30],B[30];
	nhap(A,B);
	xuly(A,B);
}
void nhap(char A[30],char B[30])
{
	gets(A);
	gets(B);
}
void xuly(char A[30],char B[30])
{
	int lenA=strlen(A);
	 A=strrev(A);
	int a=0;
	for(int i=0;i<lenA;i++)
	{
		if(A[i]>='0'&&A[i]<='9')
			a=a+(A[i]-'0')*pow(16,i);
		else
			a=a+(A[i]-55)*pow(16,i);
	}
	int lenB=strlen(B);
	 B=strrev(B);
	int b=0;
	for(int j=0;j<lenB;j++)
	{
		if(B[j]>='0'&&B[j]<='9')
			b=b+(B[j]-'0')*pow(16,j);
		else
			b=b+(B[j]-55)*pow(16,j);
	}
	int s=a+b;
	printf("%d",s);
}