#include <stdio.h>
#include <iostream>
using namespace std;


int kiemtra(int A[], int n);

void main(void)
{
	int n;
	int A[100];

	cin>>n;
	
	int i;

	for(i=0; i<n; i++)
		cin>>A[i];



	int kq=kiemtra(A,n);

	cout<<kq;


}



int kiemtra(int A[], int n)
{
	for (int i=1; i<n; i++)
	if ((A[i]%2==0 && A[i-1]%2==0) || (A[i]%2!=0 && A[i-1]%2 !=0))
		return i;

	return -1;
}