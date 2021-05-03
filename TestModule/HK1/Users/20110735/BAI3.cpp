#include <stdio.h>
void input (int &n, int a[] );
int solve (int n, int a[]) ;
void output (int kq );
int check (int a) ;
int main () {
	int n,a[100];
	input (n,a);
	int kq=solve(n,a);
	output (kq) ;
	return 0;
}
void input (int &n, int a[] ) {
	scanf ("%d",&n); 
	for (int i=0; i<n; i++) {
		scanf ("%d",&a[i]);
	}
}
int solve (int n, int a[]) {
	int kq=-1;					// 1 la chan, 2 la le
	for (int i=0; i<n-1; i++) {
		if (check(a[i])==1) {
			if (check (a[i+1])==0) {
			kq=-1;	
			}
			else return i+1;
		}
		else {
		if (check(a[i+1])==1) 
		kq=-1;
		else return i+1;
	}
	}
	return kq;	
}
void output (int kq ) {
	printf ("%d",kq);
}
int check (int a) {
	if (a%2==0) return 1;// la so chan
	else return 0;// la so le
}

