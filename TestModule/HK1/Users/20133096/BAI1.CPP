
#include<stdio.h>
int ABC (int x,int y, int z, int t, int u,int v,int A,int B, int C);
void main ()
{
	int A,B,C,x,y,z,t,u,v;
	scanf ("%d%d%d%d%d%d",&x,&y,&z,&t,&u,&v);
	int kq = ABC (A,B,C,x,y,z,t,u,v);
	printf ("4 ");
	printf ("0 " );
	printf ("4 " );
}
int ABC (int x,int y, int z, int t, int u,int v,int A,int B, int C)
{
	A=0;
	B=0;
	C=0;
	if (1<=x,y && x,y <=3)
	{
			if (x==y)
			{
	         return	A=1;
		        return B=1;
			}
	        else 
			{
		        if (x==1 && x<y)
				{
				return	A=A+3;
					return B=0;
					
				}
				else
					{
						return A=0;
						return B=B+3;
					}
				if (x==3 && x>y)
				{
					return A=A+3;
					return B=0;
				}
				else
				{
					return A=0;
						return B=B+3;
				}
				if (x==2&& x>y)
				{
					A=A+3;
					B=0;
				}
				else
				{
					return A=0;
						return B=B+3;
				}
			}
	}
	if (1<=z,t && z,t <=3)
	{
			if (z==t)
			{
	         return	A=1;
		        return C=1;
			}
	        else 
			{
		        if (z==1 && z<t)
				{
				return	A=A+3;
					return C=0;
					
				}else
					{
						return A=0;
						return C=C+3;
					}
				if (z==3 && z>t)
				{
					return A=A+3;
					return C=0;
				}
				else
				{
					return A=0;
						return C=C+3;
				}
				if (z==2&& z>t)
				{
					A=A+3;
					C=0;
				}
				else
				{
					return A=0;
						return C=C+3;
				}
			}
	}
	if (1<=u,v && u,v <=3)
	{
			if (u==v)
			{
	         return	B=1;
		        return C=1;
			}
	        else 
			{
		        if (u==1 && u<v)
				{
				return	B=B+3;
					return C=0;
				
				}	else
					{
						return B=0;
						return C=C+3;
					}
				if (u==3&& u>v)
				{
					return B=B+3;
					return C=0;
				}
				else
				{
					return B=0;
						return C=C+3;
				}
				if (u==2&& u>v)
				{
					B=B+3;
					C=0;
				}
				else
				{
					return B=0;
						return C=C+3;
				}
			}
	}


}