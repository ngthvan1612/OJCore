#include<stdio.h>
void nhap(int a[],int &n)
{
	scanf("%d",&n);
	for(int i=0;i<n;i++)
		scanf("%d",&a[i]);
}
int so(int a)
{
	if(a%2==0) return 1;
	return 0;
}
int kq(int a[],int n)
{
	for(int i=0;i<n-1;i++)
	{
		if(so(a[i])==so(a[i+1])) return i+1;
	}
	return -1;
}
int main()
{
	int a[101],n;
	nhap(a,n);
	int ans=kq(a,n);
	printf("%d",ans);
	return 0;
}
