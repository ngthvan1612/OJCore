#include<stdio.h>
#include<math.h>

void nhapMang(int &n , int arr[]);
int kiemtrachanle(int n , int arr[]);
void xuat(int kq);


void main()
{
	int n;
	int arr[1000];
	nhapMang(n,arr);
	int kq = kiemtrachanle(n,arr);
	xuat(kq);
}

void nhapMang(int &n , int arr[])
{
	scanf("%d" , &n);
	for(int i=0 ; i<n ; i++)
	{
		scanf("%d" , &arr[i]);
	}
}

int kiemtrachanle(int n , int arr[])
{
	int d = 0;

	for(int i=0 ; i<n-1 ; i++)
	{
		if((arr[i]%2==0 && arr[i+1]%2==0) || (arr[i]%2!=0 && arr[i+1]%2!=0))
		{
			d++;
			return i+1;
		}
	}
	if(d==0)
	{
		return -1;
	}
}

void xuat(int kq)
{
	printf("%d" , kq);
}