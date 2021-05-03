#include<stdio.h>
#include<conio.h>

void nhap(int a[],int &n){
scanf("%d",&n);
for(int i=0;i<n;i++){
 scanf("%d",&a[i]);
}
}

int kiemtra(int x){
	if(x%2 == 0){

	return 1;

	}

	return 2;
}

int xuat(int a[],int n){
      int t =0;
     for(int i=0;i<n-1;i++){
  	   if(kiemtra(a[i]) != kiemtra(a[i+1])){
		  t = t+1;
	   }
	   else if(kiemtra(a[i]) == kiemtra(a[i+1]) && (i <n)){
  
	     return i+1;
	   
	   }
	}

	 if(t==(n-1)) return -1;

  
}


void main(){
	int a[100],n;
	nhap(a,n);
	printf("%d",xuat(a,n));



}