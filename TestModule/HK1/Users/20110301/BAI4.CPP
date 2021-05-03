#include<stdio.h>

void nhap(int A[][100], int &m, int &n);
int laNT(int a);
void tinhTong(int A[][100], int B[], int m, int n, int &nB);
int timMin(int B[], int nB);
void xuat(int kq);

int main(){
	int A[100][100];
	int B[100];
	int nB;
	int m,n;
	nhap(A,m,n);
	tinhTong(A,B,m,n,nB);
	int kq = timMin(B,nB);
	xuat(kq);
	return 0;
}

void nhap(int A[][100], int &m, int &n){
	scanf("%d%d", &m,&n);
	for (int i=0; i<m; i++)
		for (int j=0; j<n; j++)
			scanf("%d", &A[i][j]);
}

void xuat(int kq){
		printf("%d", kq);
}

void tinhTong(int A[][100], int B[], int m, int n, int &nB){
	nB=0;
	int i=0;
	while (i<m){
		int s=0;
		for (int j=0; j<n; j++){
			if (laNT(A[i][j])==1)
				s+=A[i][j];
		}
		B[nB++]=s;
		i++;
	}
}

int timMin(int B[], int nB){
	int min=B[0];
	for (int i=0; i<nB; i++)
		if (B[i]<min)
			min=B[i];
	return min;
}

int laNT(int a){
	int d=0;
	for (int i=1; i<=a; i++)
		if (a%i==0)
			d++;
	if (d==2)
		return 1;
	else
		return 0;
}