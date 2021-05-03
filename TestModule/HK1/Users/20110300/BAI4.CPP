#include<stdio.h>
int TinhTongNTNho(int A[][100], int m,int n,int B[]);

int main()
{
	int A[100][100],m,n,B[100];
	scanf ("%d%d",&m,&n);
	for (int i=0;i<m;i++)
		for (int j=0;j<n;j++)
			scanf ("%d",&A[i][j]);
	int kq=TinhTongNTNho(A,m,n,B);
	printf ("%d",kq);
	return 0;
}
int KiemTra(int a)
{
	int dem=0;
	for (int i=1;i<=a;i++)
		if (a%i==0)
			dem++;
	if (dem==2)
		return a;
	return 0;
}
int TinhTongNTNho(int A[][100], int m,int n,int B[])
{
	int k=0,s,min;
	for (int i=0;i<m;i++)
	{
		s=0;
		for (int j=0;j<n;j++)
		{
			if(KiemTra(A[i][j]))
				s=s+KiemTra(A[i][j]);
		}
			B[k]=s;
			k++;
	}
	min=B[0];
	for (int l=1;l<k;l++)
		if (B[l]<min)
		{
			min=B[l];
		}
		return min;

}
