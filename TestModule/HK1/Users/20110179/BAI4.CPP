#include<stdio.h>
void nhap(int a[][101], int &m, int &n);
int tongMin(int a[][101], int m, int n);
int nguyenTo(int a);
int main(){
	int m, n;
	int a[101][101];
	nhap(a, m, n);
	int kq=tongMin(a, m, n);
	printf("%d", kq);
	return 0;
}

void nhap(int a[][101], int &m, int &n){
	scanf("%d%d", &m, &n);
	for(int i=0; i<m; i++)
		for(int j=0; j<n; j++)
			scanf("%d", &a[i][j]);
}
int tongMin(int a[][101], int m, int n){
	int b[150];
	for(int i=0; i<m; i++){
		b[i]=0;
		for(int j=0; j<n; j++)
			if(nguyenTo(a[i][j])==1) b[i]+=a[i][j];
	}
	int min=b[0];
	for(int x=1; x<m; x++){
		if(b[x]<min) min=b[x];
	}
	return min;
}
int nguyenTo(int a){
	if(a==1) return 0;
	for(int i=2; i<a; i++)
		if(a%i==0) return 0;
	return 1;
}