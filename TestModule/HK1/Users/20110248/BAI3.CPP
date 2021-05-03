#include<stdio.h>
int kiemtrachanle(int a[],int n);
void main()
{
	int n;
	int a[200];
	scanf("%d",&n);
	for(int i=0;i<n;i++)
		scanf("%d",&a[i]);
	int kq=kiemtrachanle(a,n);
	printf("%d",kq);
}
int kiemtrachanle(int a[],int n)
{
	int flag;
	if(a[0]%2==0)
		flag=1;
	else
		flag=0;
	for(int i=1;i<n;i++)
		if(flag==1)
			if(a[i]%2!=0)
				flag=0;
			else
				return i;
		else
			if(a[i]%2==0)
				flag=1;
			else
				return i;
	return -1;
}
