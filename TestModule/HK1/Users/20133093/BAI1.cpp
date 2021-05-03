#include<stdio.h>
void nhap(int &x,int &y,int &z,int &t,int &u,int &v);
int check(int x,int y,int z,int t,int u,int v);
int main()
{
	int x,y,z,t,u,v;
	nhap(x,y,z,t,u,v);
	int kq=check(x,y,z,t,u,v);
}
void nhap(int &x,int &y,int &z,int &t,int &u,int &v)
{
	scanf("%d%d%d%d%d%d", &x, &y, &z, &t, &u, &v);
	
}
	

int check(int x,int y,int z,int t,int u,int v )
{
	int diemA=0;
	int diemB=0;
	int diemC=0;
	if(x>y)
		diemA+=3;
	else if(x<y)
		if(x=1,y=3)
			diemA+=3;
	
		
	else
		{
		diemA++;
		diemB++;
		}
	if(z>t)
		diemA+=3;
	else if(z<t)
		diemC+=3;
	else
	{
		diemA++;
		diemC++;
	}
	if(u>v)
		diemB+=3;
	else if(u<v)
		diemC+=3;
	else{
	
		diemB++;
		diemC++;
	}
	printf("%d %d %d",diemA, diemB, diemC);
	
		
}


