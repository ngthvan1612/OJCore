#include <iostream>
using namespace std;
int check(int a[], int n ){
	for(int j =0;j<n;j++){
		if(a[j]%2){
			if(j==n-1){
				return -1;
			}
			if(a[j+1]%2){
				return j +1;
			}
		}
		if(a[j]%2==0){
			if(j==n-1){
				return -1;
			}
			if(a[j+1]%2==0){
				return j+1;
			}
		}
	}
	return -1;
}
void main(){
	int n , a[1000];
	cin>>n;
	for(int i= 0;i<n;i++){
		cin>>a[i];
	}
	cout<<check(a,n);
}