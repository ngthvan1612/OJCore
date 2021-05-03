#include <iostream>

using namespace std;

void input(int &n, int a[]){
	cin >> n;
	for(int i = 0; i< n; i++){
		cin >> a[i];
	}
}
int check(int n, int a[]){
	for(int i = 0; i<n-1; i++){
		if(a[i] % 2 == 0 && a[i+1] % 2 == 0){
			return i+1;
		}
		if(a[i] % 2 != 0 && a[i+1] % 2 != 0){
			return i+1;
		}
	}
	return -1;
}
int main(){
	int n;
	int arr[100];
	input(n,arr);
	cout << check(n,arr);
	return 0;
}