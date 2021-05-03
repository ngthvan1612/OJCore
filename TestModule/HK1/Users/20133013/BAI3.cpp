#include <iostream>
using namespace std;

int ktrCL(int A[100],int n);

void main() {
	int A[100];
	int n;
	cin >> n;
	int i = 0;
	for (;i<n; ++i){
		cin >> A[i];
	}
	cout << ktrCL(A,n);
}

int ktrCL(int A[100],int n)
{
	int i =1;
	for (;i<n;++i){
		if(A[i]%2 == A[i-1]%2)
			return i-1;
	return -1;

}
