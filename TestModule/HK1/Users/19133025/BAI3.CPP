#include<stdio.h>
#include<math.h>
int xuLy(int a[], int n);
int main(){
	int n;
	int A[100];
	scanf("%d",&n);
	for(int i = 0 ; i < n ; i++)
	{
		scanf("%d",&A[i]);
	}
	int kq = xuLy(A,n);
	printf("%d",kq);
	return 0;
}
int xuLy(int a[], int n)
{
	int vitri;
	for(int i = 0 ; i < n ;i++)
	{
		if(((a[i]%2) +(a[i+1]%2))==0)
		{
			vitri= -1;
		}
		else{
			vitri = n +1-i;
		}
	}
	return vitri;
}