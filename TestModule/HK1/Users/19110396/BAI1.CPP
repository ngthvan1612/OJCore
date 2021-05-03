#include<stdio.h>
void choi(int x, int y, int x1, int z, int y1,int z1);
void nhap(int &x, int &y, int &x1, int &z, int &y1,int &z1);

int main( )
{
	int x,y,x1,z,y1,z1;
	nhap(x,y,x1,z,y1,z1);
	choi(x,y,x1,z,y1,z1);
	return 0;
}

void choi(int x, int y, int x1, int z, int y1,int z1)
{
	int diemA =0;
	int diemB =0;
	int diemC =0;
	if(x == 1)
	{
		if(y == 2)
		{ 
			diemB=diemB+3;
		}
		else if(y == 3)
		{
			diemA=diemA+3;
		}
		else if(y == 1)
		{
			diemA++;
			diemB++;
		}
	}
	else if(x == 2)
	{
		if(y == 3)
		{ 
			diemB=diemB+3;
		}
		else if(y == 1)
		{
			diemA=diemA+3;
		}
		else if(y == 2)
		{
			diemA++;
			diemB++;
		}
	}
	else if(x == 3)
	{
		if(y == 1)
		{ 
			diemB=diemB+3;
		}
		else if(y == 2)
		{
			diemA=diemA+3;
		}
		else if(y == 3)
		{
			diemA++;
			diemB++;
		}
	}
	else if(x1 == 1)
	{	
		if(z == 1)
		{
			diemA++;
			diemC++;
		}
		else if(z == 2)
			diemC=diemC+3;
		else if(z == 3)
			diemA=diemA+3;
	}
	else if(x1 == 2)
	{	
		if(z == 2)
		{
			diemA++;
			diemC++;
		}
		else if(z == 3)
			diemC=diemC+3;
		else if(z == 1)
			diemA=diemA+3;
	}
	else if(x1 == 3)
	{	
		if(z == 3)
		{
			diemA++;
			diemC++;
		}
		else if(z == 2)
			diemA=diemA+3;
		else if(z == 1)
			diemC=diemC+3;
	}
	else if(y1 == 1)
	{
		if(z1 == 1)
		{
			diemB++;
			diemC++;
		}
		else if(z1 == 2)
			diemC=diemC+3;
		else
			diemB=diemB+3;
	}
	else if(y1 == 2)
	{
		if(z1 == 2)
		{
			diemB++;
			diemC++;
		}
		else if(z1 == 3)
			diemC=diemC+3;
		else
			diemB=diemB+3;
	}
	else if(y1 == 3)
	{
		if(z1 == 3)
		{
			diemB++;
			diemC++;
		}
		else if(z1 == 1)
			diemC=diemC+3;
		else 
			diemB=diemB+3;
	}
	printf("%d %d %d", diemA, diemB, diemC);
}

void nhap(int &x, int &y, int &x1, int &z, int &y1,int &z1)
{
	scanf("%d%d%d%d%d%d", &x, &y, &x1, &z, &y1, &z1);
}