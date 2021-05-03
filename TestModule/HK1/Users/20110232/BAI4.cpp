#include<iostream>

using namespace std; 

bool sngto(int x){
	if ( x < 2) return false; 
	for (int i = 2 ; i < x/2 + 1; i++){
		if ( x % i == 0 ) return false; 
	}
	return true; 
}

int main(){
    int n, m ;
	cin >> n >> m ; 
	int a[n][m]; 
	for (int i = 0 ; i<n ; i++){
		for (int j = 0  ;j < m  ; j++){
			cin >> a[i][j]; 
		}
	} 
    int min = 9999999; 
   	for (int i = 0 ; i<n ; i++){
   		int sum = 0 ; 
		for (int j = 0  ;j < m  ; j++){
			if (sngto(a[i][j])== true) {
				sum+=a[i][j]; 
			}
		}
		if (min > sum) min = sum ; 
	} 
    cout << min ;
	return 0 ; 
}

