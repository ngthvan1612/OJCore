#include <stdio.h>
void nhap(int A[100][100], int &m, int &n);
int checkSNT(int a);
int checkmin (int A[100][100], int m , int n);
void main()
{
	int A[100][100],m,n;
	nhap(A,m,n);
	int kq= checkmin(A,m,n);
	printf ("%d",kq);

}
void nhap(int A[100][100], int &m, int &n)
{	
	scanf("%d%d",&m, &n);
	for (int i=0;i<m;i++)
		for ( int j =0;j<n;j++)
			scanf("%d",&A[i][j]);
	

}
int checkSNT(int a)
{
	int dem =0;
	for ( int f=1;f<=a;f++){
		if (a%f==0) dem++;
	}
	if(dem==2) return 1;
	else return 0;
}
int checkmin (int A[100][100], int m , int n)
{ int min =50000;
	for (int i=0;i<m;i++){
		int tongdong=0;
		for ( int j =0;j<n;j++)
		{
			if(checkSNT(A[i][j])==1){
				tongdong= tongdong+ A[i][j];
			}
		}
		if(min >tongdong) min = tongdong;
	}
	return min;
}

