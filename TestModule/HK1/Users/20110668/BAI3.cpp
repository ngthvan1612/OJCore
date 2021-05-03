#include<stdio.h>
int xuli(int A[], int n);
void main()
{
	int A[100], n;
	scanf("%d", &n);
	int i;
	for( i = 0; i < n; i ++)
		scanf("%d", &A[i]);
	int kq = xuli(A, n);
	printf("%d", kq);
}
int xuli(int A[], int n)
{
	int dem = 0;
	int j;
	for( j = 0; j < n; j ++) {
		if(A[j] % 2 == 0 && A[j+1] % 2 == 1)
			dem = dem + 1;
	}

	if(dem == (n - 1))
		return -1;
	else {
		int x;
		for( x = 0; x < n; x ++)
			if((A[x] + A[x+1]) % 2 == 0)
				return x+1;
	}	
}
