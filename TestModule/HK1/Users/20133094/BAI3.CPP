#include<iostream>
#define MAX 100
void input(int A[], int& n);
int mainProcess(int A[], int n);
void main()
{
	int A[MAX];
	int n;
	input(A, n);
	int result = mainProcess(A, n);
	std::cout << result;
}
void input(int A[], int& n)
{
	std::cin >> n;
	for (int i = 0; i < n; i++)
		std::cin >> A[i];
}
int mainProcess(int A[], int n)
{
	int count = 0;
	for (int i = 0; i < n; i++)
	{
		if (A[i] % 2 == 0 && A[i+1] % 2 != 0)
			count++;
		else if (A[i] % 2 != 0 && A[i+1] % 2 == 0)
			count++;
		else if ((A[i] % 2 == 0 && A[i+1] % 2 == 0) || (A[i] % 2 != 0 && A[i+1] % 2 != 0))
			return i + 1;
	}
	if (count == n - 1)
		return -1;
	return -1;
}