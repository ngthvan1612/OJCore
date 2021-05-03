#include <stdio.h>
void chan (int n){
	if (a[0]%2==0){//neu so dau la so chan 
		for (int i=0; i<n; i=i+2){
			b=b+2;
			if (a[i]%2!=0){
				return false;
			}	return true;
		}
	}
}
void chanle (int n){
	if (a[0]%2==0){	
		for (int i=1; i<n; i=i+2){
			if (a[i]%2==0){
				return false;
			}	return true; 
		}
	}
}
void le(int n){
	if (a[0]%2!=0){//neu so dau la so le 
		for (int i=0; i<n; i=i+2){
			if (a[i]%2==0){
				return false;
			}return true;
		}
	}
}
void lechan(int n){
	if (a[0]%2!=0){
		for (int i=1; i<n; i=i+2){
			if (a[i]%2=!0){
				return false;
			}	return true;
		}
	}
}
int main (){
	int n;
	scanf ("%d", &n);
	int dem=0;
	int a[n];
	for (int i=0; i<n; i++){
		scanf ("%d", &a[i]);
	}if (chan(n)==true &&le(n)==true && chanle(n)==true && lechan(n)==true){
		printf ("-1");
	}
	return 0;
}
