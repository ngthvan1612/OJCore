#include<stdio.h>
#define Size 100
void nhap(int A[][Size], int &m, int &n);
int xuly(int A[][Size], int m, int n);
void xuat(int kq);
void main()
{
  int A[Size][Size];
  int m,n;
  nhap(A,m,n);
  int kq = xuly(A, m,n);
  xuat(kq);

}
void nhap(int A[][Size], int &m, int &n)
{
  scanf("%d%d", &m, &n);
  for(int i=0; i<m; i++)
	   for(int j=0; j<n; j++)
		   scanf("%d", &A[i][j]);
}
int xuly(int A[][Size], int m, int n)
{
  int s=0;
int  max=0;
  int tongdong[Size];
  for(int i=0; i<m; i++)
	  s = s+A[i][j];
  return s;
}
void xuat(int kq)
{
  printf("%d", kq);
}
