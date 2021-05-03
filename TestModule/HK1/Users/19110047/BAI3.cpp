#include<stdio.h>
int main(){
	int n;
	scanf("%d", &n);
	int x = 0;
	int a[100];
	for(int i=0;i<n;i++){
		scanf("%d", &a[i]);
	}
	for (int i=0;i<n;i++){
		if( a[i]%2 == 0 && a[i+1]%2 == 0 || a[i]%2 == 1 && a[i+1]%2 == 1){
			printf("%d ", i+1);
			break;
		}
	}
	for(int i = 0;i < n;i++){
		if( a[i]%2 == 0 && a[i+1]%2 == 1 || a[i]%2 == 1 && a[i+1]%2 == 0){
			x+=1;
		}
	}
	if(x=n-1){
		printf("-1");
	}
	
	return 0;
}
