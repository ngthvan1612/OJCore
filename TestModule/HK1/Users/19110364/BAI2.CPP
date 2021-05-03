#include<iostream>
#include<cstring>
using namespace std;


unsigned long XuLy(char A[],char B[]);
void ChuyenDoi(char A[],unsigned long &S);
int He16(int a,int p);
int main()
{
	char A[100];
	char B[100];
	gets(A);
	gets(B);
	unsigned long S=XuLy(A,B);
	cout<<S;
	return 0;
}
unsigned long XuLy(char A[],char B[])
{
	unsigned long S1=0;
	unsigned long S2=0;
	ChuyenDoi(A,S1);
	ChuyenDoi(B,S2);
	return S1+S2;
}
void ChuyenDoi(char A[],unsigned long &S)
{
	int l=strlen(A); 
	for(int i=0;i<l;i++)
	{
		if(A[i]>='A' &&A[i]<='Z')
			S+=(A[i]-55)*He16(16,l-i-1);
		else if(A[i]>='0' && A[i]<='9')
			S+=(A[i]-'0')*He16(16,l-i-1);
	}
}
int He16(int a,int p)
{
	int S=1;
	for(int i=1;i<=p;i++)
		S*=a;
	return S;
}
