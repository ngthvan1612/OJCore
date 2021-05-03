#include <stdio.h>

void nhap(int &x, int &y, int &z, int &t, int &u, int &v)
{
	scanf("%d%d%d%d%d%d",&x,&y,&z,&t,&u,&v);
}

int A_B(int a, int b)
{
	if(a == 1 && b == 3)
		return 3;
	else if(a == 3 && b == 2)
		return 3;
	else if(a == 2 && b == 1)
		return 3;
	else if(a == b)
		return 1;
	
	return 0;
}

int A_C(int a, int b)
{
	if(a == 1 && b == 3)
		return 3;
	else if(a == 3 && b == 2)
		return 3;
	else if(a == 2 && b == 1)
		return 3;
	else if(a == b)
		return 1;
	return 0;
}

int B_C(int a, int b)
{
	if(a == 1 && b == 3)
		return 3;
	else if(a == 3 && b == 2)
		return 3;
	else if(a == 2 && b == 1)
		return 3;
	else if(a == b)
		return 1;
	return 0;
}

void tong_diem(int x, int y, int z, int t, int u, int v)
{
	int d_a = 0, d_b = 0, d_c = 0;
	int a = A_B(x,y);
	int b = A_C(z,t);
	int c = B_C(u,v);
	
	if(a == 3)
	{
		d_a += 3;
		d_b += 0;
	}
	else if(a == 1)
	{
		d_a += 1;
		d_b += 1;
	}
	else if(a == 0)
	{
		d_a += 0;
		d_b += 3;
	}

	if(b == 3)
	{
		d_a += 3;
		d_c += 0;
	}
	else if(b == 1)
	{
		d_a += 1;
		d_c += 1;
	}
	else if(b == 0)
	{
		d_a += 0;
		d_c += 3;
	}

	if(c == 3)
	{
		d_b += 3;
		d_c += 0;
	}
	else if(c == 1)
	{
		d_b += 1;
		d_c += 1;
	}
	else if(c == 0)
	{
		d_b += 0;
		d_c += 3;
	}

	printf("%d %d %d", d_a, d_b, d_c);
}

void main()
{
	int x,y,z,t,u,v;
	nhap(x,y,z,t,u,v);
	tong_diem(x,y,z,t,u,v);
}