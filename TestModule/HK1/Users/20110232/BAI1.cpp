#include<iostream>

using namespace std; 

void tinh(int x, int y , int &kqa , int &kqb ); 

int main(){
    int x,y,z,t,u,v;
	int a[3];  
	a[0] = 0 ; 
	a[1] = 0 ; 
	a[2] = 0 ; 
	cin >> x >> y >> z >> t >> u >> v;
	int kqa , kqb; 
	tinh(x,y,kqa,kqb); 
	a[0]= kqa; 
	a[1]=kqb; 
	tinh(z,t,kqa,kqb); 
	a[0] += kqa; 
	a[2] += kqb; 
	tinh(u,v,kqa,kqb); 
	a[1]+= kqa; 
	a[2]+=kqb; 
	cout << a[0]<< " " << a[1] << " " << a[2]; 
	return 0 ; 
}
void tinh(int x, int y, int &kqa , int &kqb){
	if ( x == y ){
		kqa = 1; 
		kqb = 1; 
	}	
	else if ( x == 1 && y == 2 || x == 3 && y == 1 || x==2 && y == 3 ){
	    kqa = 0 ; 
		kqb = 3; 
	} 
	else if ( x ==2 && y ==1 || x == 1 && y== 3 || x == 3 && y == 2){
		kqa = 3 ; 
		kqb = 0; 
	}   
}
