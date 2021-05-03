#include <stdio.h>
#define N 100
int chanle(int a[], int n);
void nhapmang(int a[], int n);
int main()
{
	int n, a[N];
	scanf("%d", &n);
	nhapmang(a,n);
	int kq=chanle(a,n);
	printf("%d", kq);
	
	
}
void nhapmang(int a[], int n)
{
	for (int i=0;i<n;i++)
	    scanf("%d", &a[i]);
}
int chanle(int a[], int n)
{
	int kq=-1;
	for (int i=0;i<n;i++){
	
	    if(a[i]%2==0 && a[i+1]%2==0)
	           kq=i;
	           break;
	    if (a[i]%2!=0 && a[i+1]%2!=0)
	        kq=i;
	        break;
	    }
   return kq;
}
