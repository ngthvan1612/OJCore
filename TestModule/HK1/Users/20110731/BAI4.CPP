#include<stdio.h>
void nhap(int &n,int &m,int a[][100]);
int snt(int x);
int tmin(int n,int m,int a[][100]);
void xuat(int kq);


void main(){
	int n,m,a[100][100];
	nhap(n,m,a);
	int kq=tmin(n,m,a);
	xuat(kq);
}
void nhap(int &n,int &m,int a[][100]){
	scanf("%d%d",&n,&m);
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			scanf("%d",&a[i][j]);
		}
	}
}
int snt(int x){
	int d=0;
	for(int i=1;i<=x;i++){
		if(x%i==0)
			d++;
	}
	if(d==2)
		return 1;
	return 0;
}
int tmin(int n,int m,int a[][100]){
	int t=0;
	int nB=0;
	int B[100];
	for(int i=0;i<m;i++){
		for(int j=0;j<n;j++){
			if(snt(a[i][j])==1)
				t=t+a[i][j];
		}
		B[nB]=t;
		nB++;
		t=0;
	}
	int min=B[0];
	for(int y=0;y<nB;y++)
		if(B[y]<min)
			min=B[y];
	return min;
}
void xuat(int kq){
	printf("%d",kq);
}
