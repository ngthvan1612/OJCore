#include<iostream>
using namespace std;

int main(){
	int m;
	int n;
	int sum;
	int c = 0;
	cin >> m;
	cin >> n;
	int arr[100][100];
	for(int i = 0; i< m; i++)
		for(int j = 0; j<n; j++)
		{
			cin >> arr[m][n];
		}
	int min = 10000;
	for(int k = 0; k < m; k++){
		sum = 0;
		for(int l = 0; l < n; l++)
		{
			c = 0;
			for(int e = 2; e < arr[k][l]; e++)
			{
				if(arr[k][l] % e == 0 && arr[k][l] != 2 && arr[k][l] != 1)
					c =1;
			}
			if(c == 0)
			sum += arr[k][l];
		}
		if(min > sum)
		min = sum;
	}
	if(min != 1000)
	cout << min;
	else
	cout << 0;
	return 0;
}