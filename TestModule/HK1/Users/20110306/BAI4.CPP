#include<iostream>
using namespace std;
void nhap(int A[][100],int &m,int &n);
int tinhToan(int A[][100],int m,int n);
int laSoNguyenTo(int n);
void xuat(int kq);
int main()
{
	int A[100][100],m,n;
	nhap(A,m,n);
	int kq=tinhToan(A,m,n);
	xuat(kq);
	return 0;
}
void nhap(int A[][100],int &m,int &n)
{
	cin>>m>>n;
	for(int i=0;i<m;i++)
		for(int j=0;j<n;j++)
			cin>>A[i][j];
}
int tinhToan(int A[][100],int m,int n)
{
	int B[100],dem=0;
	for(int i=0;i<m;i++)
	{
		int tong=0;
		for(int j=0;j<n;j++)
			if(laSoNguyenTo(A[i][j])==1)
				tong+=A[i][j];
		B[i]=tong;
		dem++;
	}
	int min=B[0];
	for(int k=0;k<dem;k++)
		if(B[k]<min)
			min=B[k];
	return min;
}
int laSoNguyenTo(int n)
{
	int dem=0;
	for(int i=1;i<=n;i++)
		if(n%i==0)
			dem++;
	if(dem==2)
		return 1;
	return 0;
}
void xuat(int kq)
{
	cout<<""<<kq;
}