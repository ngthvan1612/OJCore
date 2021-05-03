#include<iostream>
using namespace std;
int main() {
	int a[1000],n,x;
	cin>>n;
	for ( int i=0;i<n;i++) {
		cin>>a[i]; }
	for ( i=0;i<n-2;i++) {
		for ( int j=i+1;j<i+2;j++) {
			if( a[i]%2==1&&a[j]%2==1 || a[i]%2==0&&a[j]%2==0) {
				x=j;
				break; }
			else j=j+0;
		}
	}
	
	if (i==n-2) {
		cout<<-1;}
	else {
		cout<<x;}
	return 0;
}
