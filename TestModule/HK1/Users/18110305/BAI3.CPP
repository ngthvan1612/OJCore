#include<stdio.h>

int main(){
	int n ;
	int s = -1;
	int a[100];
	scanf("%d",&n);
	for(int i = 0;i < n;i++){
	scanf("%d",&a[i]);
	}
	/*
	int j = 0;
	int l =0;
	while(l<10){
	if(j%2 == 0){
	if(a[j]%2 ==0)j++;
	else if(a[j]%2 !=0) { s = a[j];}
	
	}
	if(j%2 != 0){
	if(a[j]%2 !=0)j++;
	if(a[j]%2 ==0){
		s = a[j];
	}
	l++;
	}
	}
	*/

	////
	printf("%d",s);
	return 0;

}