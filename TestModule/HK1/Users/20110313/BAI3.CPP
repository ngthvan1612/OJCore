#include<stdio.h>
void nhap(int A[],int &n);
int kiemtra(int A[],int n);
void xuat(int kq);
void nhap(int A[],int &n)
{
	scanf("%d",&n);
	for(int i=0;i<n;i++)
		scanf("%d",&A[i]);
}
int tinhchat(int x)
{
	if(x%2!=0)
		return 1;
	if(x%2==0)
		return 2;
}
int kiemtra(int A[],int n)
{
	int t=0;
	for(int i=0;i<n;i++){
		if((tinhchat(A[i])==1)&&(tinhchat(A[i+2])==1)){
			if(tinhchat(A[i+1])==2)
				return -1;
			else 
				return i;
		}
	}
}
void xuat(int kq)
{
	printf("%d",kq);
}
void main()

{
	int A[100],n;
	nhap(A,n);
	int kq=kiemtra(A,n);
	xuat(kq);
}



