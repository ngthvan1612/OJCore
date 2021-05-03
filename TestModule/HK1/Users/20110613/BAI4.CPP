#include<iostream>

using namespace std;

int LaNT(int a);

int main()
{
	int m, n, i, j, t;
	cin >> m >>n;
	int A[100][100];
	int Tong[100];
	for(i=0;i<m;i++)
		for(j=0;j<n;j++)
			cin >> A[i][j];
	for(i=0;i<m;i++)
	{
		t=0;
		for(j=0;j<n;j++)
			if(LaNT(A[i][j])==1)
				t=t+A[i][j];
		Tong[i]=t;
	}
	int min=Tong[0];
	for(i=0;i<m;i++)
		if(Tong[i]<min)
			min=Tong[i];
	cout  << min;
	return 0;
}

int LaNT(int a)
{
	int dem=0;
	for(int i=1;i<=a;i++)
		if(a%i==0)
			dem++;
	if (dem==2)
		return 1;
	else
		return 0;
}