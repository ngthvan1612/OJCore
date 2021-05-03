#include <stdio.h>
void nhap(int &x, int &y, int &z, int &t, int &u, int &v);
void main()
{
	int x,y,z,t,u,v;
	int diemA = 0, diemB =0, diemC = 0;
	nhap(x,y,z,t,u,v);
	if ((x==1 && y==3) || (x==3 && y==2) || (x==2 && y==1))
		diemA+=3; 
	else if (x == y)
	{
		diemA+=1;
		diemB+=1;
	}
	else 
		diemB+=3;
	
	if ((z==1 && t==3) || (z==3 && t==2) || (z==2 && t==1))
		diemA+=3;
	else if (t == z)
	{
		diemA+=1;
		diemC+=1;
	}
	else 
		diemC+=3;


	if ((u==1 && v==3) || (u==3 && v==2) || (u==2 && v==1))
		diemB+=3;
	else if (v == u)
	{
		diemB+=1;
		diemC+=1;
	}
	else 
	{
		diemC+=3;
	}

	printf("%d %d %d", diemA, diemB, diemC);

}

void nhap(int &x, int &y, int &z, int &t, int &u, int &v)
{
	scanf("%d%d%d%d%d%d", &x, &y, &z ,&t,&u,&v);
}