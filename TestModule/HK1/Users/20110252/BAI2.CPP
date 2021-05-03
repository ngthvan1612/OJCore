#include <iostream>
#include <string>
#define SIZE 30
using namespace std;

int ctoi(char c);
unsigned long he16to10(string A, string B);
int ctoi(char c);
unsigned long muoiSauMu(int i);

void main(){
	char tmpA[SIZE],tmpB[SIZE];
	gets(tmpA);
	gets(tmpB);
	string A(tmpA);
	string B(tmpB);
	unsigned long kq = (unsigned long) (he16to10(A,B));
	cout << kq;
}

unsigned long he16to10(string A, string B)
{
	int i;
	unsigned long tong=0;
	unsigned long gtA=0,gtB=0;
	int nA = A.length();
	int nB = B.length();

	for (i=0; i<nA; i++)
	{
		gtA+=(unsigned long) ctoi(A[nA-i-1])*muoiSauMu(i);
	}	
	for (i=0; i<nA; i++)
		gtB+=(unsigned long) ctoi(B[nB-i-1])*muoiSauMu(i);

	tong = gtA+gtB;

return tong;
}

int ctoi(char c)
{
	int n=0;
	if ('1'<=c && c<='9')
		n = (int)c - 48;
	else if (c == 'A') 
		n = 10;
	else if (c =='B')
		n = 11;
	else if (c=='C')
		n = 12;
	else if (c=='D')
		n = 13;
	else if (c=='E')
		n = 14;
	else 
		n = 15;

	return n;
}

unsigned long muoiSauMu(int i)
{
	unsigned long kq=1;
	for (int k=1; k<=i; k++)
		kq *= 16;
	return kq;
}