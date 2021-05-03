#include <stdio.h>

bool check(int x,int y)
{
	if((x+y)%2==0)
		return false;
	return true;
}

int ktra(int n,int a[])
{
	int kq=-1;
	for(int i=0;i<n;i++)
	{
		if(check(a[i],a[i+1])==false)
		{
			kq=i+1;
			break;
		}
	}
	printf("%d",kq);
	return 0;
}

int main()
{
	int n,i,a[111];
	scanf("%d",&n);
	for(i=0;i<n;i++)
		scanf("%d",&a[i]);
	ktra(n,a);
	return 0;
}