#include<iostream>
#include<cmath>
void nhap(int a[][100],int &n,int &m);
bool checkEle(int n);
void Work(int a[][100],int n,int m);
using namespace std;
int main(){
	int a[100][100],n,m;
	nhap(a,n,m);
	Work(a,n,m);
	return 0;
}
void nhap(int a[][100],int &n,int &m){
	cin>>n>>m;
	for(int i=0;i<n;i++)
		for(int j=0;j<m;j++)
			cin>>a[i][j];
}
bool checkEle(int n){
	if(n<2)
		return false;
	for(int i=2;i<=sqrt(n);i++)
		if(n%i==0)
			return false;
	return true;
}
void Work(int a[][100],int n,int m){
	int b[100]={0};
	for(int i=0;i<n;i++){
		long tong=0;
		for(int j=0;j<m;j++){
			if((checkEle(a[i][j])))
				tong+=a[i][j];
		}
		b[i]=tong;
	}
	long min=99999999999;
	for(int o=0;o<n;o++){
		if(min>b[o])
			min=b[o];
	}
	cout<<min<<endl;
}
