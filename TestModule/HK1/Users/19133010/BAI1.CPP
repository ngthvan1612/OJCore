#include<stdio.h>
int xuLy(int a,int b);
int main()
{
	int x,y,z,t,u,v; int s1=0,s2=0,s3=0;
	scanf("%d%d%d%d%d%d",&x,&y,&z,&t,&u,&v);
	

	if((x==1 && y==3) || (x==3 && y==2) || (x==2 && y==1))
		s1+=3;
	else
	{
		if((x==3 && y==1)|| (x==2 && y==3) || (x==1 && y==2))
			s2+=3;
		else
		{
			s1+=1;
			s2+=1;
		}
	}

	if((z==1 && t==3) || (z==3 && t==2) || (z==2 && t==1))
		s1+=3;
	else
	{
		if((z==3 && t==1)|| (z==2 && t==3) || (z==1 && t==2))
			s3+=3;
		else
		{
			s1+=1;
			s3+=1;
		}
	}

	if((u==1 && v==3) || (u==3 && v==2) || (u==2 && v==1))
		s2+=3;
	else
	{
		if((u==3 && v==1)|| (u==2 && v==3) || (u==1 && v==2))
			s3+=3;
		else
		{
			s2+=1;
			s3+=1;
		}
	}
	
	
	printf("%d %d %d",s1,s2,s3);
	return 0;
}

