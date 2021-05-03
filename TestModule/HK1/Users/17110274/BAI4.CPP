#include<iostream>

using namespace std;

void nhap(int a[100][100], int &m, int &n){
	cin >> m;
	cin >> n;
	for(int i = 0; i<m ; i++){
		for(int j=0;j<n;j++){
			cin>>a[i][j];
		}
	}
}
void ktnt(){}

void main(){
	int a[100][100];
	int m; int n; int sumtmp=0;int min=100000000;
	nhap(a,m,n);
	for(int i=0; i<m;i++){
		for(int j=0;j<n;j++){
			sumtmp=sumtmp+a[i][j];
		}
		if(sumtmp<min){
			min = sumtmp;
		}else min = min;
	}
	cout << min;
}