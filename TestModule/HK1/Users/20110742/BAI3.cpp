#include<stdio.h>
int tinhtoan(int n,int arr[]);

int chanle(int n){
	int du=0;
	du=n % 10;
	if(du % 2 == 0){
		return 0;
	}
	if(du % 2 == 1){
		return 1;
	}
	return 3;
}
void main(){
	int n;
	scanf("%d",&n);
	int arr[100];
	for(int i=0;i<n;i++){
		scanf("%d",&arr[i]);
	}
	tinhtoan(n,arr);
}
int tinhtoan(int n,int arr[]){
	int dem=0;
	for(int i=0;i<n;i++){
		if(arr[i]==0){
			printf("%d",i+1);
			return 1;
		}
		if(chanle(arr[i])==1 && chanle(arr[i+1])==0 || chanle(arr[i])==0 && chanle(arr[i+1])==1){
			dem++;
		}
		
		if(chanle(arr[i])==0 && chanle(arr[i+1])==0 || chanle(arr[i])==1 && chanle(arr[i+1])==1){
			printf("%d",i+1);
			return 1;
		}
		
	}
	if(dem!=0){
		printf("-1");
	}
	return 1;
}

