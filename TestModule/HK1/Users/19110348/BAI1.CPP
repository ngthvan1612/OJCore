#include<stdio.h>

void xuLi(int x, int y, int z, int t, int u, int v);
int thang(int a, int b);
int hoa(int a, int b);


void main()
{
	int x,y,z,t,u,v;
	scanf("%d%d%d%d%d%d", &x, &y, &z, &t, &u, &v);
	xuLi(x,y,z,t,u,v);
}

void xuLi(int x, int y, int z, int t, int u, int v)
{
	int dA =0, dB=0, dC=0;
	if(thang(x,y) == 1)
		dA=dA+3;
	else if(hoa(x,y) == 1)
		dA=dA+1;
	else
		dA=dA+0;
	if(thang(z,t) == 1)
		dA=dA+3;
	else if(hoa(z,t) == 1)
		dA=dA+1;
	else
		dA=dA+0;

	if(thang(y,x) == 1)
		dB=dB+3;
	else if(hoa(x,y) == 1)
		dB=dB+1;
	else
		dB=dB+0;
	if(thang(u,v) == 1)
		dB=dB+3;
	else if(hoa(u,v) == 1)
		dB=dB+1;
	else
		dB=dB+0;

	if(thang(t,z) == 1)
		dC=dC+3;
	else if(hoa(z,t) == 1)
		dC=dC+1;
	else
		dC=dC+0;
	if(thang(v,u) == 1)
		dC=dC+3;
	else if(hoa(u,v) == 1)
		dC=dC+1;
	else
		dC=dC+0;
	printf("%d %d %d", dA, dB, dC);

}

int thang(int a, int b)
{
	if(a==1 && b==3)
		return 1;
	else if(a==3 && b==2)
			return 1;
	else if(a==2 && b==1)
			return 1;
}
		
int hoa(int a, int b)
{
	if( (a==1 && b==1 ) || (a==2 && b==2) || (a==3 && b==3) )
			return 1;
}