#include<stdio.h>
#include<math.h>
void input(int A[][100],int &m,int &n)
{
	scanf("%d%d",&m,&n);
	for(int i=0;i<m;i++)
	{
		for(int j=0;j<n;j++)
		{
			scanf("%d",&A[i][j]);
		}
	}
}
bool ktsoNgto(int x)
{
	if(x<2)
		return false;
	for(int i=2;i<=sqrt(x);i++)
	{
		if(x%i==0)
		{
			return false;
		}
	}
	return true;

}

int tinh(int A[][100],int m,int n)
{
	int min=0;
	int tong;
	{
	for(int i=0;i<m;i++)
	{
		tong=0;
		for(int j=0;j<n;j++)
		
			if(ktsoNgto(A[0][j]))
			
				min+=A[0][j];
	}
			
	{
		for( i=1;i<n;i++)
		{
			for(int j=0;j<n;j++)

		
			if(ktsoNgto(A[i][j]))
			
				tong+=A[i][j];
			
			if(tong<=min)
			
				min=tong;
		}
	}
			
		
	
	return min;
}


void main()
{
	int m,n;
	int A[100][100];
	input(A,m,n);
	int kq1=tinh(A,m,n);
	printf("%d",kq1);
	
}