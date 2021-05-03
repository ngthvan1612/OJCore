#include<iostream>
#include<math.h>
#define MAX 100
void input(int A[][MAX], int& m, int& n);
int mainProcess(int A[][MAX], int m, int n);
void main()
{
	int A[MAX][MAX];
	int m, n;
	input(A, m, n);
	int result = mainProcess(A, m, n);
	std::cout << result;
}
void input(int A[][MAX], int& m, int& n)
{
	std::cin >> m >> n;
	for (int i = 0; i < m; i++)
		for (int j = 0; j < n; j++)
			std::cin >> A[i][j];
}
bool checkPrime(int x)
{
	if (x < 2)
		return false;
	for (int i = 2; i <= sqrt(x); i++)
		if (x % i == 0)
			return false;
	return true;
}
int findMin(int X[], int x)
{
	int min = X[0];
	for (int i = 0; i < x; i++)
		if (X[i] < min)
			min = X[i];
	return min;
}
int mainProcess(int A[][MAX], int m, int n)
{
	int R[MAX];
	int nR = 0;
	for (int i = 0; i < m; i++)
	{
		int sum = 0;
		for (int j = 0; j < n; j++)
			if (checkPrime(A[i][j]))
				sum += A[i][j];
		R[nR++] = sum;
	}
	int min = findMin(R, nR);
	return min;
}