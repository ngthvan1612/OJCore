#include<stdio.h>

int CHECK(int n, int A[]);
void hya(int kq);
void gimme(int &n, int A[]);


void main()
{
	int n;
	int A[100];
	gimme(n,A);
	int kq = CHECK(n,A);
	hya(kq);
}
void gimme(int &n, int A[])
{
	int j;
	scanf("%d",&n);
	for( j = 0; j < n; j++ )
		scanf("%d",&A[j]);
}
void hya(int kq)
{
	int a = -1 ;
	if(kq == 1 ) printf("%d",a);
	if(kq != 1 ) printf("%d",kq);
}
int CHECK(int n, int A[])
{
	int m = n - 1;
	for(int i = 0; i < m; i = i + 1)
	{
		if((A[i]%2==0 && A[i+1]%2 == 0) || (A[i+1]%2 == 1 && A[i]%2 == 1)) 
			return (i+1);
	}
	return 1;
}