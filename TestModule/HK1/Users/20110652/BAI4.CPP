#include<stdio.h>
void nhap(int &m, int &n, int A[][100]);
int laNT(int m);
int tong (int m, int n, int A[][100]);
void xuat(int kq);
void main()
{
  int m, n;
  int A[100][100];
  nhap(m, n, A);
  int kq=tong (m, n, A);
  xuat(kq);
}
void nhap(int &m, int &n, int A[][100])
{
  scanf("%d%d", &m, &n);
  for(int i=0;i<m;i++)
	  for(int j=0;i<n;i++)
		  scanf("%d",&A[i][j]);
}
int laNT(int m)
{
  int dem=0;
  for(int i=1;i<=n;i++)
  {
    if(m%i==0)
		dem++;
  }
  if(dem==2)
	  return 1;
	  return 0;
}
int tong (int m, int n, int A[][100])
{
  int tong=0;
  for(int i=0;i<=m;i++)
  {
	  if(laNT(A[i][j]==1))
		tong=tong+A[i];
	return tong;
  }
}
void xuat(int kq)
{
	printf("%d",kq);
}
