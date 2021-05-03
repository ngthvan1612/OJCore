#include<stdio.h>

int main()
{
	int x, y, z, t, u, v;
	scanf("%d%d%d%d%d%d", &x, &y, &z, &t, &u, &v);
	int dA = 0, dB = 0, dC = 0;
	if (x == y)
	{
		dA++;
		dB++;
	}
	else if(x == 1 && y == 2)
		dB = dB + 3;
	else if(x == 2 && y == 1)
		dA = dA + 3;
	else if(x == 1 && y == 3)
		dA = dA + 3;
	else if(x == 3 && y == 2)
		dA = dA + 3;	
	else
		dB = dB + 3;
		
	if (z == t)
	{
		dA++;
		dC++;
	}
	else if(z == 1 && t == 2)
		dC = dC + 3;
	else if(z == 2 && t == 1)
		dA = dA + 3;
	else if(z == 1 && t == 3)
		dA = dA + 3;
	else if(z == 3 && t == 2)
		dA = dA + 3;
	else
		dC = dC + 3;	
	
	if (u == v)
	{
		dC = dC + 1;
		dB++;
	}
	else if(u == 1 && v == 2)
		dC = dC + 3;
	else if(u == 2 && v == 1)
		dB = dB + 3;
	else if(u == 1 && v == 3)
		dB = dB + 3;
	else if(u == 3 && v == 2)
		dB = dB + 3;
	else
		dC = dC + 3;
	
	printf("%d %d %d", dA, dB, dC);
	return 0;
}

