#include<stdio.h>
void nhap(int &x , int &y , int &z, int &u , int &v);
int game(int x, int y , int z, int t, int u, int v);

void xuat(int kq);
void nhap(int &x , int &y , int &z, int &u , int &v, int &t )
{
	scanf("%d%d%d%d%d%d", &x, &y,&t, &z,&u,&v );
}
int game(int x, int y , int z, int t, int u, int v)
{
    int da = 0, db = 0, dc = 0;
	if( (x == 1 && y == 1) || ( x == 2 && y == 2) || ( x == 3 && y == 3))
		da = da + 1;
	    db = db + 1;
    if( x == 1)
		if( y == 2)
			db = db + 3;
		else if( y == 3)
			da = da + 1;
	if( x == 2)
		if ( y == 1)
			da  = da  + 3;
		else if ( y == 3)
			db = db + 3;
	if( x == 3)
		if( y == 1)
			db = db + 3;
		else if ( y == 2)
			da = da + 3;
	if( ( z == 1 && t == 1 ) || ( z == 2 && t == 2 ) || ( z == 3 && t == 3))
		da = da + 1;
	    dc = dc + 1;
	if ( z == 1)
		if ( t == 2)
			dc = dc + 3;
		else if( t == 3 )
			da = da + 3 ;
	if  ( z == 2)
		if ( t == 1)
			da = da + 3 ;
		else if (t == 3)
			dc = dc + 3;
	if ( z == 3)
		 if ( t == 1)
			 dc = dc + 3;
		 else if ( t == 2)
			 da = da + 3;
    if ( ( u == 1 && v == 1) || ( u == 2 && v == 2) || ( u == 3 && v == 3))
		db = db + 1;
	    dc = dc + 1;
	if( u == 1 )
		if( v == 2 )
			dc = dc + 3;
		else if ( v == 3)
			db = db + 3;
	if ( u == 2)
		if ( v == 1)
			db = db + 3;
		else if ( v == 3)
			dc = dc + 3;
	if ( u == 3)
		if( v == 1)
			dc = dc + 3;
		else if ( v == 2)
			db = db + 3;
	return da , db, dc ;


	

	 

}
void xuat(int kq)
{
   printf("%d", kq);
}
void main()
{
	int x, y, z , t , u ,v;
	nhap(x,y,z,t,u,v);
	int kq = game(x,y,z ,t,u,v);
	xuat(kq);
}

