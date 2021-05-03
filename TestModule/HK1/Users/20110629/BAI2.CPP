#include<stdio.h>
#include<string.h>
#include<math.h>
void nhap( char A[], char B[]){
	gets(A);
	gets(B);
}
double xuLy1( char A[]){
	int n=strlen(A);
	//strrev(A);
	double S1=0;
	for(int i=0;i<n;i++){
		if(A[i]>='0' && A[i]<= '9')
			S1+=(double)((A[i]-'0')*pow(16,n-i-1));
		else if(A[i]>='A' && A[i]<='Z')
			S1+=(double)((A[i]-55)*pow(10 ,n-i-1));
	}
	return S1;
}

void xuat( double kq1){
	printf("%0.lf",kq1);
}

void main(){
	char A[100], B[100];
	nhap(A,B);
	double kq1=xuLy1(A);
//	int kq2=xuLy2(B);
//	xuat(kq1,kq2);
	xuat(kq1);
}