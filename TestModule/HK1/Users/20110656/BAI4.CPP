#include<stdio.h>
void nhap(int A[][100], int &m, int &n);
void xuat(int A[][100], int m, int n, int B[][0]);
int main(){
	int A[100][100];
	int B[100][0];
	int m, n;
	nhap(A, m, n);
	int laNT=Test(A, m, n, B);
	xuat(A, m, n, B);
	return 0;
}
void nhap(int A[][100], int &m, int &n){
	scanf("%d %d", &m, &n);
	for(int i=0; i<m; i++){
		for(int j=0; j<n; j++){
			scanf("%d%d", &A[i][j]);
		}
	}
}
void xuat(int A[][100], int m, int n, int B[][0]){
	int x=0;
	for(int i=0; i<m; i++){
		int Dem=0, S=0;
		for(int j=0; j<n; j++{
			for(int k=1; k<=A[i][j]; k++){
				if(A[i][j]%k==0{
					Dem++;
				}
				if(Dem++==2){
					S=S+A[i][j];
				}
			}
		}
		S=B[i][0];
	}
	int min=B[0][0];
	for(int i=0; i+1<m; i++){
		if(B[i][0]>B[i+1][0]{
			min=B[i+1][0];
		}
	}
	printf("%d", min);
}
