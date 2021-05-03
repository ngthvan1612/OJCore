#include<iostream>
using namespace std;
void nhap(int &m,int &n){
	cin>>m>>n;
}
void xuat(int kq){
	cout<<kq;
}
void main(){
	int m,n;
	int a[101][101];
	int s[101];
	nhap(m,n);
	for(int i=0;i<m;i++){
		for(int j=0;j<n;j++){
			cin>>a[i][j];
		}
	}
	for(int a1=0,s1=0;a1<m;a1++){
		for(int j=0;j<n;j++){
			s[s1]=s[s1]+a[a1][j];
		
		}
		s1++;
	}
	int imax=s[0];
	for(int j=0;j<m;j++){
		if(imax<s[j]) imax=s[j];
	}
	xuat(imax);
}