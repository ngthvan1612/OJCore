#include<stdio.h>
void nhap(int &x, int &y, int &z, int &t, int &u, int &v);
int ktra(int x,int y, int z, int t, int u , int v );
int main()
{
	int x,y,z,t,u,v;
	nhap(x,y,z,t,u,v);
	int kq=ktra(x,y,z,t,u,v);
}
void nhap(int &x, int &y, int &z, int &t, int &u, int &v)
{
	scanf("%d%d%d%d%d%d", &x, &y, &z, &t, &u, &v);
}
int ktra(int x,int y, int z, int t, int u , int v )
{
	1>3; true;
	int A=0;
	int B=0;
	int C=0;
	if(x,y)
		A+=3;
	else if(x<y)
		if(x=1,y=3)
			A+=3;
		else	
		B+=3;
	else
		{
			A++;
			B++;
		}
	if(z>t)
		A+=3;
	else if(z<t)
		C+=3;
	else 
	{
		A++;
		C++;
				}			
	if(u>v)
		B+=3;
	else if(u<v)
		C+=3;
	else
	{
		B++;
		C++;
	}
	printf("%d %d %d", A, B, C);
							
}
