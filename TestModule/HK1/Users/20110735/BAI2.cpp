#include <stdio.h>
#include <string.h>
#include <math.h>
void input (char a[], char b[]);
int solve (char a[], char b[]);
void output (int kq);
int  tran (char a[]) ;
int main () {
	char a[100];
	char b[100];
	input (a,b);
	int kq=solve(a,b);
	output (kq);
	return 0;
}
void input (char a[], char b[]) {
	gets (a);
	gets (b);
}
int solve (char a[], char b[]) {
	return tran(a)+tran(b);
}
void output (int kq) {
	printf ("%d",kq);
}
int  tran (char a[]) {
	int kq=0;
	int len = strlen (a);
	for (int i=0; i<len; i++) {
		if (a[i]>'0'&& a[i]<'9') {
		kq+=(a[i]-'0')*(int)pow(16,len-i-1);
	}
	else {
		kq+=(a[i]-55)*(int)pow(16,len-i-1);
	}
	
}
return kq;
}
