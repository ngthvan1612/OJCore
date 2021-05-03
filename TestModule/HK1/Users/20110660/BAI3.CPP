#include<stdio.h>
void nhap(int a[], int &n);
int doi(int x);
int tinh(int a[] , int n);
void xuat(int x);
void main()
{
int a[100],n;
nhap(a,n);
int kq=tinh(a,n);
xuat(kq);
}
void nhap(int a[], int &n)
{
scanf("%d",&n);
for(int i=0 ; i<n;i++)
{
scanf("%d",&a[i]);
}
}
int doi(int x)
{
if (x%2==0)
return 1;
else 
return -1;
}
int tinh(int a[] , int n)
{
	int k=-1;
for (int i=0; i<n;i++)
	
	if(doi(a[i])*doi(a[i+1])>0)
		return (i+1);
	return k;
    

}
void xuat(int x)
{
printf("%d",x);
}