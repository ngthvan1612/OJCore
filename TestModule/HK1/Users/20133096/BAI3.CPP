#include<stdio.h>
int chanle (int a[], int n);
void main ()
{
	int a[100],n;
		scanf ("%d",&n);
	for (int i=0;i<n; i++)
		scanf ("%d",&a[i]);
	int kq = chanle (a,n);
	printf ("%d ",kq);
}
int chanle (int a[], int n)
{ 
	for (int i=0; i<n ; i++)
	if ((a[i]%2==0 && a[i+1]%2!=0 )||(a[i]%2!=0 && a[i+1]%2==0))
		{
			return -1;
		}
		  return i;

}