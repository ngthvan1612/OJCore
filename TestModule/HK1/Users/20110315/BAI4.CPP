#include<stdio.h>
int timmin(int b[],int nb);
void tongtungdong(int a[100][100],int m,int n,int b[],int &nb);
int nguyento(int x);
int nguyento(int x)
{
	int s=0;
	for(int i=1;i<=x;i++)
		if(x%i==0)
			s++;
		if(s==2)
			return 1;
		return 0;
}
void tongtungdong(int a[100][100],int m,int n,int b[],int &nb)
{
	nb=0;
	for(int i=0;i<m;i++)
	{
			int d=0;
			for(int j=0;j<n;j++)
				if(nguyento(a[i][j]))
					d+=a[i][j];
			b[nb++]=d;
	}
}
int timmin(int b[],int nb)
{
	int min=b[0];
	for(int i=0;i<nb;i++)
		if(b[i]<min)
			min=b[i];
	return min;
}
void main()
{
	int a[100][100],m,n,b[100],nb;
	scanf("%d%d",&m,&n);
	for(int i=0;i<m;i++)
		for(int j=0;j<n;j++)
			scanf("%d",&a[i][j]);
	tongtungdong(a,m,n,b,nb);
	int kq=timmin(b,nb);
	printf("%d",kq);
	
}
		



