#include <stdio.h>
int ktchan(int arr[], int n);
int ktchan(int arr[], int n)
{
	for (int i=0; i<n-1;i++)
		if ((arr[i] + arr[i+1])%2==0) return i+1;
	return -1;
}
int main ()
{
	int arr[150];
	int n;
	scanf("%d",&n);
	for (int i=0; i<n;i++)
		scanf("%d",&arr[i]);
	
    if (ktchan(arr,n)==-1) printf("-1");
		else printf("%d",ktchan(arr,n));
	return 0;
}