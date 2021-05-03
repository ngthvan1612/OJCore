#include <stdio.h>

void nhap(int A[],int &n);
int tinh(int A[],int n);
void xuat(int x);
int chanle(int x);

void main()
{
	int A[100],n;
	nhap(A,n);
	int kq = tinh(A,n);
	xuat(kq);
}
void nhap(int A[],int &n)
{
	scanf("%d",&n);
	for(int i=0;i<n;i++){
		scanf("%d",&A[i]);
	}
}
int tinh(int A[],int n)
{
	int s=0;
	for(int i = 0;i<n-1;i++){
		if((A[i]+A[i+1])%2==0){
			return i+1;
		}else{
			s=1;
		}
	}
	if(s==1){
		return -1;
	}
}
void xuat(int x)
{
	printf("%d",x);
}
int chanle(int x){
	if(x%2==0){
		return 1;
	}else{
		return 0;
	}
}


