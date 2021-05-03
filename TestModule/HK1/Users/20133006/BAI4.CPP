#include<stdio.h>
#define sz 100

int lant(int n);

void main()
{
	int m,n,a[sz][sz];
	int b[sz];
	int r=0;
	int s=0;
	scanf("%d%d" &m, &n);
	for(int i=0;i<m;i++)
		for(int j=0;j<n;j++)
			scanf("%d", &a[i][j]);

	for(int i=0;i<m; i++){
		s=0;
		for(int j=0;j<n;j++){
			if(lant(a[i][j]))
			{
				s+=a[i][j];
			}
		}
		b[r++] = s;
	}
	int min = b[0];
	for(int k=1; k<r;k++)
		if(min>b[k])
			min=b[k];
	printf("%d", min);
		
}

int lant(int n)
{
	int dem = 0;
	for(int i=1; i<=n; i++)
		if(n%i==0)
			dem ++;

	if(dem==2)
		return 1;
	return 0;

}
 