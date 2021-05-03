#include<iostream>

using namespace std; 

int tinh( string s1, string s2 ); 
int he16(char x); 

int main(){
    string s1; 
	string s2; 
	cin >> s1 >> s2; 
	int kq = tinh(s1,s2);
	cout << kq;  
}

int he16(char x){
	if ( x >= '0' && x <= '9') return x -'0'; 
	if (x =='A') return 10 ; 
	if (x =='B') return 11; 
	if (x =='C') return 12 ; 
	if (x== 'D') return 13; 
	if (x == 'E') return 14;
	if (x == 'F') return 15; 
}
int tinh(string s1, string s2){
	int sum = he16(s1[0]); 
	for (int i = 1 ; i < s1.length() ; i++){
		sum= sum*16+he16(s1[i]);	  
	}
	int sum2 = he16(s2[0]); 
	for (int i = 1 ; i < s2.length() ; i++){
		sum2= sum2*16+he16(s2[i]);	  
	}
	return sum + sum2 ; 
}
