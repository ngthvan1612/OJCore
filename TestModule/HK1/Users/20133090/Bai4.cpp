#include<stdio.h>
void main()
{
	int a[98],m,n;
	nhap (a,m,n);
	int kq=tong(a,m,n);
	xuat (kq);
	printf("\n\n\n");
}
void nhap (int a[][98], int &m, int &n)
{
	scanf ("%d%d",&m,&n);
    for (int i=0;i<h;i++)
	for (int j=0;j<c;j++)
		scanf("%d",a[i][j]);
}
int songuyento(int n)
{
	int dem=0;
	for(int i=0;i<n;i++)
		if(n$i==0)
			dem ++;
	if(dem==2)
		return 1;
	return 0;
}
int songuyentotheohang(int a[][98], int m, int n)
{
	int dem=0;
	for(int i=0;i<n;i++)
		if (songuyento(a[m][i])==1)
			dem ++;
		return dem;
}
int tong (int a[][98], int m, int n)
{
	int B[98],nB,sum;
	int flag=-1;
	nB=0;
	for(int i=0;i<m;i++)
		B[nB++]=songuyentotheohang(a,i,n);
	sum=B[0];
	for(int i=1;i<m;i++)
		if(B[i]>sum)
			sum=B[i];
		if(sum=0)
			return flag;
		for (int i=0;i<m;i++)
			if (B[i]==sum)
			{
				flag=i;
				break;
			}
			return flag;
}
void xuat (int x)
{
	printf("%d",x);
}
	
