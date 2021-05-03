#include<stdio.h>
#include<conio.h>
int laNT(int x){
	int d=0;
	for(int i= 1; i<= x; i++){
		if (x %i == 0)d++;
		if (d == 2)return 1;
		return 0 ;
	}
}
int main(){
	int a[50][50];
	int m,n,i,j;
	printf("nhap so dong m = \n"); scanf("%d", &m);
	printf("nhap so cot n = \n");scanf("%d", &n);
	printf("nhap mang 2 chieu : \n");
	for (i = 0; i < m; i++){
		scanf("%d", &a[i][j]);
	}
	for (j = 0;j < n;j++){
		scanf("%d", &a[i][j]);
	}
	for(i = 0;i < m ;i ++){
		for(j = 0; j < n ;j++ ){
			printf("%d", a[i][j]);
		}
		printf("\n");
	}
	float s = 0;
	for (i = 0; i< m;i++){
	for(j = 0;j < n ;j++){
		s = s+a[i][j]; 
	}
	}
	return 0;
}
