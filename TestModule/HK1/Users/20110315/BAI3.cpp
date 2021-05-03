#include<stdio.h>
int ktchan(int x);
int ktchan(int x)
{
	if(x%2==0)
		return 1;
	return 0;
}
void main()
{
	int a[100],n;
	scanf("%d",&n);
	for(int i=0;i<n;i++)
		scanf("%d",&a[i]);
	int d=0;
	for(i=1;i<n;i++)
		if((ktchan(a[i-1])==1&&ktchan(a[i])==1)||(ktchan(a[i-1])!=1&&ktchan(a[i])!=1))
		{
			d=i;
			break;
		}
	if(d==0)
		printf("-1");
	else
		printf("%d",d);
}


