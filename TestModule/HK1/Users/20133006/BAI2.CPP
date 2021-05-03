#include<stdio.h>

int a[1000];

void main() {	
	int n;
	int dem=0;
//nhap
	scanf("%d", &n);
	for(int i=0; i<n; i++)
		scanf("%d", &a[i]);
//xu li
/*	if(a[0]%2==0){
		printf("a0 = %d", a[0]);
	
		for(int j=0; j<n-1; j+2) 
		{
			if(a[j]%2==0 && a[j+1]%2!=0)
				dem++;
			if(a[j]%2==0 && a[j+1]%2==0)
			{
				printf("%d", j+1);
				break;
			}
		}
	}
		if(dem==n/2)
		{
			printf("-1");
		}
		dem = 0;


/*	if(a[0]%2!=0)
	{
		for(int 
			j=0; j<n-1; j+2) 
		{
			if(a[j]%2!=0 && a[j+1]%2==0)
				dem++;
			else if(a[j]%2!=0 && a[j+1]%2!=0)
			{
				printf("%d", j+1);
				break;
			}
		}
		if(dem==n/2)
		{
			printf("-1");
		}
	}*/

	printf("-1");
}