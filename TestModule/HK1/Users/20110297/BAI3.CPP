# include <stdio.h>
void nhap(int &n, int a[]);
void xuat(int kq);
int KiemTra(int n, int a[]);

void main()
{
	int n,a[100];
	nhap(n,a);
	int k=KiemTra(n,a);
	xuat(k);
}
void nhap(int &n,int a[])
{
	scanf("%d",&n);
	for (int i=0;i<n;i++) scanf("%d",&a[i]);
}
void xuat(int k)
{
	printf("%d",k);
}
int KiemTra(int n, int a[])
{
	int d=0;
	if (a[0]%2==1)
	{
		for (int j=0;j<n/2;j++) if ((a[2*j]%2)!=1) d++;
	}
	else 
	{
		for (int t=0;t<n/2;t++) if ((a[2*t]%2)==1) d++;
	}
	if (d==int(n/2)) return -1;
	else return 0;
}