#include <iostream>
using namespace std;

void nhap(int &m, int &n, int A[100][100]);
bool isNt(int a);

int main()
{
	int m,n;
	int A[100][100];
	nhap(m,n,A);
	int min=0 ;

	for(int k=0;k<n;k++)
	{
		if(isNt(A[0][k]))
		{
			min +=A[0][k];
		}
	}

	for(int i=1;i <m;i++){
		int tem=0;
		for(int j=0;j <n;j++){
			if(isNt(A[i][j]))
			{
				tem +=A[i][j];
			}
		}
		if(min >tem)
			min =tem;
	}
	cout <<min;
	return 0;
}

bool isNt(int a)
{
	for(int i=2;i<a;i++){
		if(a%i ==0){
			return false;
			break;
		}
	}
	return true;
}

void nhap(int &m, int &n, int A[100][100])
{
	cin >>m>>n;
	for(int i=0;i <m;i++){
		for(int j=0;j <n;j++){
			cin >>A[i][j];
		}
	}
}