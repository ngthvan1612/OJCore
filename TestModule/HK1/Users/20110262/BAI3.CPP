#include <stdio.h>
#include <math.h>
#define N 100
void input (int &n, int a[]);
void output(int n, int a[]);

int main ()
{
	int n, a[N];
	input (n, a);
	output (n,a);
	return 0;
}

void input (int &n, int a[])
{
	scanf ("%d", &n);
	for (int i=0; i<n; i++)
		scanf (" %d", &a[i]);
}

void output(int n, int a[])
{
	int t=0;
	for (int i=0; i<(n-1); i++)
		if ((a[i]+a[i+1])%2==0)
		{
			printf ("%d", i+1);
			break;
		}
		else 
		t++;
	
	if (t==(n-1))
		printf ("-1");
}
