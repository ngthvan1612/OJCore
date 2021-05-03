#include<stdio.h>
#define SIZE 100

void nhap(int A[][SIZE],int &m,int &n);
int ngto(int x);
int tinh(int A[][SIZE], int m,int n);

void main()
{
	int A[SIZE][SIZE];
	int m, n;
	nhap(A,m,n);
	int kq = tinh(A,m,n);
	printf("%d",kq);
}
void nhap(int A[][SIZE],int &m,int &n)
{
	scanf("%d%d",&m,&n);
	for(int i=0; i<m; i++)
		for(int j=0; j<n; j++)
			scanf("%d",&A[i][j]);
}


int ngto(int x)
{
	int d = 0;
	for(int i=1;i<=x;i++)
		if(x%i == 0 )
		d++;
			if(d==2)
				return 1;
				return 0;
}

int max(int A[],int n)
	{
	int max = A[0];
		for (int i=1; i<n; i++)
			if( A[i] < max )
				max = A[i];
			return max;
	}

int tinh(int A[][SIZE], int m,int n)
{
	int B[SIZE];

	for(int i=0; i<m;i++)
	{	int tong = 0;
		for(int j=0; j<n; j++)
		{
		
			if(ngto(A[i][j]))
			tong = tong + A[i][j];
		}
		B[i] = tong;

	}
		int kq = max(B,m);
		return kq;

}
