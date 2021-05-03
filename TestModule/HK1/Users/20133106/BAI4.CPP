#include<stdio.h>
#define SIZE 100
void nhap(int a[][SIZE],int &m,int &n);
int nhonhat(int a[][SIZE],int m,int n);
int laNT(int x);
void xuat(int kq);
void main()
{
	int a[SIZE][SIZE];
	int m,n;
	nhap(a,m,n);
	int kq=nhonhat(a,m,n);
	xuat(kq);
}
void nhap(int a[][SIZE],int &m,int &n)
{
	scanf("%d%d",&m,&n);
	for(int i=0;i<m;i++)
	   for(int j=0;j<n;j++)
	       scanf("%d",&a[i][j]);
}
int nhonhat(int a[][SIZE],int m,int n)
{
	int b[100];
	int nB=0;
	for(int i=0;i<m;i++)
	{
		int s=0;
	   for(int j=0;j<n;j++)
	      if(laNT(a[i][j])==1)
	         s=s+a[i][j];
	    b[nB++]=s;
   }
   int min=b[0];
   for(int j=0;j<nB;j++)
      if(b[j]<min)
         min=b[j];
    return min;
	
}
int laNT(int x)
{
	int d=0;
	for(int i=1;i<=x;i++)
	   if(x%i==0)
	     d++;
	if(d==2)
	  return 1;
	  return 0;
}
void xuat(int kq)
{
	printf("%d",kq);
}