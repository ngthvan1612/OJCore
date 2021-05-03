#include<stdio.h>
int main(){
	int x, y, z, t, u, v;
	scanf("%d %d %d %d %d %d", &x, &y, &z, &t, &u, &v);
	int a = 0;
	int b = 0;
	int c = 0;
	if( x==1 && y ==2 || x == 2 && y == 3 || x == 3 && y == 1){
		b = b +3;
		a = a + 0;
	}
	if (x == 2 && y == 1 || x ==3 && y ==2 || x == 1 && y == 3){
		a = a +3;
		b = b + 0;
	}
	if( x = y){
		a = a+ 1;
		b = b + 1;
	}
	if(z ==1 && t ==2 || z == 2 && t == 3 || z == 3 && t == 1){
		c =c +3;
		a = a + 0;
	}
	if (z == 2 && t == 1 || z ==3 && t ==2 || z == 1 && t == 3){
		a = a +3;
		c = c + 0;
	}
	if( z = t){
		a = a + 1;
		c = c + 1;
	}
	if( u==1 && v ==2 || u == 2 && v == 3 || u == 3 && v == 1){
		c = c +3;
		b = b + 0;
	}
	if (u == 2 && v == 1 || u ==3 && v ==2 || u == 1 && v == 3){
		b = b +3;
		c = c + 0;
	}
	if( u = v){
		c = c + 1;
		b = b + 1;
	}
	printf("%d %d %d", a, b, c);
	return 0;
}
