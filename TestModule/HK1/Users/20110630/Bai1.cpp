#include <stdio.h>
void TinhDiem(int x,int y,int z,int t,int u,int v);
void main()
{
	int x,y,z,t,u,v;
	scanf("%d%d%d%d%d%d",&x,&y,&z,&t,&u,&v);
	TinhDiem(x,y,z,t,u,v);
}
int Doi(int x,int y)
{
	int gan;
	if(x==1)
	{	if(y==1)
			gan = 2;
		else	if(y==2)
			gan = 1; // hoa 2 thua 1 thang 3
		else if(y==3)
			gan = 3;
	}
	else if(x==2)
	{
		if(y==1)
			gan=3;
		else	if(y==2)
			gan=2; // hoa 2 thua 1 thang 3
		else 
			gan=1;
	}
	else
	{	if(y==1)
			gan=1;
		else if(y==2)
			gan=3; // hoa 2 thua 1 thang 3
		else 
			gan=2;}

	if(gan==1)
		return 1;
	else if(gan==2)
		return 2;
	else 
		return 3;

}
void TinhDiem(int x,int y,int z,int t,int u,int v)
{
	int count1=0,count2=0,count3=0;
	if(Doi(x,y)==3)
		count1 += 3;
	else if(Doi(x,y)==1)
		count2 += 3;
	else 
	{
		count1 += 1;
		count2 += 1;
	}

	if(Doi(z,t)==3)
		count1 += 3;
	else if(Doi(z,t)==1)
		count3 += 3;
	else 
	{
		count1 += 1;
		count3 += 1;
	}
	

	if(Doi(u,v)==3)
		count2+=3;
	else if(Doi(u,v)==1)
		count3+=3;
	else 
	{
		count2 += 1;
		count3 += 1;
	}
	
	
	printf("%d %d %d",count1,count2,count3);
}
