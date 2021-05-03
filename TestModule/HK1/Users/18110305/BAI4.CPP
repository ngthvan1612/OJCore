#include<stdio.h>
int NT(int a){

	int dem = 0;
	if(a<1) return 0;
	for(int i=1;i<=a;i++)
		if(a%i==0)dem++;
	if(dem==2)return 1;
	return 0;
}
int main(){
	int m,n;
	int a[100][100];
	scanf("%d%d",&m,&n);
	for(int i=0;i<m;i++){
		for(int j = 0;j<n;j++){
			scanf("%d",&a[i][j]);
		}
	}


	int s = 0;
	int min = 100;

	for(int k=0;k<m;k++){
		s=0;
	for(int l = 0;l<n;l++){
		if(NT(a[k][l]) == 1) s+= a[k][l]; 
		}
	if(s<min) min = s;
	}
	//
	/*
	for(int k=0;k<m;k++){
	for(int l = 0;l<n;l++){
			printf("%d ",a[k][l]);
		}
		printf("\n");
	}
	*/
	printf("%d",min);


		return 0;
}