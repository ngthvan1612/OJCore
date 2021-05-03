#include<stdio.h>
void nhap (int &n, int A[]);
int laChanle (int n, int A[]) ;
int laLechan (int n, int A[]) ;
int kiemtra (int n, int A[]);
void main (){
	int n, A[100];
	nhap (n,A);
	int kt=kiemtra (n,A);
	printf ("%d",kt);
}
void nhap (int &n, int A[]){
	scanf ("%d",&n);
	for (int i=0;i<n;i++)
		scanf ("%d",&A[i]);
}
int kiemtra (int n, int A[]) {
	int k;
	if (A[0]%2==0)
		k=laChanle (n,A);
	else
		k=laLechan(n,A);
	return k;
}
int laChanle (int n, int A[]) {
	int i=0;
	while (i<n){
		if (A[i]%2==0 && A[i+1]%2==0)
			return i+1;
		else if (A[i]%2!=0)
			return i;
		i=i+2;
	}
	if (n%2!=0)
		if (A[n-1]%2!=0)
			return n-1;
	return -1;

}
int laLechan (int n, int A[]) {
	int i=0;
	while (i<n){
		if (A[i]%2!=0 && A[i+1]%2!=0)
			return i+1;
		else if (A[i]%2==0)
			return i;
		i=i+2;
	}
	if (n%2!=0)
		if (A[n-1]%2==0)
			return n-1;
	return -1;
}