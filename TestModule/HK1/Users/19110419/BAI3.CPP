#include <stdio.h>
#include <iostream>

using namespace std;

int chanLe (int A[], int n);
void nhap (int A[], int &n);

int main ()
{
	int A[99], n;
	nhap (A, n);
	//int vitri;
	cout << chanLe (A, n);
	return 0;
}

int chanLe (int A[], int n)
{
	int viTri=0, dem=0;
	for (int i=0; i<n-1; i++)
	{
		if (A[i]%2 ==0 && A[i+1]%2 != 0|| A[i]%2 !=0 && A[i+1]%2 == 0)
			dem++;
		else
		{
			viTri = i+1;
			break;
		}
	}
	if (dem==n-1)
		return -1;
	else
		return viTri;

}

void nhap (int A[], int &n)
{
	cin >> n;
	for (int i=0; i<n; i++)
		cin >> A[i];
}
