#include<stdio.h>
void nhap(int &m, int&n, int A[][98]);
void tong( int m, int n, int A[][98]);
int ngto(int t);

void main()
{
	int m,n,A[98][98];
	nhap(m,n,A);
	tong(m,n,A);
}
void nhap(int &m, int&n, int A[][98])
{
	scanf("%d%d",&m,&n);
	for(int i=0;i<m;i++)for(int j=0;j<n;j++) scanf("%d",&A[i][j]);
}
void tong( int m, int n, int A[][98])
{
	int s[98];
	for(int l=0;l<98;l++) s[l]=0;
	for(int i=0;i<m;i++)
	{
		for(int j=0;j<n;j++)
		{
			if(ngto(A[i][j])==1) s[i]=s[i]+A[i][j];
		}
	}
	int nho=s[0];
	for( int k=0;k<m;k++)
	{
		if(s[k]<nho) nho=s[k];
	}
	printf("%d",nho);
}
int ngto(int t)
{
	int d=0;
	for(int i=1;i<=t;i++)
	{
		if(t%i==0) d++;
	}
	if(d==2) return 1;
	else return 0;
}
