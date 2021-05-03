#include <stdio.h>
int main()
{
	int x,y,z,t,u,v;
	scanf("%d%d%d%d%d%d",&x,&y,&z,&t,&u,&v);
	int A = 0,B = 0,C = 0;
	if (x == y)
	{
		A++;
		B++;
	}
	if (x == 1)
	{
		if (y == 2)
		{
			B += 3;
		}
		else if (y == 3)
		{
			A += 3;
		}
	}
	if (x == 2)
	{
		if (y == 1)
		{
			A += 3;
		}
		else if (y == 3)
		{
			B += 3;
		}
	}
	if (x == 3)
	{
		if (y == 2)
		{
			A += 3;
		}
		else if (y == 1)
		{
			B += 3;
		}
	if (z == t)
	{
		A++;
		C++;
	}
	if (z == 1)
	{
		if (t == 2)
		{
			C += 3;
		}
		else if (t == 3)
		{
			A += 3;
		}
	}
	if (z == 2)
	{
		if (t == 1)
		{
			A += 3;
		}
		else if (z == 3)
		{
			C += 3;
		}
	}
	if (z == 3)
	{
		if (t == 2)
		{
			A += 3;
		}
		else if (t == 1)
		{
			C += 3;
		}
   if (u == v)
	{
		B++;
		C++;
	}
	if (u == 1)
	{
		if (v == 2)
		{
			C += 3;
		}
		else if (v == 3)
		{
			B += 3;
		}
	}
	if (u == 2)
	{
		if (v == 1)
		{
			B += 3;
		}
		else if (v == 3)
		{
			C += 3;
		}
	}
	if (u == 3)
	{
		if (v == 2)
		{
			B += 3;
		}
		else if (v == 1)
		{
			C += 3;
		}
printf("%d%d%d",A ,B ,C);
return 0;

}