#include<iostream>

using namespace std;

int kiemtra(int A[], int n);

int main()
{
	int n;
	cin >> n;
	int A[100];
	for(int i=0;i<n;i++)
		cin >> A[i];
	int kq=kiemtra(A,n);
	cout << kq;
	return 0;
}

int kiemtra(int A[], int n)
{
	int kq=-1;
	int i;
	if(A[0]%2==0)
	{
		for(i=1;i<n;i++)
			if(A[i]%2!=i%2)
			{	
				kq=i;
				break;
			}
	}
	if(A[0]%2==1)
	{
		for(i=1;i<n;i++)
			if(A[i]%2!=(i+1)%2)
			{
				kq=i;
				break;
			}
	}
	return kq;
}