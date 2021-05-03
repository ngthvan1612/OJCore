#include <iostream>
using namespace std;

bool check(int n)
{
	if(n < 2){
		return false;
	}
	for(int i = 2; i < n; i++){
		if(n % i == 0){
			return false;
		}
	}
	return true;
}
int min(int a,int b){
	if(a>b){
		return b;
	}else {
		return a;
	}

}
void input(int &m,int &n, int a[][100]){
	cin >> m >> n;
	for(int i = 0; i< m; i++){
		for(int j = 0; j < n; j++){
			cin >> a[i][j];
		}
	}
}
int Tim(int m, int n, int a[][100]){
	int MIN = 0;
	for(int k = 0; k < n; k++){
		MIN += a[0][k];
	}
	for(int i = 0; i < m; i++){
		int sum = 0;
		for(int j = 0; j < n; j++){
			if(check(a[i][j])){
				sum += a[i][j];
			}
		}
		MIN = min(MIN,sum);
	}
	return MIN;
}
int main(){
	int m,n;
	int a[100][100];
	input(m,n,a);
	cout << Tim(m,n,a);
}