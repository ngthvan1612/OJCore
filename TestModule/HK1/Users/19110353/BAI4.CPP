#include <iostream>
#define MAX 98
using namespace std;
void NhapMang(int A[][MAX] , int &m ,int &n);
void Tong(int A[][MAX] , int m , int n);
int main()
{
	int m , n;
	int A[MAX][MAX];
	NhapMang(A,m,n);
	Tong(A,m,n);
	return 0;

}
void NhapMang(int A[][MAX] , int &m ,int &n)
{
	cin>>m>>n;
	for(int i = 0 ; i<m ;i++)
	{
		for(int j = 0 ; j<n ;j++)
		{
			cin>>A[i][j];
		}
	}
}



void Tong(int A[][MAX] , int m , int n)
{
 int max = 0;
 for(int i = 0 ; i<m ;i++)
 {
	 int sum = 0;
	 for(int j = 0 ; j<n ;j++)
	 {
		 sum+=A[i][j];
	 }
	 if(sum > max)
	 {
		 max = sum;
	 }

 }
cout<<max;
}
 