#include<iostream>
using namespace std;
int sum( int x[1000], int b) {
	int tong=0;
	for ( int i=0;i<b;i++) {
		tong+=a[i];
	}
	return tong; 
}
int kt( int z) {
	int dem=0;
	for ( int i=2;i<z;i++) {
		if (z%i==0){
			dem++; } }
	if (dem==0)
		return 1;
	else 
		return 0;
}
int main() {
	int a[100][100],m,n;
	cin>>m>>n;
	for ( int i=0;i<m;i++) {
		for ( int j=0;j<n;j++) {
			cin>>a[i][j];
		}
		
	}
  
	return 0;
}