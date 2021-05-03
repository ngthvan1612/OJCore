#include<stdio.h>
void nhap(int a[],int n);
void le(int a[],int n);
void chan(int a[],int n);

void main(){
int n;
scanf("%d",&n);
int a[100];
nhap(a,n);
print("-1");


}
void nhap(int a[100],int n){
      for(int i=0;i<n;i++)
		  scanf("%d",&a[i]);
}
void le(int a[],int n){
for(int i=0;i<n;i++)
    if(a[i]%2==1)
	
}
void chan(int a[],int n){
for (int i=0;i<n;i++)
     if(a[i]%2==0)
}		 
