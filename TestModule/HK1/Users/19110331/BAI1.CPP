#include <stdio.h>
int tinh(int a, int b)
{
	if (a==1)
		if(b==2)
		   return -1;
		else
			if (b==3)
				return 1;
			else
				return 0;
	else
		if(a==2)
			if (b==1)
				return 1;
			else
				if(b==2)
					return 0;
				else
					return -1;
				else
					if (b==1)
						return -1;
					else
						if(b==2)
							return 1;
						else
							return 0;
}
int sosanh(int c)
{
	if (c==1)
		return 3;
	else
		if (c==0)
			return 1;
		else
			return 0;
}
void main()
{
	int x,y,z,t,u,v;
	int a =0;
	int b=0;
	int c=0;
	scanf("%d%d%d%d%d%d",&x,&y,&z,&t,&u,&v);
	a+=sosanh(tinh(x,y));
	a+=sosanh(tinh(z,t));
	b+=sosanh(tinh(y,x));
	b+=sosanh(tinh(u,v));
	c+=sosanh(tinh(t,z));
	c+=sosanh(tinh(v,u));
	printf("%d %d %d",a,b,c);

}