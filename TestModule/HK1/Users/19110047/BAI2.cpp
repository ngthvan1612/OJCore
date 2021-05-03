#include<stdio.h>
#include<string.h>
#include<math.h>
void nhap(char a[], char b[]);
int solve(char a[], char b[]);
void xuat(int kq);
int chuyen(char a[]);
int main(){
	char a[100];
	char b[100];
	nhap(a, b);
	int kq = solve(a, b);
	xuat(kq);
	return 0;
}
void nhap(char a[], char b[]){
	gets(a);
	gets(b);
}
int solve( char a[], char b[]){
	return chuyen(a)+chuyen(b);
}
void xuat(int kq){
	printf("%d", kq);
}
int chuyen(char a[]){
	int kq=0;
	int len = strlen(a);
	for (int  i=0;i<len;i++){
		if(a[i]> '0' && a[i]< '9'){
			kq+=(a[i]-'0')*(int)pow(16,len-i-1);
		}
		else{
			kq+=(a[i]-55)*(int)pow(16,len-i-1);
		}
	}
	return kq;
}
