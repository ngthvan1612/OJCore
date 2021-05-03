// BAI3.cpp : Defines the entry point for the console application.
//
#include <iostream>
using namespace std;
const int SIZE = 100;

void NhapMang(int A[], int &size)
{
	cin >> size;
	for (int i = 0; i < size; i++)
	{
		cin >> A[i];
	}
}

int ChanLe(int A[], int size)
{

	int sodautien = A[0] % 2;
	for (int i = 1; i < size; i++)
	{
		if(A[i]%2 == sodautien)
			return i;
		else
		{
			sodautien = A[i]%2;
		}
	}
	return -1;
}

int main(int argc, char* argv[])
{
	int A[SIZE];
	int size;
	NhapMang(A, size);
	cout << ChanLe(A, size);
	return 0;
}
