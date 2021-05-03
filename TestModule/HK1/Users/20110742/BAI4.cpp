#include<stdio.h>
#include<math.h>
void tinhtoan(int m,int n,int arr[][100]);

int nto(int n){
	if(n== 0 || n ==1){
		return 0;
	}
	for(int i=2;i<=sqrt(n);i++){
		if(n % i == 0){
			return 0;
		}
	}
	return 1;
}
void main(){
	int m,n;
	scanf("%d%d",&m,&n);
	int arr[100][100];
	for(int i=0;i<m;i++){
		for(int j=0;j<n;j++){
			scanf("%d",&arr[i][j]);
		}
	}
	tinhtoan(m,n,arr);

}
void tinhtoan(int m,int n,int arr[][100]){
	int min=10000;
	int tong=0;
	for(int i=0;i<m;i++){
		for(int j=0;j<n;j++){
			if(nto(arr[i][j])){
				tong+=arr[i][j];
			}
		}
		if(tong<=min){
			min=tong;
		}
		tong=0;
	}

	printf("%d",min);
}


