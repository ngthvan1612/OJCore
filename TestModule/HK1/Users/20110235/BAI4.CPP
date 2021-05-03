#include<stdio.h>
int tongnguyento(int A[100][100],int m,int n);
void nhap(int A[100][100],int &m,int &n);
void xuat(int kq);
int languyento(int A);
void main()
{
	int A[100][100],m,n;
	nhap(A,m,n);
	int kq=tongnguyento(A,m,n);
	xuat(kq);
}
void nhap(int A[100][100],int &m,int &n)
{
	scanf("%d%d",&m,&n);
	for(int i=0;i<m;i++)
		for(int j=0;j<n;j++)
			scanf("%d",&A[i][j]);
}
void xuat(int kq)
{
	printf("%d",kq);
}
int languyento(int A)
{
	int kq=0;
	if(A<2)
		 kq=0;
	else
	{
		for(int i=2;i<A;i++)
			if(A%i!=0)
				kq=1;
			else
				kq=0;
				
	}
	return kq;
}
int tongnguyento(int A[100][100],int m,int n)
{
	int tongmin=0;
	for(int i=0;i<m;i++)
	{
		for(int j=0;j<n;j++)
		{
          if(languyento(A[i][j]))
			  tongmin=0;
		}
	}
	return 0;
}