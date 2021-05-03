#include<iostream>

using namespace std;

void NhapMang(int A[][100], int m, int n)
{
	for(int i = 0; i < m; i++)
		for(int j = 0; j < n;j++)
			cin >> A[i][j];
}
int LaNT(int n)
{
	int dem = 0;
	for(int i = 1; i <=n;i++)
	{
		if(n% i== 0)
			dem ++;
	}
	if(dem ==2)
		return 1;
	return 0;
}
int Tinh_ngto_dong(int A[][100], int m,int n)
{
	int min ;
	int i,j;
	int tong = 0;
	for( i = 0;i <= m ;i++)
	{
		for( j = 0; j <=n;j++)
		{
			if(LaNT(A[i][j])==1)
				tong += A[i][j];
		}
		min = tong;
		break;
	}
	for( i = 0;i <= m ;i++)
	{
		tong = 0;
		for(j = 0; j <=n;j++)
		{
			if(LaNT(A[i][j])==1)
				tong += A[i][j];
		}
		if(tong < min)
			min = tong;
	}
	return tong;
}
void main()
{
	int m,n;
	int A[100][100];
	cin >>m>>n;
	NhapMang(A,m,n);
	cout <<Tinh_ngto_dong(A,m,n);
}




