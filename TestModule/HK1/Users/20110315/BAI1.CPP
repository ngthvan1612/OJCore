#include<stdio.h>
	void dem(int x,int y,int &d,int &s);
void main()
{
	int x,y,z,t,u,v,dema1,demb1,demc1,dema2,demb2,demc2;
	scanf("%d%d%d%d%d%d",&x,&y,&z,&t,&u,&v);
	dem(x,y,dema1,demb1);
	dem(z,t,dema2,demc1);
	dem(u,v,demb2,demc2);
	printf("%d ",dema1+dema2);
	printf("%d ",demb1+demb2);
	printf("%d ",demc1+demc2);
}
	void dem(int x,int y,int &d,int &s)
	{
	 d=0,s=0;
	if((x==1&&y==3)||(x==3&&y==2)||(x==2&&y==1))
	{
		d+=3;
		s+=0;
	}
	else
		if(x==y)
		{
			d+=1;
			s+=1;
		}
		else
		{
			d+=0;
			s+=3;
		}

	}
