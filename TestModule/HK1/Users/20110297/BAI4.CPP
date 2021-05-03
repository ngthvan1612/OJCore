#include <stdio.h>
void nhap(int &m, int &n,int a[][100]);
void xuat(int k);
void TongMin(int m, int n, int a[][100]);
int NguyenTo(int c);
int TimMin(int s[], int w);
void main()
{
	int a[100][100];
	int m,n;
	nhap(m,n,a);
	TongMin(m,n,a);
	//xuat(k);
}
void nhap(int &m, int &n,int a[][100])
{
	scanf("%d%d",&m,&n);
	for (int i=0;i<m;i++)
		for (int j=0;j<n;j++) scanf("%d",&a[i][j]);
}
void xuat(int k)
{
	printf("%d ",k);
}
void TongMin(int m, int n, int a[][100])
{
	int b[100];
	int t=0;
	int kq;
	for (int x=0; x<100;x++) b[x]=0;
	for (int i=0; i<m;i++)
	{
		for (int j=0;j<n;j++) if (NguyenTo(a[i][j])==1) b[t]+=a[i][j];
		t++;
	}
	kq=TimMin(b,t);
	xuat(kq);
}
int NguyenTo(int c)
{
	int dd=0;
	for (int z=1;z<=c;z++) if (c%z==0) dd++;
	if (dd==2) return 1;
	return 0;
}
int TimMin(int s[], int w)
{
	int min;
	min=s[0];
	for (int q=1;q<w;q++) if (s[q]<min) min=s[q];
	return min;
}