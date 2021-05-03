#include<iostream>
using namespace std;

int kt(int x, int y){
	if(((x+y)%2)==1)
		return 1;
	else return 0;
}

void main(){
	int a[100];
	int n;
	int j;
	cin >>n;
	int tmp=0;
	for(int i=0;i<n;i++){
		cin >> a[i];
	}

	for(j=0;j<n;j++){
		if(kt(a[j],a[j+1]))
			tmp = -1;
		else
			break;
	}
	if(j==n-1){
		cout<<tmp;
		
	}else cout<<j+1;
		
	

}