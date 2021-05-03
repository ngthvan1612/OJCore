#include<iostream>
using namespace std;
#include<string.h>
#include<math.h>
void nhap(char A[],char B[]);
unsigned long xuLy(char A[],char B[]);
int doi16sang10(char s[100]);
void xuat(unsigned long kq);
int main()
{
	char A[100],B[100];
	nhap(A,B);
	unsigned long kq=xuLy(A,B);
	xuat(kq);
	return 0;
}
void nhap(char A[],char B[])
{
	gets(A);
	fflush(stdin);
	gets(B);
}
unsigned long xuLy(char A[],char B[])
{
	A=strrev(A);
	B=strrev(B);
	unsigned long A1 = doi16sang10(A);
	unsigned long B1 = doi16sang10(B);
	unsigned long tong=A1+B1;
	return tong;
}
int doi16sang10(char s[100])
{
	int l=strlen(s);
	unsigned long kq=0;
	for(int i=0;i<l;i++)
		if(s[i]>='0' && s[i]<='9')
			kq=kq+((s[i]-'0')*pow(16,i));
		else 
			kq=kq+((s[i]-'A'+10)*pow(16,i));
	return kq;
}
void xuat(unsigned long kq)
{
	cout<<""<<kq;
}