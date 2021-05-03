#include<stdio.h>
void nhap(int a[][100],int &m,int &n){
	scanf("%d%d",&m,&n);
    for(int i=0;i<m;i++){
		for(int j=0;j<n;j++){
			scanf("%d",&a[i][j]);
		}
	}
}
int NT(int x){
	if(x<2) return 0;
	for(int i=2;i<x;i++){
		if(x%2==0)
			return 0;
	}
	return 1;
}
int tong(int a[][100],int m, int n){
	int t=0;
	int b[100];
	int nB=0;
	for(int i=0;i<m;i++){
		for(int j=0;j<n;j++){
			if(NT(a[i][j]==1)){
				t=t+a[i][j];
			}
		}
			b[nB++]=t;
	}
	int min=b[0];
	for(int g=1;g<nB;g++){
		if(b[g]<min)
			min=b[g];
	}
		return min;
}
int main()
{
	int a[100][100];
	int m,n;
	nhap(a,m,n);
	printf("%d",tong(a,m,n));
	return 0;
}


