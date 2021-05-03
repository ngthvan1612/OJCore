#include<iostream>
#define full 100
using namespace std;
void nhap(int A[],int &nA);
int tinhtoan(int A[],int nA);

void main()
{
	int A[full];
	int nA=0;
	nhap(A,nA);
	cout<<tinhtoan(A,nA);
}
void nhap(int A[],int &nA)
{
	cin>>nA;
	for (int i=0; i<nA;i++)
	{
		cin>>A[i];
	}
}
int tinhtoan(int A[],int nA)
{
	int chanle=0;
	for (int i=1;i<=(nA-1);i++)
	{
		//chan le
		if (A[i-1]%2==0&&A[i]%2!=0&&A[i+1]%2==0)
			chanle=-1;
		//le chan
		else if(A[i-1]%2!=0&&A[i]%2==0&&A[i+1]%2!=0)
			chanle=-1;
		else chanle=0;

		if (chanle==0)
			return i+1;
		else return chanle;
	}
}