#include<stdio.h>
#include<conio.h>
void kiemtra(int a[],int n,int b[]);
int main()
{
	int a[1000];
	int n;
	int b[100];
	scanf("%d",&n);
	for(int i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	kiemtra(a,n,b);
}
void kiemtra(int a[],int n,int b[])
{
	for(int i=0;i<n-1;i++)
	{
        int vt=0;
		int t=0;
		while(a[i]%2==0&&a[i+1]%2==0||a[i]%2==1&&a[i+1]%2==1)
		{
			vt=i+1;
			break;
		}
       b[i]=vt;
       if(b[i]!=0)
      {
	      printf("%d",b[i]);
      }

}
}
