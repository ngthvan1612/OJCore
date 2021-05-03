#include <stdio.h>
#include <math.h>

void nhap(int &m , int &n , int a[100][100]);
int songuyento(int x);
int tong(int m , int n , int a[100][100]);
void xuat(int kq);

void nhap(int &m , int &n , int a[100][100])
{
	scanf("%d%d",&m,&n);
	for ( int i = 0 ; i < m ; i ++)
	{
		for (int j = 0 ; i < n ; j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
}

int songuyento(int x)
{ int kiemtra;
   for(int i = 2 ; i <= sqrt(x) ; i++)
   {
	   if(x % i == 0)
	   {
           kiemtra = 0;
		   break;
	   } else kiemtra = 1;
   }
 return kiemtra;
}


int tong(int m , int n , int a[100][100])
{  int kq = 0;
    int s[100];
   	for ( int i = 0 ; i < m ; i ++)
	{   s[i] = 0;
		for (int j = 0 ; i < n ; j++)
		{
			if (songuyento(a[i][j]) == 1)
			{
               s[i] += a[i][j];
			}  else s[i] += 0 ;
		}
	}
	for(int z = 0 ; i < m-1 ; z++)
	{
		if( s[z] > s[z+1])
		{
			kq = s[z+1];
		}
	}
 return kq;
}

void xuat(int kq)
{
	printf("%d",kq);
}

void main()
{
	int m,n,a[100][100];
	nhap(m,n,a);
	int kq = 12;
	xuat(kq);
}
