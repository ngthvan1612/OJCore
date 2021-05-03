#include <iostream>
using namespace std;

void nhapMang(int A[], int n)
{
	for(int i=0;i<n;i++)
	{
		cin >> A[i];
	}
}

int kiemTra(int A[], int n)
{
	int flag= -999999;
	for(int i=0;i<n-1;i++)
	{
	
		if((A[i]%2 == 0 && A[i+1]%2 != 0) || (A[i]%2 != 0 && A[i+1]%2 == 0))
		{
			continue;
		}
		else
		{
			return i + 1;
		}
	}
	return flag;
}

void main()
{
	int A[100];
	int n;
	cin >> n;
	nhapMang(A,n);
	int vt = kiemTra(A,n);
	if(vt == -999999)
	{
		cout << -1;
	}
	else
	{
		cout << vt;
	}
}