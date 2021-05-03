#include <iostream>

using namespace std;
void nhap(int &m, int &n, int a[][100]);
int checkngto(int n);
void tong(int a[][100], int m, int n, int b[]);
void kq(int b[], int m);
int main(){
	int a[100][100];
	int b[100];
	int m,n;
	nhap(m,n,a);
	tong(a,m,n,b);
	kq(b,m);
	return 0;
}
void nhap(int &m, int &n, int a[][100]){
	cin>>m>>n;
	for (int i=0;i<m;i++){
		for (int j=0;j<n;j++){
			cin>>a[i][j];
		}
	}
}
int checkngto(int n){
	for (int i=2;i<n;i++){
		if (n%i==0)
			return 0;
	}	
	return 1;
}
void tong(int a[][100], int m, int n, int b[]){
	for (int i=0;i<m;i++){
		int t=0;
		for (int j=0;j<n;j++){
			int check = checkngto(a[i][j]);
			if (check == 1)
				t+=a[i][j];
		}
		b[i]=t;
	}
}
void kq(int b[], int m){
	int min=b[0];
	for (int i=0;i<m;i++){
		if(b[i] < min)
			min = b[i];
	}
	cout<<min;
}