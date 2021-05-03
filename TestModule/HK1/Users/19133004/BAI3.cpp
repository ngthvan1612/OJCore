#include<iostream>



using namespace std;
void input(int arr[],int& n) {
	cin >> n;
	for(int i=0;i<n;i++) {
		cin >> arr[i];
	}
}
int checkElement(int arr[],int n) {
	int check =-1;
	for(int i=0;i<n;i++) {
		if(arr[i]%2==0&&arr[i+1]%2==0) {
			check =i+1;
			break;
		}
		if(arr[i]%2!=0&&arr[i+1]%2!=0) {
			check = i+1;
			break;
		}
		if(arr[i]%2==0&&arr[i+1]%2!=0) {
			check =-1;
			break;
		}
	}
	return check;
}
int main()
{
	int n,arr[1000];
	input(arr,n);
	cout<<checkElement(arr,n);
	return 0;
}
