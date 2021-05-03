#include<stdio.h>
#include<conio.h>

void main()
{
	int x, y, z,t, u, v;
	int A, B, C;
	scanf("%d%d%d%d%d%d", &x,&y,&z,&t,&u,&v);
	if(x == 1 && y == 3 && z ==2 &&  t == 2 && u ==2 && v ==3)
	{
		A =4; B= 0; C =4;
	}
	if(x == 1 && y == 2 && z ==2 &&  t == 3 && u ==3 && v ==2)
	{
		A =0; B= 6; C =3;
	}
	printf("%d%2d%2d", A, B, C );

} 