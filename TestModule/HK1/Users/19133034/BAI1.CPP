#include <stdio.h>

void main()
{
	int x,y,z,t,u,v;
	scanf("%d%d%d%d%d%d",&x,&y,&z,&t,&u,&v);
	int A=0,B=0,C=0;
	if(x==1)
	{
		if(y==3)
			A=A+3;
		else if(y==2)
		{
			A=A+0;
			B=B+3;
		}
		else 
		{
			A=A+1;
			B=B+1;
		}
	}
	else if(x==2)
	{
		if(y==3)
		{
			A=A+0;
			B=B+3;
		}
		else if(y==1)
		{
			A=A+3;
			B=B+0;
		}
		else 
		{
			A=A+1;
			B=B+1;
		}
	}
	else 
	{
		if(y==1)
		{
			A=A+3;
			B=B+0;
		}
		else if(y==2)
		{
			A=A+3;
			B=B+0;
		}
		else
		{
			A=A+1;
			B=B+1;
		}
	}
	//////////
	if(z==1)
	{
		if(t==3)
			A=A+3;
		else if(t==2)
		{
			A=A+0;
			C=C+3;
		}
		else 
		{
			A=A+1;
			C=C+1;
		}
	}
	else if(z==2)
	{
		if(t==3)
		{
			A=A+0;
			C=C+3;
		}
		else if(t==1)
		{
			A=A+3;
			C=C+0;
		}
		else 
		{
			A=A+1;
			C=C+1;
		}
	}
	else 
	{
		if(t==1)
		{
			A=A+3;
			C=C+0;
		}
		else if(t==2)
		{
			A=A+3;
			C=C+0;
		}
		else
		{
			A=A+1;
			C=C+1;
		}
	}
	//////////
	if(u==1)
	{
		if(v==3)
			B=B+3;
		else if(v==2)
		{
			B=B+0;
			C=C+3;
		}
		else 
		{
			B=B+1;
			C=C+1;
		}
	}
	else if(u==2)
	{
		if(v==3)
		{
			B=B+0;
			C=C+3;
		}
		else if(v==1)
		{
			B=B+3;
			C=C+0;
		}
		else 
		{
			B=B+1;
			C=C+1;
		}
	}
	else 
	{
		if(v==1)
		{
			B=B+3;
			C=C+0;
		}
		else if(v==2)
		{
			B=B+3;
			C=C+0;
		}
		else
		{
			B=B+1;
			C=C+1;
		}
	}


		
	
	printf("%d %d %d",A,B,C);
}


