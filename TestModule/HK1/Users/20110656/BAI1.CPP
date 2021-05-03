#include<stdio.h>
void nhap(int &x, int &y, int &z, int &t, int &u, int &v);
void xuat(int x, int y, int z, int t, int u , int v);
int main(){
	int x, y, z, t, u, v;
	nhap(x, y, z, t, u, v);
	xuat(x, y, z, t, u , v);
	return 0;
}
void nhap(int &x, int &y, int &z, int &t, int &u, int &v){
	scanf("%d %d %d %d %d %d", &x, &y, &z, &t, &u, &v);
}
void xuat(int x, int y, int z, int t, int u , int v){
	int a1, a2, b1, b2, c1, c2;
	if(x){	
		if(x==1){
			if(y==1||y==2)
				int a1=0;
			else if(y==3)
				int a1=1;
		}
		else if(x==2){
			if(y==1)
				int a1=1;
			else if(y==2||y==3)
				int a1=0;
		}
		else if(x==3){
			if(y==1||y==3)
				int a1=0;
			else if(y==2)
				int a1=1;
		}
	}
	if(y){	
		if(y==1){
			if(x==1||x==2)
				int b1=0;
			else if(x==3)
				int b1=1;
		}
		else if(y==2){
			if(x==1)
				int b1=1;
			else if(x==2||x==3)
				int b1=0;
		}
		else if(y==3){
			if(y==1||y==3)
				int b1=0;
			else if(y==2)
				int b1=1;
		}
	}
	if(z){	
		if(z==1){
			if(t==1||t==2)
				int a2=0;
			else if(t==3)
				int a2=1;
		}
		else if(z==2){
			if(t==1)
				int a2=1;
			else if(y==2||y==3)
				int a2=0;
		}
		else if(z==3){
			if(t==1||t==3)
				int a2=0;
			else if(y==2)
				int a2=1;
		}
	}
	if(t){	
		if(t==1){
			if(z==1||z==2)
				int b2=0;
			else if(z==3)
				int b2=1;
		}
		else if(t==2){
			if(z==1)
				int b2=1;
			else if(z==2||z==3)
				int b2=0;
		}
		else if(t==3){
			if(z==1||z==3)
				int b2=0;
			else if(z==2)
				int b2=1;
		}
	}
	if(u){	
		if(u==1){
			if(v==1||v==2)
				int c1=0;
			else if(v==3)
				int c1=1;
		}
		else if(u==2){
			if(v==1)
				int c1=1;
			else if(v==2||v==3)
				int c1=0;
		}
		else if(u==3){
			if(v==1||v==3)
				int c1=0;
			else if(v==2)
				int c1=1;
		}
	}
	if(v){	
		if(v==1){
			if(u==1||u==2)
				int c2=0;
			else if(u==3)
				int c2=1;
		}
		else if(v==2){
			if(u==1)
				int c2=1;
			else if(u==2||u==3)
				int c2=0;
		}
		else if(v==3){
			if(u==1||u==3)
				int c2=0;
			else if(u==2)
				int c2=1;
		}
	}
	printf("%d %d %d", (a1+a2), (b1+b2), (c1+c2));
}
