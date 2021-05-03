#include<stdio.h>


void Nhap(int &x, int &y, int &z, int &t, int &u, int &v);
void KiemTra(int x, int y, int z, int t, int u, int v);
void main()
{
	int x,y,z,t,u,v;
	Nhap(x,y,z,t,u,v);
	KiemTra(x,y,z,t,u,v);
}

void Nhap(int &x, int &y, int &z, int &t, int &u, int &v)
{
	scanf("%d%d%d%d%d%d", &x, &y, &z, &t, &u, &v);
}

void KiemTra(int x, int y, int z, int t, int u, int v)
{
	int dA = 0, dB = 0, dC = 0;
	if( x == 1)
		if( y == 3 )
			dA += 3;
		if( y == 2)
			dB += 3;
		if( y == 1)
			dA++, dB++;
	if( x == 3)
		if( y == 3 )
			dA ++,dB++;
		if( y == 2)
			dA += 3;

	if( x == 2)
		if( y == 3 )
			dB += 3;
		if( y == 2)
			dA++, dB++;
		if( y == 1)
			dA += 3;
	
	if( z == 1)
		if( t == 3 )
			dA += 3;
		if( t == 2)
			dC += 3;
		if( t == 1)
			dA++, dC++;
	if( z == 3)
		if( t == 3 )
			dA ++,dC++;
		if( t == 2)
			dA += 3;
		if( t == 1)
			dC += 3;

	if( z == 2)
		if( t == 3 )
			dC += 3;
		if( t == 2)
			dA++, dC++;
		if( t == 1)
			dA += 3;

	if( u == 1)
		if( v == 3 )
			dB += 3;
		if( v == 2)
			dC += 3;
		if( v == 1)
			dB++, dC++;

	if( u == 3)
		if( v == 3 )
			dB ++,dC++;
		if( v == 2)
			dB += 3;
		if( v == 1)
			dC += 3;
	if( u == 2)
		if( v == 3 )
			dC += 3;
		if( v == 2)
			dB++, dC++;
		if( v == 1)
			dB += 3;+

	printf("%d %d %d", dA, dB,dC);	
}



