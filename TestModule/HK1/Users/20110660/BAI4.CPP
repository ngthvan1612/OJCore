#include<stdio.h>
void nhap(int a[][100],int &m , int &n);
int nt(int x);
int tinh(int a[][100], int b[], int m , int n);
void xuat(int x);

void main()
{
int a[100][100] , b[100],m,n;
nhap(a,m,n);
int kq=tinh(a,b,m,n);
xuat(kq);
}
void nhap(int a[][100],int &m , int &n)
{
scanf("%d%d",&m,&n);
for(int i=0; i<m; i++)
{
for(int j=0 ;j<n;j++)
scanf("%d",&a[i][j]);
}
}

int nt(int x)
{
if (x<2)
return 0;
else {
	int dem=0;
	for(int i=1;i<=x;i++){
	if(x%i==0)
		dem++;
	}
	if(dem==2)
		return 1;
	else 
		return 0;
}
}
int tinh(int a[][100], int b[], int m , int n)
{
	for(int i=0;i<m;i++){
		int s=0;
		for(int j=0;j<n;j++){
		if (nt(a[i][j])==1)
			s=s+a[i][j];
		}
		b[i]=s;
	}
	int min=b[0];
	for(int k=0;k<m;k++){
		if (min>b[k])
			min=b[k];
	}
	return min;

}
void xuat(int x){
printf("%d",x);
}