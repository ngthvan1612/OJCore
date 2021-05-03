#include<iostream>
#define v 200
using namespace std;
int timMin(int ns, int* s);
void kiemtra(int m, int n, int A[][v]);
void timnguyento(int n, int k, int A[][v], int& ns, int* s);
int langto(int x);
void main()
{
	int m, n, A[v][v];
	cin >> m >> n;
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n; j++)
		{
			cin >> A[i][j];
		}
	}
	
	kiemtra(m, n,A);
	
}
void kiemtra(int m, int n, int A[][v])
{
	int ns = 0;
	int* s = new int[v * v];
	for (int i = 0; i < m; i++)
	{
		timnguyento(n, i, A, ns, s);
	}
	int min = timMin(ns, s);
	cout << min;
	delete[]s;
}
void timnguyento(int n, int k, int A[][v], int& ns, int* s)
{
	int sum = 0;
	for (int i = 0; i < n; i++)
	{
		
		if (langto(A[k][i]) == 1)
			sum += A[k][i];

	}
	s[ns++] = sum;
}
int langto(int x)
{
	int dem = 0;
	for (int i = 1; i <= x; i++)
	{
		if (x % i == 0)
			dem++;
	}
	if (dem == 2)
		return 1;
	return 0;
}
int timMin(int ns, int* s)
{
	int min = s[0];
	for (int i = 1; i < ns; i++)
	{
		if (min > s[i])
			min = s[i];
	}
	return min;
}