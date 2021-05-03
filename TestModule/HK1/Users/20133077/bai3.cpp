#include<stdio.h>

int chanle(a[],n)
{
	for(int i =0;i<n;i++)
		if(a[i%2==0]==0 && a[i%2!=0]!=0 || a[i%2!=0]==0 && a[i%2==0]!=0)
			return -1;
		return 0;
}

void main()
{
	int a[100],n;
	scanf("%d",n);
	for(int i=0; i<n;i++)
		scanf("%d",&a[i]);
	chanle(a,n);
	printf("%d",kq);
}