#include<stdio.h>
void nhap(int &n, int A[]);
void xuat (int kq);
int timchanle(int n,int A[]);
void main ()
{
 int n, A[100];
 nhap(n, A);
 int kq=timchanle(n, A);
 xuat(kq);
}
void nhap(int &n, int A[])
{
  scanf("%d",&n);
  for(int i=o;i<n;i++)
	  scanf("%d",&A[i]);
}
void xuat (int kq)
{
  printf("%d",kq);
}
int timchanle(int n,int A[])
{
  while(A[i]>0)
  {
   if(A[n-1]%2==0)
	   return 1
	   else 
	   return 0;
  }
}