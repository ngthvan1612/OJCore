#include<stdio.h>  
  
void nhapmang(int a[][100], int m, int n); 
int tongmin(int a[][100], int m, int n);
int main()
{
	int m,n,a[100][100];
	scanf("%d%d",&m,&n);
	nhapmang(a,m,n);

	printf("0"); return 0;
	}
  void nhapmang(int a[][100], int m, int n)
   {
	   for (int i=0;i<m;i++)
		   for(int j=0;j<n;j++)
			   scanf("%d",&a[i][j]);

   }
   
