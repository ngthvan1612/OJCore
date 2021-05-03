#include <stdio.h>

int chanle(int a);
void nhap(int &n , int a[]);
int chanlexenke(int n , int a[]);
void xuat(int kq);

void nhap(int &n , int a[])
{
	scanf("%d",&n);
	for(int i = 0 ; i < n ; i++)
	{
		scanf("%d",&a[i]);
	}
}

int chanle(int a)
{
	if(a % 2 == 0)
	{
		return 1;
	} else return 2;
}

int chanlexenke(int n , int a[])
{  int vitri ;
   for(int i = 0 ; i < n-1 ; i ++)
   {
	   if((chanle(a[i]) == 1 && chanle(a[i+1]) == 2 )|| (chanle(a[i]) == 2 && chanle(a[i+1]) == 1))
	   {
		   vitri = -1;
	   } else if((chanle(a[i]) == 1 && chanle(a[i+1]) == 1 )|| (chanle(a[i]) == 2 && chanle(a[i+1]) == 2))
	   {
		   vitri = i+1;
		   break;
	   }
   }
   return vitri;
}

void xuat(int kq)
{
	printf("%d",kq);
}

void main()
{
    int n,a[100];
	nhap(n,a);
	int kq = chanlexenke(n,a);
	xuat(kq);
}