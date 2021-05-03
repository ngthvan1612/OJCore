#include <iostream>
#include <math.h>
using namespace std;

unsigned long timSo(char c)
{
	switch(c)
	{
	case 'A':
		return 10;
	case 'B':
		return 11;
	case 'C':
		return 12;
	case 'D':
		return 13;
	case 'E':
		return 14;
	case 'F':
		return 15;
	default:
			return c - 48;
	}
}

unsigned long doiCoSo16 (char A[])
{
	unsigned long S = 0;
	for(int i=0;i<strlen(A);i++)
	{
		S += timSo(A[i]) * pow(16,strlen(A)-i-1);
		//cout <<timSo(A[i]) <<endl;
	}
	//cout << S;
	return S;
}

void main()
{
	char A[100], B[100];
	cin.getline(A,100,'\n');
	cin.getline(B,100,'\n');
	unsigned long coSoA = doiCoSo16(A);
	unsigned long coSoB = doiCoSo16(B);
	cout << coSoA + coSoB;
}