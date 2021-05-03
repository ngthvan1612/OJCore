#include <stdio.h>
bool kt(int a)
{
	int k=0;
	for (int i=1;i<a;i++)
	{
		if (a%i==0)
			k++;
	}
	if (k==1)
		return true;
	else
		return false;

}
int tinh(int m, int n, int a[][100])
{
	int t=0;
	int tong=0;
	for (int k=0;k<n;k++)
		if (kt(a[0][k]))
			tong +=a[0][k];
	for (int i=0;i<m;i++)
	{
		for (int j=0;j<n;j++)
		{
			if (kt(a[i][j]))
				t+=a[i][j];
		}
		if(t<tong)
			tong=t;
		t=0;
	}
	return tong;
}

void main()
{
	int m,n;
	int a[100][100];
	scanf("%d%d",&m,&n);
	for (int i=0;i<m;i++)
	{
		for (int j=0;j<n;j++)
			scanf("%d",&a[i][j]);
	}
	int s=tinh(m,n,a);
	printf("%d",s);
}