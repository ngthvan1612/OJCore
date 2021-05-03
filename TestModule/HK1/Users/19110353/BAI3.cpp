#include <iostream>

#define MAX 999
using namespace std;
void NhapMang(int A[], int &n);
int KiemTra(int A[] , int n);

int main()
{
	int A[MAX];
	int n;
	NhapMang(A,n);
	int kq = KiemTra(A,n);
	cout<<kq;
	return 0;
}

void NhapMang(int A[], int &n)
{
	cin>>n;
	for(int i = 0 ; i<n ; i++)
	{
		cin>>A[i];
	}

}



int KiemTra(int A[] , int n)
{
	for(int i = 0 ; i<n ;i++)
	{
		if((A[i]%2 == 0 && A[i+1]%2 == 1 && A[i+2]%2 == 0) ||(A[i]%2 == 1 && A[i+1]%2 == 0 && A[i+2]%2 == 1))
		{
			return -1;
		}
	}
	return 2;
}