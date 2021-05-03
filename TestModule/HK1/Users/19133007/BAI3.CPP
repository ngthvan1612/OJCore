#include<iostream>
#define SIZE 100
using namespace std;

void nhap(int &n,int A[] )
{
cin>>n;
for(int i=0;i<n;i++)
	{
	cin>>A[i];
	}
}


int kiemTra(int n,int A[])
{
	
	for(int i=0;i<n;i++)
	{
	if(soChan(n,A)==1)
	{
		if(soChan(A[i+1])==0)
		{
		i++;
		break;
		}
	}
	if(soChan(A[i])==0)
	{	
		if(soChan(A[i+1])==1)
			
		{
		i++;
		break ;
		}
	}

	}
}


int soChan(int n,int A[])
{
	for(int i=0;i<n;i++)
	{
		if(A[i]%2==0)
			return 1;
		else return 0;
	}
	
	return -1;
}
void main()
{

}