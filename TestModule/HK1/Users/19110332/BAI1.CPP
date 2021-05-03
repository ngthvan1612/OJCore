#include<stdio.h>
int dau(int a, int b);
int main()
{
	int a1, b1, a2, c2, b3, c3;
	int da=0, db=0, dc=0;
	scanf("%d%d%d%d%d%d",&a1,&b1,&a2,&c2,&b3,&c3);
	if(dau(a1, b1)==1)
	{
		da+=1;
		db+=1;
	}
	if(dau(a1, b1)==3)
		da+=3;
	if(dau(a1, b1)==0)
		db+=3;

	if(dau(a2, c2)==1)
	{
		da+=1;
		dc+=1;
	}
	if(dau(a2, c2)==3)
		da+=3;
	if(dau(a2, c2)==0)
		dc+=3;

	if(dau(b3, c3)==1)
	{
		db+=1;
		dc+=1;
	}
	if(dau(b3, c3)==3)
		db+=3;
	if(dau(b3, c3)==0)
		dc+=3;

	printf("%d %d %d", da, db, dc);
	return 0;

}
int dau(int a, int b)
{
	if(a==b)
	{
		return 1;
	}
	else
	{
		if((a==1&&b==3)||(a==3&&b==2)||(a==2&&b==1))
		{
			return 3;
		}
		else
		{
			return 0;
		}
	}
}


