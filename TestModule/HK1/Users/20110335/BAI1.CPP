#include<stdio.h>
void xuli(int x, int y, int z, int t, int u, int v);
void main()
{
	int x,y,z,t,u,v;
	scanf("%d%d%d%d%d%d",&x,&y,&z,&t,&u,&v);
	xuli(x,y,z,t,u,v);
}

void xuli(int x, int y, int z, int t, int u, int v)
{
	int a=0,b=0,c=0;
	if(x==1 && y==3|| x==3&&y==2||x==2&&y==1)
		a+=3;
	if(x==y){
		a++;b++;}
	if(z==1 && t==3|| z==3&&t==2||z==2&&t==1)
		a+=3;
	if(z==t){
		a++;c++;}
	if(u==1 && v==3|| u==3&&v==2||u==2&&v==1)
		b+=3;
	if(u==v){
		b++;c++;}
	if(y==1 && x==3|| y==3&&x==2||y==2&&x==1)
		b+=3;
	if(t==1 && z==3|| t==3&&z==2||t==2&&z==1)
		c+=3;
	if (v==1 && u==3|| v==3&&u==2||v==2&&u==1)
		c+=3;
	printf("%d %d %d",a,b,c);

}
