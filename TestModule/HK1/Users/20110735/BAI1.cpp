#include <stdio.h>
void input (int &x, int &y, int &z, int &t, int &u, int &v);
void solve (int &x, int &y, int &z, int t, int u, int v);
int check (int a, int b);
void output (int x, int y, int z);
int main () {
	int x,y,z,t,u,v;
	input (x,y,z,t,u,v);
	solve(x,y,z,t,u,v);
	output (x,y,z);
	return 0;
}
void input (int &x, int &y, int &z, int &t, int &u, int &v) {
	scanf ("%d%d%d%d%d%d",&x,&y,&z,&t,&u,&v);
}
void solve (int &x, int &y, int &z, int t, int u, int v) {
	int a=0,b=0,c=0;
	if (check(x,y)==1) a+=3;
	else if (check(x,y)==2) b+=3;
	else if (check(x,y)==0) {
		a+=1;
		b+=1;
	}
	if (check(z,t)==1) a+=3;
	else if (check(z,t)==2) c+=3;
	else if (check(z,t)==0) {
		a+=1;
		c+=1;
	}
	if (check(u,v)==1) b+=3;
	else if (check(u,v)==2) c+=3;
	else if (check(u,v)==0) {
		c+=1;
		b+=1;
	}
	x=a;
	y=b;
	z=c;
}
int check (int a, int b) {
	if (a==1 && b==2) return 2; // b thang
	if (a==1 && b==3) return 1;// a thang
	if (a==2 && b==1) return 1;// a thang
	if (a==2 && b==3) return 2;// b thang
	if (a==3 && b==1) return 2;// b thang
	if (a==3 && b==2) return 1; // a thang
	if (a==3 && b==3) return 0; // hoa
	if (a==2 && b==2) return 0; // hoa
	if (a==1 && b==1) return 0; // hoa
}
void output (int x, int y, int z) {
	printf ("%d %d %d",x,y,z);
} 
