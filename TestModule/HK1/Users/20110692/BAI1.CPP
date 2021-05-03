#include <stdio.h>


int sosanh(int a,int b);

void main()
{
	int x,y,z,t,u,v;


	scanf("%d%d%d%d%d%d",&x,&y,&z,&t,&u,&v);


	int diemA=0,diemB=0,diemC=0;

///////////////////A vs B//////////////////////
	if (sosanh(x,y)>0)
			diemA+=3;
	else if (sosanh(x,y)<0)
			diemB+=3;
	else 
	{
		diemA+=1;
		diemB+=1;
	}

/////////////////////A vs C////////////////////

	if (sosanh(z,t)>0)
			diemA+=3;
	else if (sosanh(z,t)<0)
			diemC+=3;
	else 
	{
		diemA+=1;
		diemC+=1;
	}

/////////////////////B vs C///////////////////////

	if (sosanh(u,v)>0)
			diemB+=3;
	else if (sosanh(u,v)<0)
			diemC+=3;
	else 
	{
		diemB+=1;
		diemC+=1;
	}

	printf("%d %d %d",diemA,diemB,diemC);


}

int sosanh(int a,int b)
{
	if ((a==1 && b==3) || (a==3 && b==2) || (a==2 && b==1))
		return 1;
	else if ((a==3 && b==1) || (a==2 && b==3) || (a==1 && b==2))
		return -1;
	else 
		return 0;
}