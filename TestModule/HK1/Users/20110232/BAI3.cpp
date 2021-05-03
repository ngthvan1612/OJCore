#include<iostream>

using namespace std; 

int tinh(int n , int a[] ); 

int main(){
    int n ; 
    cin >> n ; 
    int a[n]; 
    for (int i = 0 ; i< n ; i++){
    	cin >> a[i]; 
	}
	int kq  = tinh(n,a); 
	cout << kq; 
	return 0 ; 
}
int tinh(int n , int a[]){
	int sole; 
    if (a[0] % 2 == 0) sole=2; 
    else sole = 1; 
    
    if (sole ==1){
    	for (int i = 1 ; i<n ; i++){
    		if (a[i] % 2 != 0 && i % 2 != 0 ) return i  ;
			else if ( a[i] % 2 == 0 && i % 2 ==0) return i ;  
		}
	}
	else {
    	for (int i = 1 ; i<n ; i++){
    		if (a[i] % 2 == 0 && i % 2 != 0 ) return i  ;
			else if ( a[i] % 2 != 0 && i % 2 ==0) return i ;  
		}
	}
	return -1; 
}
