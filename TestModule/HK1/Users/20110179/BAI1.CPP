#include<stdio.h>
void timKQ(int &a, int &b, int &c, int x, int y, int z, int t, int u ,int v);
int main(){
	int a=0,b=0,c=0,x,y,z,t,u,v;
	scanf("%d%d%d%d%d%d", &x, &y, &z, &t, &u, &v);
	timKQ(a,b,c,x,y,z,t,u,v);
	printf("%d %d %d", a, b, c);
	return 0;
}
void timKQ(int &a, int &b, int &c, int x, int y, int z, int t, int u ,int v){
	if((x==1&&y==3) || (x==3&&y==2) || (x==2&&y==1)) a+=3;
	else if((y==1&&x==3) || (y==3&&x==2) || (y==2&&x==1)) b+=3;
		else if(x==y){
			a++;
			b++;
		}
	if(z==t){
		a++;
		c++;
	} else if((z==1&&t==3) || (z==3&&t==2) || (z==2&&t==1)) a+=3;
			else c+=3;
	if(u==v){
		b++;
		c++;
	} else if((u==1&&v==3) || (u==3&&v==2) || (u==2&&v==1)) b+=3;
			else c+=3;
}
