#include<stdio.h>
void Nhap(int &n, int a[])
{
	scanf("%d",&n);
	for(int i = 0; i < n; i++)
		scanf("%d",&a[i]);
}
int Kiemtra(int a)
{
	if(a % 2 == 0) return 1;
	else return 0;
}
int Xuly(int n, int a[])
{
	for(int i = 0; i < n - 1; i++)
	{
		if(Kiemtra(a[i]) && Kiemtra(a[i + 1]) || !Kiemtra(a[i]) && !Kiemtra(a[i + 1]))
		{
			return i + 1;
			break;
		}
	}
	return -1;
}
void main()
{
	int n, a[1000];
	Nhap(n,a);
	printf("%d", Xuly(n, a));
}