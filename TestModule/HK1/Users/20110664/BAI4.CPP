#include <stdio.h>
int ngto(int n);
void tong(int a[][100],int m,int n,int sum[]);
int timmin(int sum[],int m);
void main()
{
	int a[100][100],m,n,sum[100];
	scanf("%d%d",&m,&n);
	for (int i=0;i<m;i++)
		for (int j=0;j<n;j++)
			scanf("%d",&a[i][j]);
	tong(a,m,n,sum);
	int kq=timmin(sum,m);
	printf("%d",kq);


}

int ngto(int n)
{
	if (n<2)
		return 0;
	else
	{
		int i=2;
		while (n%i!=0)
			i++;
		if (i==n)
			return 1;
		else
			return 0;
	}
}

void tong(int a[][100],int m,int n,int sum[])
{
	int s=0;
	for (int i=0;i<m;i++)
	{
		for (int j=0;j<n;j++)
		{
			if (ngto(a[i][j])==1)
				s=s+a[i][j];
		}
		sum[i]=s;
		s=0;
	}
}

int timmin(int sum[],int m)
{
	int min=sum[0];
	for (int i=1;i<m;i++)
		if (sum[i]<min)
			min=sum[i];
	return min;
}