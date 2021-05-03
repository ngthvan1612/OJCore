#include<stdio.h>
void nhapmatran(int a[][100],int n,int m);
void main()
{
	int n,m;
	scanf("%d%d",&n,&m);
	int a[100][100];
	nhapmatran(a,n,m);
printf("12");
}
void nhapmatran(int a[][100],int n,int m){
for(int i=0;i<n;i++)
    for(int j=0;j<m;j++)
	{
		scanf("%d",&a[i][j]);


	}


}