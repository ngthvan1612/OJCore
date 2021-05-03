#include<stdio.h>
void nhap ( int A[][100], int &m ,int &n);
 int ketqua ( int A[][100], int m, int n);
 void xuat(int kt);
 void main ()
 {
	 int A[100][100],m,n;
	 nhap (A,m,n);
	 int kt=ketqua(A,m,n);
	 xuat(kt);

 }
 void nhap ( int A[][100], int &m ,int &n)
 {
	 scanf("%d%d", &m,&n);
	 for ( int i=0; i<m; i++)
		 for ( int j=0;j<n; j++)
			 scanf("%d",&A[i][j]);
 }
 int nt ( int n)
 {
	 int dem=0;
	 for ( int i=1; i<=n; i++)
	 {
		 if (n%i==0)
		 {
			 dem++;
		 }
	 }
	 if (dem==2) return 1;
	 else  return 0;
 }
 int ketqua ( int A[][100], int m, int n)
 {
	 int c[100];
	 for ( int i=0; i<m; i++)
	 {
		 int tong=0;
		 for ( int j=0; j<n; j++)
		 {
			 if (A[i][j]==1)
			 {
				 tong = tong+A[i][j];

			 }
			
		 }
		 c[i]=tong;
	 }
	 int min=c[0];
	 for ( int y=0; y<m; y++)
	 {
		 if (c[y]<min)
		 {
			 min=c[y];
		 }
	 }
	 return min;
 }
 void xuat ( int kt)
 {
	 printf ("%d", kt);
 }
