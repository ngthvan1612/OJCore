#include<iostream>
#include<math.h>


using namespace std;
int isPrime(int n) {
	if(n<=1) {
		return 0;
	}
	for(int i=2;i<=sqrt(n);i++) {
		if(n%i==0) {
			return 0;
		}
	}
	return 1;
}
int main()
{
	int r,c,arr[101][101];
	cin>>r>>c;
	for(int i=0;i<r;i++) {
		for(int j=0;j<c;j++) {
			cin >> arr[i][j];
		}
	}
	int tmp=1e9;
	for(int i=0;i<r;i++) {
		int s = 0;
		for(int j=0;j<c;j++) {
			if(isPrime(arr[i][j])) {
				s+=arr[i][j];
			}
		}
		if(tmp>s) {
			tmp=s;
		}
	}
	cout<<tmp;
}
