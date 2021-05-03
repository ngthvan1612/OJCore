void diem(int x, int y, int z, int t, int u, int v, int&PA, int &PB, int&PC);
#include <iostream>

void main()
{
	int x,y,z,t,u,v, PA,PB,PC;
	std ::cin >> x>>y>>z>>t>>u>>v;
	diem(x,y,z,t,u,v,PA,PB,PC);
	std::cout << PA << " " << PB << " " << PC;
}
void diem(int x, int y, int z, int t, int u, int v, int&PA, int &PB, int&PC)
{
	PA=0;
	PB=0;
	PC=0;
	if ((x==1 &&y==3) || (x==3 && y==2) || (x==2 && y==1))
		PA+=3;
	else if ((x==3 && y==1) || (x==2 && y==3)|| (x==1 && y=2))
		PB+=3;
	else if (x==y)
	{
		PA+=1;
		PB+=1;
	}
	if ((z==1 &&t==3) || (z==3 && t==2) || (z==2 && t==1))
		PA+=3;
	else if ((z==3 && t==1) || (z==2 && t==3)|| (z==1 && t=2))
		PC+=3;
	else if (z==t)
	{
		PA+=1;
		PC+=1;
	}
	
	if ((u==1 &&v==3) || (u==3 && v==2) || (u==2 && v==1))
		PB+=3;
	else if ((u==3 && v==1) || (u==2 && v==3)|| (u==1 && v=2))
		PC+=3;
	else if (x==y)
	{
		PB+=1;
		PC+=1;
	}