#include<stdio.h>
void nhap(int a[], int &n);
bool chan(int n);
bool le(int n);
int xuLi(int a[], int n);
void main()
{
	int a[100], n;
	nhap(a,n);
	int kq = xuLi(a,n);
	printf("%d", kq);

}
bool chan(int n)
{
	if(n%2==0)
		return true;
	else return false;
}
bool le(int n)
{
	if(n%2!=0)
		return true;
	else return false;
}
void nhap(int a[], int &n)
{
	scanf("%d", &n);
		for(int i = 0; i < n; i++)
			scanf("%d", &a[i]);
}
int xuLi(int a[], int n)
{
	int kq ;
	for(int i = 0; i < n-1; i++)
	{
		for(int j = i + 1; j <= i + 1; j++)
		{
			if(chan(a[i]) && le(a[j])||le(a[i]) && chan(a[j]))
				kq = -1;
		}
	}
	return kq;
			
}
