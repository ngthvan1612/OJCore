#include<stdio.h>
void nhap (int &x, int &y, int &z, int &t, int &u, int &v);
int oantuti(int x, int y, int z, int t, int u, int v);
void xuat (int A, int B, int C);
void main()
{
	int x, y, z, t, u, v;
	nhap(x, y, z, t, u,v);
	int A= oantuti(x, y, z, t, u, v);
	int B= oantuti(x, y ,z, t, u, v);
	int C= oantuti(x, y, z, t, u, v);
	int kq= oantuti(x, y, z, t, u, v);
	/*xuat(kq);*/
}
void nhap (int &x, int &y, int &z, int &t, int &u, int &v)
{
	scanf("%d%d%d%d%d%d", &x, &y, &z, &t, &u, &v);
}
int oantuti(int x, int y, int z, int t, int u, int v)
{
	int A=0; int B=0; int C=0;
	if ((x==1 && y==3) ||(x==3 && y==2) || (x==2 && y==1)) A+=3;
	else
	{ 
		if (x==y)
		{
			A+=1;
			B+=1;
		}
	else B+=3;
	}
	if ((z==1 && t==3) || (z==3 && t==2) || (z==2 && t==1)) A+=3;
	else
	{ 
		if (x==y)
		{
			A+=1;
			C+=1;
		}
	else C+=3;
	}
	if ((u==1 && v==3) ||(u==3 && v==2) || (u==2 && v==1)) B+=3;
	else
	{ 
		if (x==y)
		{
			B+=1;
			C+=1;
		}
	else C+=3;
return A,B,C;
void xuat (int A, int B, int C);
printf(" %d%d%d",A,B,C);

	}
}
