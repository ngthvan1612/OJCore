#include <iostream>
#include <math.h>
using namespace std;
int snt(int n){
	if(n<=1)
		return 0;
	else
		for(int i =2 ;i<=sqrt(n);i++)
			if(n%i==0)
				return 0;
	return 1;
}
void main(){
	int m,n,a[100][100],i,j;
	cin>>m>>n;
	for(i =0;i<m;i++)
		for(j= 0;j<n;j++)
			cin>>a[i][j];
	int min,count = 0;
	for(int k=0;k<n;k++){
		if(snt(a[0][k])){
			count += a[0][k];
		}
	}
	min = count;
	for(i=0;i<m;i++){
		int sum = 0;
		for(j =0;j<n;j++){
			if(snt(a[i][j])){
				sum += a[i][j];
			}
		}
		if(sum<min){
			min = sum;
		}
	}
	cout<<min;
}