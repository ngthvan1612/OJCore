
#include<stdio.h>

void main() {
	int x, y, z, t, u, v;
	scanf("%d%d%d%d%d%d", &x, &y, &z, &t, &u, &v);

	int a=0, b=0, c=0;
//a vs b
	if((x==1&&y==3) || (x==3&&y==2))
		a += 3;
	if(x==2&&y==2) {
		a++;
		b++;
	}
	if(y==1&&x==3)
		b = b + 3;
	if(y==3&&x==2)
		b += 3;
	printf("%d %d %d\n", a, b, c);
//a vs c
	if((z==1&&t==3) || (z==3&&t==2))
		a += 3;
	if(z==2&&t==2){
		a++;
		c++;
	}
	if((z==3&&t==1) || (z==2&&t==3))
		c += 3;
	printf("%d %d %d\n", a, b, c);
//b vs c
	if((u==1&&v==3) || (u==3&&v==2))
		b += 3;
	if(u==2&&v==2){
		b++;
		c++;
	}
	if((u==3&&v==1) || (u==2&&v==3))
		c += 3;

	printf("%d %d %d", a, b, c);
}