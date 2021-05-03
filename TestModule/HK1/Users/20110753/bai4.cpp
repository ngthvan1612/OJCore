#include< stdio.h>
bool check(int n)
{
	if (n < 2) return false;
	int i;
	int dem = 0;
	for (i = 1; i < n; i ++)
	{
		 if (n % i == 0) dem = dem + 1;
	}
	if (dem == 1) return true;
	else return false;
}

int main()
{
	int i,j,m,n,arr[100][100];
	scanf ("%d%d", &m, &n);
	for (i =0;i < m; i++){
		for (j = 0;j < n; j ++){
			scanf ("%d", &arr[i][j]);
		}
	}
	int s =0;
	for (i =0;i < m; i++){
		int t = 0;
		for (j = 0;j < n; j ++){
			if( check(arr[i][j]) == true) t = t + arr[i][j];
		}
		s = t;
	}
	printf ("%d", s);
	return 0;
}



	 
