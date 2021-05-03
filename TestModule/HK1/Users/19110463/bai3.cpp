#include<stdio.h>
#include<math.h>
int tinh(int a[100],int n);
void main()
{
	int a[100];
	int n;
	scanf("%d",&n);
	for(int i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	int kq=tinh(a,n);
	printf("%d",kq);
}
int tinh(int a[100],int n)
{
	int flag1=0;
	int flag2=0;
	if(a[0]%2==0)
	{
	     for(int i=0;i<n;i=i+2)
		 {
		      if(a[i]%2!=0)
			  {
			        flag1=i;
			         break;

			  }
		 }
	     for(int j=1;j<n;j=j+2)
		 {
		      if(a[j]%2==0)
			  {
		        	flag2=j;
		        	break;

			  }
		 }
	}
	if(a[0]%2!=0)
	{
		for(int i=0;i<n;i=i+2)
		{
	     	if(a[i]%2==0)
			{
		     	flag1=i;
		     	break;

			}
		}
     	for(int j=1;j<n;j=j+2)
		{
	     	if(a[j]%2!=0)
			{
		    	flag2=j;
		    	break;

			}
		}
	}
	if(flag1==0 && flag2==0)
		return -1;
	else if(flag1>flag2)
		return flag2;
	else if(flag1<flag2)
		return flag1;
	return-1;
}