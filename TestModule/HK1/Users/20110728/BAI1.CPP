#include <Stdio.h>

int kiemtra(int a, int b);
void main()
{
	int x,z,y,t,u,v;
	int TongA = 0,TongB = 0,TongC =0;
	scanf("%d%d%d%d%d%d", &x,&y,&z,&t,&u,&v);
	TongA += kiemtra(x,y);
	TongA += kiemtra(z,t);
	TongB += kiemtra(y,x);
	TongB += kiemtra(u,v);
	TongC += kiemtra(t,z);
	TongC += kiemtra(v,u);
	printf("%d %d %d",TongA,TongB,TongC);
}
int kiemtra(int a, int b)
{
	if(a == b)
		return 1;
	if(a == 1)
	{
		if(b == 3)
			return 3;
		else if(b == 2)
			return 0;
	}
	if(a == 2)
	{
		if(b == 1)
		{
			return 3;
		}
		else if(b == 3)
		{
			return 0;
		}
	}
	if(a == 3)
	{
		if(b == 1)
		{
			return 0;
		}
		else if(b == 2)
		{
			return 3;
		}
	}
}