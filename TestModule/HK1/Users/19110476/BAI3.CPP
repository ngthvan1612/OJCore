#include <stdio.h>
void nhap(int A[],int &n);
int kiemtra(int A[],int n);

void main()
{
	int A[100],n;
	nhap(A,n);
	int kq=kiemtra(A,n);
	printf("%d",kq);
}

void nhap(int A[],int &n)
{
	scanf("%d",&n);
	for(int i=0;i<n;++i)
		scanf("%d",&A[i]);
}

int sochan(int x)
{
	if(x%2==0)
		return 1;
	return 2;
}

int kiemtra(int A[],int n)
{
	int d=0;
	for(int i=-1;i<n-1;++i)
		if(sochan(A[i+1])==1)
			d++;
	int t=0;
	for(int j=0;j<n;++j)
		if(sochan(A[j+1])==2)
			t++;
	int z=0;
	for(int f=-1;f<n-1;++f)
		if(sochan(A[f+1])==1)
			z++;
	int g=0;
	for(int k=0;k<n;++k)
		if(sochan(A[k+1])==2)
			g++;


	if(t==n/2 && d==n/2 ||z==n/2 && g==n/2)
		return -1;
		return 0;
}
