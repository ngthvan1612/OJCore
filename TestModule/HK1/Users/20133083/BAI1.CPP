#include<stdio.h>

void nhap(int a[]);
void xuli(int a[], int &x, int &y, int &z);
void xuat(int x, int y,int z);
void main()
{
	int a[6],x=0,y=0,z=0;
	nhap(a);
	xuli(a,x,y,z);
	xuat(x,y,z);
}

void nhap(int a[])
{
	for (int i=0;i<6;i++)
		scanf("%d",&a[i]);
}

void xuli(int a[], int &x, int &y, int &z)
{
	if (a[0]==a[1]) {x+=1; y+=1;} else
	if ((a[0]==1 && a[1]==3)||(a[0]==2 && a[1]==1)||(a[0]==3&&a[1]==2)) x+=3; else y+=3;

	if (a[2]==a[3]) {x+=1; z+=1;} else
	if ((a[2]==1 && a[3]==3)||(a[2]==2 && a[3]==1)||(a[2]==3&&a[3]==2)) x+=3; else z+=3;
	
	if (a[4]==a[5]) {z+=1; y+=1;} else
	if ((a[4]==1 && a[5]==3)||(a[4]==2 && a[5]==1)||(a[4]==3&&a[5]==2)) y+=3; else z+=3;

}

void xuat(int x, int y,int z)
{
	printf("%d %d %d",x,y,z);
}