#include<stdio.h>
#define size 100
void nhap(int &m, int &n, int A[size][size]);
int tinhtong_nguyento(int m, int n, int A[size][size]);
int nguyento(int a);
void xuat(int kq);
void main()
{
	int m,n,A[size][size];
	nhap(m,n,A);
	int kq=tinhtong_nguyento(m,n,A);
	xuat(kq);
}
void nhap(int &m, int &n, int A[size][size])
{
	scanf("%d%d",&m,&n);
	for(int i=0;i<m;i++)
		for(int j=0;j<n;j++)
			scanf("%d",&A[i][j]);
}
int tinhtong_nguyento(int m, int n, int A[size][size])
{
	int min=100001;
	for(int i=0;i<m;i++)
	{
		int sum=0;
		for(int j=0;j<n;j++)
			if(nguyento(A[i][j])==1)
				sum=sum+A[i][j];
		if(sum<min)
			min=sum;
	}
	return min;
}
int nguyento(int a)
{
	int uoc=0;
	for(int i=1;i<=a;i++)
		if(a%i==0)
			uoc=uoc+1;
	if(uoc==2)
		return 1;
	else
		return 0;
}
void xuat(int kq)
{
	printf("%d",kq);
}
