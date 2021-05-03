# include <stdio.h>
void nhap(int a[][100], int &m, int &n);
int minNT( int a[][100],int m, int n);
void xuat ( int kq);

void main ()
{
	int a[100][100],m,n;
	nhap(a,m,n);
	int kq = minNT(a,m,n);
	xuat(kq);
}

void nhap(int a[][100], int &m, int &n)
{
	scanf("%d%d",&m,&n);
	for ( int i=0; i <m; i++)
	{
		for ( int j =0; i <n; j++)
			scanf("%d",&a[i][j]);
	}
}

int laNT( int x)
{
	int dem =0;
	for ( int i=1; i<= x; i++)
	{
		if ( x%i==0)
			dem++;
	}
	if ( dem ==0)
		return 1;
	else
		return -1;
		
}
int mindau( int a[][100],int m, int n)
{
	int dem=0;
	int tong =0;
	for (int j =0; j<n; j++)
	{
		if (laNT(a[0][j])==1)
		{
			dem++;
			tong+=a[0][j];

		}
	}
		if (dem==0)
			return 0;
		else
			return tong;
	
}

int minNT( int a[][100],int m,int n)
{
	int min =mindau(a,m,n);
	for ( int i=1; i<m; i++)
	{
		int sum=0;
		for ( int j=0; j<n;j++)
		{
		if (laNT(a[i][j])==1)
			sum+=a[i][j];
		}
		if (sum<min)
			min=sum;
	}
	return min;
}
void xuat ( int kq)
{
	printf("%d",kq);
}