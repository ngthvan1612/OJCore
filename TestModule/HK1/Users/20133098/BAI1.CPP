#include<stdio.h>
void main()
{
	int x,y,z,t,u,v;
	scanf("%d%d%d%d%d%d", &x, &y, &z, &t, &u, &v);
	int diem1=0, diem2=0, diem3=0;
	//A vs B
	if(x==1)
	{
		if(y==1)
		{
			diem1=diem1+1;
			diem2=diem2+1;
		}
		else if(y==2)
			diem2=diem2+3;
		else if(y==3)
			diem1=diem1+3;
	}
	else if(x==2)
	{
		if(y==1)
			diem1=diem1+3;
		else if(y==2)
		{
			diem1=diem1+1;
			diem2=diem2+1;
		}
		else if(y==3)
			diem2=diem2+3;
	}
	else if(x==3)
	{
		if(y==1)
			diem2=diem2+3;
		else if(y==2)
			diem1=diem1+3;
		else if(y==3)
		{
			diem1=diem1+1;
			diem2=diem2+1;
		}
	}
	//A vs C
	if(z==1)
	{
		if(t==1)
		{
			diem1=diem1+1;
			diem3=diem3+1;
		}
		else if(t==2)
			diem3=diem3+3;
		else if(t==3)
			diem1=diem1+3;
	}
	else if(z==2)
	{
		if(t==1)
			diem1=diem1+3;
		else if(t==2)
		{
			diem1=diem1+1;
			diem3=diem3+1;
		}
		else if(t==3)
			diem3=diem3+3;
	}
	else if(z==3)
	{
		if(t==1)
			diem3=diem3+3;
		else if(t==2)
			diem1=diem1+3;
		else if(t==3)
		{
			diem1=diem1+1;
			diem3=diem3+1;
		}
	}
	// B vs C
	if(u==1)
	{
		if(v==1)
		{
			diem2=diem2+1;
			diem3=diem3+1;
		}
		else if(v==2)
			diem3=diem3+3;
		else if(v==3)
			diem2=diem2+3;
	}
	else if(u==2)
	{
		if(v==1)
			diem2=diem2+3;
		else if(v==2)
		{
			diem2=diem2+1;
			diem3=diem3+1;
		}
		else if(v==3)
			diem3=diem3+3;
	}
	else if(u==3)
	{
		if(v==1)
			diem3=diem3+3;
		else if(v==2)
			diem2=diem2+3;
		else if(v==3)
		{
			diem2=diem2+1;
			diem3=diem3+1;
		}
	}
	printf("%d %d %d",diem1,diem2,diem3);
}

