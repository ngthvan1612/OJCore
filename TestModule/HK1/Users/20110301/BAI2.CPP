#include<stdio.h>
#include<string.h>
#include<math.h>

void nhap(char A[], char B[]);
void doiHe(char A[], char B[]);
double tinhTong(char A[], char B[]);
void xuat(double a);

int main(){
	char A[100];
	char B[100];
	nhap(A,B);
	doiHe(A,B);
	double kq = tinhTong(A,B);
	xuat(kq);
	return 0;
}

void nhap(char A[], char B[]){
	gets(A);
	gets(B);
}

void xuat(double a){
	printf("%.0lf", a);
}

void doiHe(char A[], char B[]){
	int a = strlen(A);
	int b = strlen(B);
	for (int i=0; i<a; i++){
		if (A[i]>=65 && A[i] <= 90)
			A[i] = A[i] - 'A' + 10;
		if (A[i]>='0' && A[i] <='9')
			A[i] = A[i] -'0';
	}
	for (int j=0; j<b; j++){
		if (B[j] >=65 && B[j] <=90)
			B[j] = B[j] - 'A' + 10;
		if (B[j]>='0' && B[j]<='9')
			B[j] = B[j] - '0';
	}
}

double tinhTong(char A[], char B[]){
	strrev(A);
	strrev(B);
	double s1 = 0;
	double s2 = 0;
	int a = strlen(A);
	int b = strlen(B);
	for (int i=0; i<a; i++)
		s1+=A[i]*pow(16,i);
	for (int j=0; j<b; j++)
		s2+=B[j]*pow(16,j);
	double kq = s1+s2;
	return kq;
}


