#include<stdio.h>
    void nhapvao(int&x,int&y,int&z,int&t,int&u,int&v);
	void xuat(int A, int B,int C);
	void xuly(int x, int y, int z, int t, int u, int v, int&A,int&B,int&C);
	  void xet( int x, int y, int&A, int&B);

void main()
{
	int x,y,z,t,u,v,A,B,C;
	nhapvao(x,y,z,t,u,v);
	xuly(x,y,z,t,u,v,A,B,C);
	xuat(A,B,C);
}
    void nhapvao(int&x,int&y,int&z,int&t,int&u,int&v)
	{
		scanf("%d%d%d%d%d%d",&x,&y,&z,&t,&u,&v);
	}
	 void xuat(int A, int B,int C)
	 {
		 printf("%d %d% d", A,B,C);
	 }
	 void xuly(int x, int y, int z, int t, int u, int v, int&A,int&B,int&C)
	 {
		 A=0;B=0;C=0;
		 xet(x,y,A,B);
		 xet(z,t,A,C);
		 xet(u,v,B,C);
	 }
	  void xet( int x, int y, int&A, int&B)
	  {

		  if (x==y)
		  { 
			  A+=1;  B+=1;
		  }
		   if( (x==1)&&(y==2))
			 {  
				 A+=0; B+=3;
			 }
		     if( (x==1)&&(y==3))
			 {  
				 B+=0; A+=3;
			 }
			   if( (x==2)&&(y==1))
			 {  
				 A+=3; B+=0;
			 }
			     if( (x==2)&&(y==3))
			 {  
				 A+=0; B+=3;
			 }
				   if( (x==3)&&(y==1))
			 {  
				 A+=0; B+=3;
			 }
				     if( (x==3)&&(y==2))
			 {  
				 B+=0; A+=3;
			 }
	  }
			      