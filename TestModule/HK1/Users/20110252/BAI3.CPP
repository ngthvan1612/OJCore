#include <iostream>
#define SIZE 101
using namespace std;

int ktra(int A[],int n);

void main()
{
	int n;
	cin >> n;
	int A[SIZE];
	for (int i=0; i<n; i++)
		cin >> A[i];
	
	int kq = ktra(A,n);
	
	cout << kq;

}



int ktra(int A[],int n)
{
	int check;
	if (A[0]%2==0)
		check=0;
	else 
		check=1;
	
	for (int i=1;i<n;i++)
		if (check==0)
		{	if (A[i]%2==0)
				return i;
			else
				check=1;
		}
		else
		{
			if(A[i]%2==1)
				return i;
			else check=0;
		}
return -1;
}