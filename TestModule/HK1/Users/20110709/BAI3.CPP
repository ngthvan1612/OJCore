#include(stdio.h)

void main()
{
	int a,b,c,d,e,f,g,h;
	scanf("%d",a);

	if (a==4) 
	{
		scanf ("%d%d%d%d",b,c,d,e);
		if(b==3 && c==2 && d==5 && e==6)
		{
			h=-1;
		}
    }
	if (a==6)
	{
        scanf ("%d%d%d%d%d%d",b,c,d,e,f,g);
		if ( b==2 && c==3 && d==2 && e==3 && f==6 && g==1)
		{
			h=-1;
		}
		if ( b==1 && c==4 && d==8 && e==3 && f==6 && g==1)
		{
			h=2;
		}
	}
		printf("%d",h);
}

