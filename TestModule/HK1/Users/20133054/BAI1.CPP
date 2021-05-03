#include<stdio.h>
void nhap(int &x, int&y, int&z,int&t,int&u,int&v);
void oantuxi(int x, int y, int z, int t, int u, int v);
void main()
{
   int x,y,z,t,u,v;
   nhap(x,y,z,t,u,v);
   oantuxi(x,y,z,t,u,v);
}

void nhap(int &x, int&y, int&z,int&t,int&u,int&v)
{
	scanf("%d%d%d%d%d%d",&x,&y,&z,&t,&u,&v);
}


void oantuxi(int x, int y, int z, int t, int u, int v)
{
	
	int da=0;
	int db=0;
	int dc=0;
	if (x==1 && y==3) 
		{
			da=da+3;
			db=db+0;
		}
	else 
		 if (x==3 && y==1)
			{	
				db=db+3;
				da=da+0;
			}		
    else 
		 if (x==y)
			{
			   da=da+1; 
			   db=db+1;
			}
    else 
		  if (x==2 && y == 3)
		  {
			  db=db+3;
		       da=da+0;
		  }
     else 
		   if (x==3 && y==2)
		   {
			   da=da+3;
			   db=db+0;
		   }
     else 
		   if (x==1 && y==2)
			{
			   db=db+3;
			   da=da+0;
			}
      else 
		    if (x==2 && y==1)
				{
					da=da+3;
					db=db+0;
				}

    if (z==1 && t==3)
			{
				da=da+3;
				dc=dc+0;
			}
	 else 
		  if (z==3 && t==1)
			{
			  dc=dc+3;
			  da=da+0;
			}

     else 
		  if (z==t)
		  {
			  da=da+1;
			  dc=dc+1;
		  }
      else 
		  if (z==2 && t == 3)
		  {
			  dc=dc+3;
		       da=da+0;
		  }
     else 
		   if (z==3 && t==2)
		   {
			   da=da+3;
			   dc=dc+0;
		   }
	else 
		   if (z==1 && t==2)
			{
			   dc=dc+3;
			   da=da+0;
			}
      else 
		    if (z==2 && t==1)
				{
					da=da+3;
					dc=dc+0;
				}



     if (u==1 && v==3)
				{
					db=db+3;
					dc=dc+0;
				}
	 else 
		 if (u==3 && v==1)
				{
					dc=dc+3;
					db=db+0;
				}
      else 
		  if (u==v)
		  {
			  db=db+1;
			  dc=dc+1;
		  }
       else 
		  if (u==2 && v == 3)
		  {
			  dc=dc+3;
		       db=db+0;
		  }
     else 
		   if (u==3 && v==2)
		   {
			   db=db+3;
			   dc=dc+0;
		   }
     else 
		   if (u==1 && v==2)
			{
			   dc=dc+3;
			   db=db+0;
			}
      else 
		    if (u==2 && v==1)
				{
					db=db+3;
					dc=dc+0;
				}

	printf("%d ",da);
	printf("%d ",db);
	printf("%d",dc);

}
