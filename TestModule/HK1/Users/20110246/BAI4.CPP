#include<stdio.h>
int laNT(int n);
int tong(int a[][1000],int m,int n);
void nhap(int a[][1000],int &m,int &n);
void main()
{
	int a[1000][1000],m,n;
	nhap(a,m,n);
	int kq=tong(a,m,n);
	printf("%d",kq);

}
void nhap(int a[][1000],int &m,int &n)
{
	scanf("%d%d",&m,&n);
	for(int i=0;i<m;++i)
		for(int j=0;j<n;++j)
			scanf("%d",&a[i][j]);
}
int laNT(int n)
{
	int dem=0;
	for(int i=1;i<=n;++i)
		if(n%i==0)
			dem++;
		if(dem==2)
			return 1;
}
int tong(int a[][1000],int m,int n)
{
	int dem=0;
	int demmax=0;
	int vitri=0;
	for(int i=0;i<m;++i)
	{
		dem=0;
		for(int j=0;j<n;++j)
			if(laNT(a[i][j]))
				dem=dem+a[i][j];
			if(demmax>dem)
			{
				dem=demmax;
			}
	}
	return demmax;
}
