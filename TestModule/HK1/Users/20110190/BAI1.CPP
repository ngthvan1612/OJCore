#include <stdio.h>
void nhap (int &x, int &y, int &z, int &t, int &u, int &v);
void thidau(int x, int y, int z, int t, int u, int v, int &a, int &b, int &c);
void xuat (int a, int b, int c);
void main()
{
	int x, y, z, t, u, v, a, b, c;
	nhap (x, y, z, t, u, v);
	thidau(x, y, z, t, u, v, a, b, c);
	xuat(a, b, c);
}
void nhap (int &x, int &y, int &z, int &t, int &u, int &v)
{
	scanf("%d%d%d%d%d%d", &x, &y, &z, &t, &u, &v);
}
void thidau(int x, int y, int z, int t, int u, int v, int &a, int &b, int &c)
{
	a=0; b=0; c=0;
	if (x==1)
	{
		if (y==1)
		{
			a=a+1;
			b=b+1;
		}
		if (y==2)
		{
			a=a+0;
			b=b+3;
		}
		if (y==3)
		{
			a=a+3;
			b=b+0;
		}
	}
	if (x==2)
	{
		if (y==1)
		{
			a=a+3;
			b=b+0;
		}
		if (y==2)
		{
			a+=1;
			b+=1;
		}
		if (y==3)
		{
			a+=0;
			b+=3;
		}
	}
	if (x==3)
	{
		if (y==1)
		{
			a+=0;
			b+=3;
		}
		if (y==2)
		{
			a+=3;
			b+=0;
		}
		if (y==3)
		{
			a+=1;
			b+=1;
		}
	}

	if (z==1)
	{
		if (t==1)
		{
			a=a+1;
			c=c+1;
		}
		if (t==2)
		{
			a=a+0;
			c=c+3;
		}
		if (t==3)
		{
			a=a+3;
			c=c+0;
		}
	}
	if (z==2)
	{
		if (t==1)
		{
			a=a+3;
			c=c+0;
		}
		if (t==2)
		{
			a+=1;
			c+=1;
		}
		if (t==3)
		{
			a+=0;
			c+=3;
		}
	}
	if (z==3)
	{
		if (t==1)
		{
			a+=0;
			c+=3;
		}
		if (t==2)
		{
			a+=3;
			c+=0;
		}
		if (t==3)
		{
			a+=1;
			c+=1;
		}
	}
	if (u==1)
	{
		if (v==1)
		{
			b=b+1;
			c=c+1;
		}
		if (v==2)
		{
			b=b+0;
			c=c+3;
		}
		if (v==3)
		{
			b=b+3;
			c=c+0;
		}
	}
	if (u==2)
	{
		if (v==1)
		{
			b=b+3;
			c=c+0;
		}
		if (v==2)
		{
			b+=1;
			c+=1;
		}
		if (v==3)
		{
			b+=0;
			c+=3;
		}
	}
	if (u==3)
	{
		if (v==1)
		{
			b+=0;
			c+=3;
		}
		if (v==2)
		{
			b+=3;
			c+=0;
		}
		if (v==3)
		{
			b+=1;
			c+=1;
		}
	}

}
void xuat (int a, int b, int c)
{
	printf ("%d %d %d", a, b, c);
}



