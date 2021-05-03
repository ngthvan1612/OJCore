#include<stdio.h>
void nhap(int &x,int &y,int &z,int &t,int &u,int &v);
int ketqua(int x,int y,int z,int t,int u,int v);
void xuat(int kq);
void main()
{
	
	int x,y,z,t,u,v;
	nhap(x,y,z,t,u,v);
	int kq= ketqua(x,y,z,t,u,v);
	xuat(kq);

}
void nhap(int &x,int &y,int &z,int &t,int &u,int &v)
{
	scanf("%d",&x);
	scanf("%d",&y);
	scanf("%d",&z);
	scanf("%d",&t);
	scanf("%d",&u);
	scanf("%d",&v);


}
int ketqua(int x,int y,int z,int t,int u,int v)
{


	int a1=0;
	int b1=0;
	if((x==1 && y==3)|| (x==3 && y==2) || (x==2 && y==1) )
		a1=a1+3;
	if(x==2 && y==2)
		a1=a1+1; b1=b1+1;
	
	if((x==3 && y==1)|| (x==2 && y==3) || (x==1 && y==2) )
		b1=b1+3;

	


	int a2=0;
	int c2=0;
	if((z==1 && t==3)|| (z==3 && t==2) || (z==2 && t==1) )
		a2=a2+3;
	
	if(z==2 && t==2)
		a2=a2+1; c2=c2+1;
	
	if((z==3 && t==1)|| (z==2 && t==3) || (z==1 && t==2) )
		c2=c2+3;


	int b3=0;
	int c3=0;
	if((u==1 && v==3)|| (u==3 && v==2) || (u==2 && v==1) )
		b3=b3+3;
	;
	if(u==2 && v==2)
		b3=b3+1; c3=c3+1;
	
	if((u==3 && v==1|| u==2 && v==3 || u==1 && v==2) )
		c3=c3+3;



	int A=a1+a2;
	printf("%d ", A);
	int B=b1+b3;
	printf("%d ", B);
	int C=c2+c3;
	printf("%d", C);

	return 0;

}
void xuat(int kq)
{
	printf("     %d ", kq);
}








		
	