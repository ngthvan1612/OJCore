#include<stdio.h>
void nhap(int a[][100], int &m,int &n){
	scanf("%d%d",  &m,&n);
	for(int i=0; i <m; i++){
		for(int j=0; j<n ; j++){
			scanf("%d",&a[i][j]);

		}
	}
}
int laNT( int x){
	int d=0;
	for(int i= 0; i<=x; i++){
			if(x%i==0)
				d++;
		}
	if(d==2)
		return 1;
	return 0;
}
int tinhTong(int a[][100], int m, int n){
	int count =0, kq=0;
	for(int i= 0; i< m; i++){
		for(int j=0; j<m; j++){
			if(laNT(a[i][j])){
				count += a[i][j];
			}
		}
		if(kq<= count){
			kq= count;
		}
		count =0 ;
	}
	return kq;
}
void main()
{
	int a[100][100], m,n;
	nhap(a,m,n); 
	int kq= tinhTong(a,m,n);
	printf("%d",kq);
}