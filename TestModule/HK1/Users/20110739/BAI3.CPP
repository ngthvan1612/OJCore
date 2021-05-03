#include<iostream>

using namespace std;

int Vitridau_chan(int A[], int n)
{
		int kt = -1;
	for(int i = 0; i <n-1;i++)
	{
		if(A[i] % 2 ==0 && A[i+1] %2 == 0)
		{
			return i+1;
		}
		if (A[i] % 2 ==1 && A[i+1] % 2 ==1 )
		{
			return i+1;
		}
	}
	return kt;
}
void main()
{
	int A[100], n;
	cin >>n;
	for(int i = 0; i < n;i++)
	{
		cin >> A[i];
	}
	cout << Vitridau_chan(A,n);
}