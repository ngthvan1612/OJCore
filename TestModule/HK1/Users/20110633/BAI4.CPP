#include<stdio.h>
void nhap(int &m,int &n,int a[100][100]);
int tinh(int m,int n,int a[100][100]);
void xuat(int kt);
int soNT(int n);

void main()
{
  int m,n,a[100][100];
  nhap(m,n,a);
  int kt=tinh(m,n,a);
  xuat(kt);
}
void nhap(int &m,int &n,int a[100][100])
{
  scanf("%d %d",&m,&n);
  for(int i=0;i<m;i++)
	  for(int j=0;j<n;j++)
		  scanf("%d",&a[i][j]);

}
int tinh(int m,int n,int a[100][100])
{
  int tong;
  int min=10000;
  for(int i=0;i<m;i++)
  {
	  tong=0;
	  for(int j=0;j<n;j++)
		  if(soNT(a[i][j])==1) tong+=a[i][j];
	  if(tong<min) min=tong;
  }
  return min;
}
void xuat(int kt)
{
  printf("%d",kt);
}
int soNT(int n)
{
  int dem=0;
  for(int i=2;i<n;i++)
	  if((n%i)==0) dem++;
  if(dem==0) return 1;
  else return 0;

}