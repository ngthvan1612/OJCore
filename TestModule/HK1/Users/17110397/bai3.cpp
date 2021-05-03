#include<iostream>
using namespace std;

int main(){
	int n;
	int arr[100];
	cin >> n;
	for(int i = 0; i< n; i++)
		cin >> arr[i];
	int flag = 0;
	for(int j = 1; j < n - 1; j++){
		if(arr[j-1] % 2 == 0){
		if(arr[j] % 2 == 1)
			flag = 1;
		}
		else{
		if(arr[j] % 2 == 0)
			flag = 1;
		}

		if(arr[j] % 2 == 0){
			if(arr[j+1] % 2 == 0)
			{
				flag = 0;
		}}
		else{
			if(arr[j+1] % 2 == 1)
			{
				flag = 0;
		}}
		if(flag == 0){
			cout << 2;
			break;
	}}
	if(flag == 1)
		cout << -1;
	return 0;
}