#include<stdio.h>
void central(int x, int y, int z, int t, int u, int v);

void main()
{
	int x, y, z, t, u, v;
	scanf("%d%d%d%d%d%d", &x, &y, &z, &t, &u, &v);
	central(x, y, z, t, u, v);
}
void central(int x, int y, int z, int t, int u, int v)
{
	int diem1=0;
	int diem2=0;
	int diem3=0;
	int a[6]={'x', 'y', 'z', 't', 'u', 'v'};
	if (a[0] > a[1])
		diem1 += 3;
    else 
	{
		if (a[0] < a[1])
			diem2 += 3;
		if
		{
			diem1 += 1;
			diem2 += 1;
		}
	}
	if (a[2] > a[3])
		diem1 += 3;
    else 
	{
		if (a[2] < a[3])
			diem3 += 3;
		if
		{
			diem1 += 1;
			diem3 += 1;
		}
	}
	if (a[4] > a[5])
		diem2 += 3;
    else 
	{
		if (a[4] < a[5])
			diem3 += 3;
		if
		{
			diem2 += 1;
			diem3 += 1;
		}
	}
	printf("%d %d %d", diem1, diem2, diem3);
}