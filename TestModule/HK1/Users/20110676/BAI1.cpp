#include<stdio.h>
void nhap(int a[]);
void xuat(int x, int y, int z);
int tuti(int a[], int &x, int &y, int &z);
void main()
{
    int a[100];
	int x,y,z;
	nhap(a);
	int kq= tuti(a,x,y,z);
	xuat(x, y, z);
}
void nhap(int a[])
{
	for(int i=0; i<6; i++)
		scanf("%d", &a[i]);
}
void xuat(int x, int y, int z)
{
    printf("%d %d %d",x, y ,z );
}
int ketqua(int x, int y)
{
    if(x==1 && y==3 || x==3 && y==2 || x==2 && y==1) return 0;
	else
	{
	    if(x==y) return 1;
		return 2;
	}
}
int tuti(int a[], int &x, int &y, int &z)
{
    x=0;
    y=0;
	z=0;
	if(ketqua(a[0],a[1])==0)
	{
	    x=x+3;
	}
	else
	{
	    if(ketqua(a[0], a[1])==1)
		{
		    x++;
			y++;
		}
		else y=y+3;
	}
	if(ketqua(a[2],a[3])==0)
	{
	    x=x+3;
	}
	else
	{
	    if(ketqua(a[2], a[3])==1)
		{
		    x++;
			z++;
		}
		else z=z+3;
	}
	if(ketqua(a[4],a[5])==0)
	{
	    y=y+3;
	}
	else
	{
	    if(ketqua(a[4],a[5])==1)
		{
		    y++;
			z++;
		}
		else z=z+3;
	}
	return 0;
}