#include<iostream>
#include<math.h>
#include<string.h>
using namespace std;
int main()
{
	char A[100],B[100];
	gets(A);
	gets(B);
	int x = strlen(A);
	int y = strlen(B);
	int a=0,b=0;
	for(int i=0;i<x;i++)
	{
		if(A[i]>='0' && A[i]<='9')
			a=a+((A[i]-'0')*pow(16,x-i-1));
		if(A[i]=='A')
			a=a+(10*pow(16,x-i-1));
		if(A[i]=='B')
			a=a+(11*pow(16,x-i-1));
		if(A[i]=='C')
			a=a+(12*pow(16,x-i-1));
		if(A[i]=='D')
			a=a+(13*pow(16,x-i-1));
		if(A[i]=='E')
			a=a+(14*pow(16,x-i-1));
		if(A[i]=='F')
			a=a+(15*pow(16,x-i-1));
	}
	for(int j=0;j<y;j++)
	{
		if(B[j]>='0' && B[j]<='9')
			b=b+((B[j]-'0')*pow(16,y-j-1));
		if(B[j]=='A')
			b=b+(10*pow(16,y-j-1));
		if(B[j]=='B')
			b=b+(11*pow(16,y-j-1));
		if(B[j]=='C')
			b=b+(12*pow(16,y-j-1));
		if(B[j]=='D')
			b=b+(13*pow(16,y-j-1));
		if(B[j]=='E')
			b=b+(14*pow(16,y-j-1));
		if(B[j]=='F')
			b=b+(15*pow(16,y-j-1));
	}
	int kq= a+b;
	cout <<kq;
	return 0;
}