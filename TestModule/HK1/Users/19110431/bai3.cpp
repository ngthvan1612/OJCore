#include<iostream>
using namespace std;
#define max 100


void input(int A[],int &n);
int xenke(int A[],int n);
void output(int vt);


void main()
{
	int A[max],n;
	input(A,n);
	int res=xenke(A,n);
	output(res);
}

int xenke(int A[],int n)
{
	int flag=0;
	int k;
	for(int i=0;i<n;i++)
	{
		if((A[i]%2==0 && A[i+1]%2==1) || (A[i]%2==1 && A[i+1]%2==0))
		{
			flag=1;
		}
		if((A[i]%2==0 && A[i+1]%2==0) || (A[i]%2==1 && A[i+1]%2==1))
		{
			flag=0;
			k=i;
		}
	}
	if(flag==1)
		return -1;
	else
		return k;

}
void input(int A[],int &n)
{
	cin>>n;
	for(int i=0;i<n;i++)
		cin>>A[i];
}
void output(int vt)
{
	cout<<vt;
}






