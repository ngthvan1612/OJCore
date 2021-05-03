#include <iostream>
using namespace std;

int laSoNguyenTo(int a)
{
	int dem=0;
	for (int i=1;i<=a;i++)
		if(a%i==0)
		dem++;
	if(dem==2)
		return 1;
	else
		return 0;
}


int tongNTdong(int b[100][100], int m, int n)
{
	int max=10000;
	for (int i=0; i<m;i++)
	{
		int sum=0;
		for(int j=0; j<n; j++)
		{
			if(laSoNguyenTo(b[i][j])==1)
				sum+=b[i][j];
		}
		if (sum<max)
			max=sum;
	}
	return max;
}

int main()
{
	int a[100][100];
	int m, n, i, j;
	cin >>m >> n;
	for (i=0; i<m;i++)
		for(j=0; j<n; j++)
			cin >> a[i][j];
	int max=tongNTdong(a, m, n);
	cout<< max;
	return 0;
}