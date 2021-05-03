#include<stdio.h>
#include<math.h>
#include<string.h>
void nhap(char A[],char B[]);
int tinh(char A[],char B[]);
void xuat(int S);
void main()
{
	char A[9],B[9];
	nhap(A,B);
	int S=tinh(A,B);
	xuat(S);
}
void nhap(char A[],char B[])
{
	gets(A);
	gets(B);
}
void xuat(int S)
{
	printf("%d",S);
}
int tinh(char A[],char B[])
{
	int s1=0;
	int len=strlen(A); 
	A=strrev(A);
	for(int i=0;i<len;i++)
		if(A[i]>='0' && A[i]<='9')
			s1=s1+(A[i]-'0')*(int)pow(16,i);
		else
			s1=s1+(A[i]-55)*(int)pow(16,i);
	int s2=0;
	int len2=strlen(B);
	B=strrev(B);
	for(int j=0;j<len2;j++)
		if(B[j]>='0' && B[j]<='9')
			s2=s2+(B[j]-'0')*(int)pow(16,i);
		else
			s2=s2+(B[j]-55)*(int)pow(16,i);
	return s1+s2;
}

