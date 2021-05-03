#include <iostream>
using namespace std;


void nhapmang(int a[][100], int &d, int &c);
int tinh(int a[][100], int d, int c);

int main ()
{
	int a[100][100];
	int n;

	nhapmang(a,d,c);
	int kq= tinh(a,d,c);
	cout << kq;
}

void nhapmang(int a[][100], int &d, int &c)
{
	cin >> d >> c;
	if (d>1 && d<100 && c>1 && c<100)
	{
		for (int i=-; i<d; i++)
		{
			for (int j=0; j<c; j++)
				cin >> a[i][j];
		}
	}
}

int tinh(int a[][100], int d, int c)
{
	int arr[100];
	int sum=0;
	for (int i=0; i<d; i++)
	{
		for (int j=0; j<c; j++)
		{
			for (int m=2; m<a[i][j]; m++)
				if (a[i][j] %m ==0)
					sum +=m;
		}
		arr[i] = m;
	}

	int min=arr[0]
	for (int k=0; k<d; k++)
	{
		if (arr[k]<=arr[k+1]) min=arr[k];
		else min = arr[k+1];
	}

	return min;
}

