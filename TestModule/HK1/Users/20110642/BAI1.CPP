#include<stdio.h>
int ketqua (int x, int y, int z, int t, int u, int v, int &a, int &b, int &c);
void ketquarieng (int x, int y, int &a, int &b);
void main (){
	int x,y,z,t,u,v,a=0,b=0,c=0;
	scanf ("%d%d%d%d%d%d",&x,&y,&z,&t,&u,&v);
	int kq=ketqua (x,y,z,t,u,v,a,b,c);
	printf ("%d %d %d",a,b,c);
}
int ketqua (int x, int y, int z, int t, int u, int v, int &a, int &b, int &c){
	ketquarieng (x,y,a,b);
	ketquarieng (z,t,a,c);
	ketquarieng (u,v,b,c);
	return 0;
}
void ketquarieng (int x, int y, int &a, int &b){
	if (x==1)
		if (y==2)
			b=b+3;
		else if (y==3)
				a=a+3;
			else {
				a=a+1;
				b=b+1;
			}
	else if (x==2){
			if (y==1)
				a=a+3;
			else if (y==3)
					b=b+3;
				else {
					a++;
					b++;
				}
		}
	else {
		if (y==1)
			b=b+3;
		else if (y==2)
				a=a+3;
		else {
			a++;
			b++;
		}
	}
}
