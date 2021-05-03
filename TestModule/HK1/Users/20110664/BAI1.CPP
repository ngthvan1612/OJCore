#include <stdio.h>
int diem(int a,int b);
void main()
{
	int x,y,z,t,u,v;
	scanf("%d%d%d%d%d%d",&x,&y,&z,&t,&u,&v);
	int a= diem(x,y)+diem(z,t);
	int b= diem(y,x)+diem(u,v);
	int c= diem(t,z)+diem(v,u);
	printf("%d %d %d",a,b,c);
}

int diem(int a,int b)
{
	if (a==b)
		return 1;
	else
		if (a==1)
			if (b==3)
				return 3;
			else
				return 0;
		if (a==2)
			if (b==1)
				return 3;
			else
				return 0;
		if (a==3)
			if (b==2)
				return 3;
			else 
				return 0;
  return 0;
}